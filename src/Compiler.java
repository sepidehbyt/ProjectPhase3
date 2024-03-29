import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class Compiler {

    private Stack stack;
    private Boolean currentFunction = false;
    private Parse currentFunctionParse ;
    private String lastOp;
    private ArrayList<String> functionValues;
    private String funcName;
    private String funcCallName;
    private String [] patterns = {
            "IDtoken -> lvalue",
            "INTtoken -> exp",
            "exp \\b(.*)\\b exp -> exp",
            "lvalue ASSIGNMENT exp -> stmt",
            "LEFTP exp RIGHTP -> exp",
            "stmt -> block",
            "Begin stmtlist End -> block",
            "While exp Do block -> stmt",
            "If exp Then block -> stmt",
            "If exp Then block Else block -> stmt",
            "IDtoken -> paramlist", //Function input
            "paramlist COMMA IDtoken -> paramlist", //Function input
            "paramdec -> paramdecs", //Function inputs end
            "Function funcValue LEFTP paramdecs RIGHTP COLON type block SEMICOLON",
            "funcCallValue LEFTP explist RIGHTP -> exp", //function call
            "exp -> explist",//function call variable values
            "explist COMMA exp -> explist ",//function call variable values
            "IDtoken -> funcValue",
            "IDtoken -> funcCallValue",
            "Return exp -> stmt",
            "caseValue COLON block SEMICOLON -> caseelement",
            "caseelement caseValue COLON block SEMICOLON -> caseelement",
            "Case exp caseelement End -> stmt",
            "INTtoken -> caseValue",
            "For lvalue ASSIGNMENT exp To exp Do block -> stmt",
            "For lvalue ASSIGNMENT exp Downto exp Do block -> stmt",
            "Program IDtoken SEMICOLON declist block SEMICOLON",

    };

    private Compiler(String path) {
        stack = new Stack();
        functionValues = new ArrayList<>();
        readAndHandle(path);
    }

    private void readAndHandle(String path) {
        Scanner scanner = null;
        try {
            scanner = new Scanner(new File(path));
            while (scanner.hasNextLine()) {
                String Line = scanner.nextLine();
                String pattern = patternFind(Line);
                if(!pattern.equals("")) {
//                    System.out.println(pattern);
                    performPattern(pattern, Line);
                }
            }
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        }
        stack.print();
        stack.printAnswer();
//        System.out.println(stack.getParses().get(stack.getParses().size()-1).getCode());
        printTheAns();
    }

    private String patternFind (String Line) {
        for (String patternString : patterns) {
            Pattern pattern = Pattern.compile(patternString);
            Matcher matcher = pattern.matcher(Line);
            if(matcher.find()) {
                return patternString;
            }
        }
        return "";
    }

    private void performPattern(String patternString, String Line) {
        switch (patternString) {
            case "IDtoken -> lvalue":
                stack.addND(getYYText(Line));
                break;
            case "INTtoken -> exp":
                Line = Line.replaceAll("#", "");
                stack.addND(getYYText(Line));
                break;
            case "exp \\b(.*)\\b exp -> exp":
                processExpOpExp(Line);
                break;
            case "lvalue ASSIGNMENT exp -> stmt":
                stack.addAssignmentStatement();
                break;
            case "LEFTP exp RIGHTP -> exp":
                if(!lastOp.equals("DIV") && !lastOp.equals("MUL") &&
                        !lastOp.equals("SUB") && !lastOp.equals("ADD"))
                    stack.makeTheLastNDExp();
                break;
            case "Begin stmtlist End -> block":
                stack.addStatement();
                break;
            case "stmt -> block":
                stack.addStatement();
                break;
            case "While exp Do block -> stmt":
                stack.addWhile();
                break;
            case "If exp Then block -> stmt":
                stack.addIf();
                break;
            case "If exp Then block Else block -> stmt":
                stack.addIfElse();
                break;
            case "IDtoken -> paramlist":
                if(!currentFunction){
                    stack.nextScope();
                    currentFunctionParse = stack.addParam(getYYText(Line));
                    currentFunctionParse.setFunctionName(funcName);
                    currentFunction = true;
                }else{
                    currentFunctionParse.addToParams(getYYText(Line).trim());
                }
                break;
            case "paramlist COMMA IDtoken -> paramlist":
                currentFunctionParse.addToParams(getYYText(Line));
                break;
            case "paramdec -> paramdecs":
                currentFunction = false;
                //function input ends
                break;
            case "IDtoken -> funcValue":
                funcName = getYYText(Line.trim());
                break;
            case "IDtoken -> funcCallValue":
                funcCallName = getYYText(Line.trim());
                break;
            case "Function funcValue LEFTP paramdecs RIGHTP COLON type block SEMICOLON":
                stack.resetScope(funcName);
                //currentFunctionParse.setCode();
                break;
            case "Return exp -> stmt":
                stack.prevScope(currentFunctionParse);
                break;
            case "funcCallValue LEFTP explist RIGHTP -> exp":
                stack.addGotoFunction(funcCallName,functionValues);
                functionValues = new ArrayList<>();
                //set return label esmesho nemide khate badesh ye label mizarim labelaro mirizim to rtop
                //rtop = rtop - 1;
                //*rtop = &&L0;
                //bar asase esmesh ke mide bebinim chanta vorodi migire az inputStack hamonghadr berizim to top
                break;
            case "explist COMMA exp -> explist":
                Line = Line.replaceAll("#", "");
                functionValues.add(stack.getLastNDNotTrue(1).get(0).getPlace());
                //add to stack value ro nemide hanoz
                break;
            case "exp -> explist":
                Line = Line.replaceAll("#", "");
                functionValues.add(stack.getLastNDNotTrue(1).get(0).getPlace());
                //add to stack value ro nemide hanoz
                //baade akharin vorodi bayad baade akharin ghanon ye L(akharin placeholder label) : scopes = scopes + 1; bezarim bara vaghti bargasht
                break;
            case "INTtoken -> caseValue":
                stack.addCaseValue(getYYText(Line));
                break;
            case "caseValue COLON block SEMICOLON -> caseelement":
                stack.makeTheLastBlockCaseElement();
                break;
            case "caseelement caseValue COLON block SEMICOLON -> caseelement":
                stack.makeTheLastBlockCaseElement();
                break;
            case "Case exp caseelement End -> stmt":
                stack.addCase();
                break;
            case "For lvalue ASSIGNMENT exp To exp Do block -> stmt":
                stack.addFor("To");
                break;
            case "For lvalue ASSIGNMENT exp Downto exp Do block -> stmt":
                stack.addFor("Downto");
                break;
        }
    }

    private String getYYText(String Line) {
        Pattern pattern = Pattern.compile("yytext = (.*)");
        Matcher matcher = pattern.matcher(Line);
        return (matcher.find()) ? matcher.group(1).replaceAll("#", "") : "";
    }

    private void processExpOpExp(String Line) {
        Pattern p = Pattern.compile("exp \\b(.*)\\b exp");
        Matcher m = p.matcher(Line);
        String op = (m.find()) ? m.group(1) : "";
        lastOp = op;
        switch (op) {
            case "DIV":
                stack.addArithmaticStatement("/");
                break;
            case "SUB":
                stack.addArithmaticStatement("-");
                break;
            case "ADD":
                stack.addArithmaticStatement("+");
                break;
            case "MUL":
                stack.addArithmaticStatement("*");
                break;
            case "GT":
                stack.addRelOpExp(">");
                break;
            case "NE":
                stack.addRelOpExp("!=");
                break;
            case "LT":
                stack.addRelOpExp("<");
                break;
            case "EQ":
                stack.addRelOpExp("==");
                break;
            case "GE":
                stack.addRelOpExp(">=");
                break;
            case "LE":
                stack.addRelOpExp("<=");
                break;
        }
    }

    private void printTheAns() {
        //TODO complete this shit
    }

    public static void main(String[] args) throws IOException {
        Runtime.getRuntime().exec("C:\\Users\\Sepideh\\Documents\\Sepideh Duc\\Courses term8\\Compiler\\Intermidiate Code\\ProjectPhase3\\target", null,
                new File("C:\\Users\\Sepideh\\Documents\\Sepideh Duc\\Courses term8\\Compiler\\Intermidiate Code\\ProjectPhase3"));
        new Compiler("./output.txt");
    }

}
