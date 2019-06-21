import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;

public class Stack {

    private ArrayList<Parse> parses;
    private ArrayList<ArrayList<Parse>> allScopesParses;
    private int id = 0;
    private int placeHolder = 0;
    private int labelHolder = 0;
    private int statementHolder = 0;
    private int whileHolder = 0;
    private int ifHolder = 0;
    private boolean functionreturn = false;

    public Stack() {
        parses = new ArrayList<>();
        allScopesParses = new ArrayList<>();
        allScopesParses.add(parses);
    }

    public void nextScope(){
        parses = new ArrayList<>();
        allScopesParses.add(parses);
    }

    public void prevScope(Parse currentFunctionParse){
//        ArrayList.remove(int index);
        String setValueCode = "";
        for(int i = 0 ; i < currentFunctionParse.getParamStack().size() ; i++){
            setValueCode += "\nsetValue(scopes,\"" +currentFunctionParse.getParamStack().get(i)+"\",*top);" + "\ntop = top + 1;";
        }
        allScopesParses.get(allScopesParses.size()-1).get(allScopesParses.get(allScopesParses.size()-1).size()-1).setCode(currentFunctionParse.getFunctionName()+" : scopes = scopes - 1;" + setValueCode +"\n" + allScopesParses.get(allScopesParses.size()-1).get(allScopesParses.get(allScopesParses.size()-1).size()-1).getCode()
                + "top = top - 1;\n*top =" + "T" + (placeHolder-1) + ";\nreturnAddress = *rtop;\nrtop = rtop + 1;\ngoto *returnAddress;");
        parses = allScopesParses.get(0);
//        System.out.println(allScopesParses.get(allScopesParses.size()-1).get(allScopesParses.get(allScopesParses.size()-1).size()-1));
    }

    public void addGotoFunction(String name){
        Parse check = parses.get(parses.size() - 1);
        if(check.getType().equals(Parse.parse_type.nd) && !check.isProcessed()) {
            check.setCode((check.getCode() == null ? "" : (check.getCode()+"\n")) + "rtop = rtop - 1;\n" + "*rtop = &&L" + (labelHolder++) + ";\n" +  "goto " + name + ";\n");
        }
        //nemitonam check konam ke age null nabashe dorost dar miad ya naß

        ArrayList<Parse> funcInputNDs = getLastND(getFunctionInputSize(name));
        for(int i = 0 ; i < funcInputNDs.size() ; i++){
            funcInputNDs.get(i).setProcessed(true);
        }

        Parse parse = new Parse();
        parse.setId(id++);
        parse.setPlace("T"+(placeHolder++));
        parse.setType(Parse.parse_type.nd);
        parse.setProcessed(false);
        parses.add(parse);

        functionreturn = true;

    }


    public Parse addND (String place) {
        Parse parse = new Parse();
        parse.setId(id++);
        parse.setPlace(place.trim());
        parse.setType(Parse.parse_type.nd);
        parse.setProcessed(false);
        parses.add(parse);
        return parse;
    }

    public Parse addArithmaticStatement(String op) {
        Parse parse = new Parse();
        parse.setId(id++);
        parse.setPlace("T"+(placeHolder++));
        parse.setType(Parse.parse_type.nd);
        parse.setProcessed(false);
        ArrayList<Parse> twoLast = getLastND(2);
        Parse first = twoLast.get(1);
        Parse second = twoLast.get(0);
        parse.setCode(getAllThePossibleNDCode()+parse.getPlace()+"=" + first.getPlace() +op+ second.getPlace() +"\n");
        parses.add(parse);
        return parse;
    }

    public Parse addAssignmentStatement() {
        Parse parse = new Parse();
        parse.setId(id++);
        ArrayList<Parse> twoLast = getLastND(2);
        Parse first = twoLast.get(1);
        Parse second = twoLast.get(0);
        parse.setPlace("setValue(scopes,\"" + first.getActualPlace() + "\"," + second.getPlace() + ");");
        parse.setType(Parse.parse_type.nd);
        parse.setProcessed(false);
        if(functionreturn){
            parse.setCode(getAllThePossibleNDCode()+ "T" + (placeHolder-1) + "= *top;\ntop = top + 1;\n" +parse.getPlace()+"\n");
            functionreturn = false;
        }else{
            parse.setCode(getAllThePossibleNDCode()+parse.getPlace()+"\n");
        }
        parses.add(parse);
        return parse;
    }

    private String getAllThePossibleNDCode() {
        StringBuilder code = new StringBuilder();
        for (int i = parses.size() - 1 ; i >= 0; i--) {
            Parse check = parses.get(i);
            if(check.getType().equals(Parse.parse_type.nd) && check.getCode() != null) {
                code.append(check.getCode());
                break;
            }
            else if(check.getType().equals(Parse.parse_type.exp))
                break;
        }
        return code.toString();
    }

    public Parse addRelOpExp (String op) {
        Parse parse = new Parse();
        parse.setId(id++);
        ArrayList<Parse> twoLast = getLastND(2);
        Parse first = twoLast.get(1);
        Parse second = twoLast.get(0);
        parse.setPlace(first.getPlace()+op+second.getPlace());
        parse.setType(Parse.parse_type.nd);
        parse.setProcessed(false);
        parse.setTLabel("L"+(labelHolder++));
        parse.setFLabel("L"+(labelHolder++));
        parse.setCode(getAllThePossibleNDCode()+"if("+parse.getPlace()+") goto "+parse.getTLabel()+";\ngoto "+parse.getFLabel()+";");
        parses.add(parse);
        return parse;
    }

    public Parse makeTheLastNDExp() {
        for (int i = parses.size() - 1 ; i >= 0; i--) {
            Parse check = parses.get(i);
            if(check.getType().equals(Parse.parse_type.nd) && !check.isProcessed()) {
                check.setType(Parse.parse_type.exp);
                return check;
            }
        }
        return null;
    }

    public Parse addStatement() {
        Parse parse = new Parse();
        parse.setId(id++);
        parse.setPlace("s"+(statementHolder++));
        parse.setType(Parse.parse_type.block);
        parse.setProcessed(false);
        ArrayList<Parse> lastND = getLastND(1);
        Parse last = lastND.get(0);
        if(last.getNextLabel() != null)
            parse.setNextLabel(last.getNextLabel());
        parse.setCode(last.getCode());
        parses.add(parse);
        return parse;
    }

    public Parse addWhile(){
        Parse parse = new Parse();
        parse.setId(id++);
        parse.setPlace("w"+(whileHolder++));
        parse.setType(Parse.parse_type.nd);
        parse.setProcessed(false);
        Map<String, Parse> data = getLastExpAndLastBlock();
        Parse exp = data.get("exp");
        Parse block = data.get("block");
        parse.setNextLabel(exp.getFLabel());
        parse.setBeginLabel("L"+(labelHolder++));
        parse.setCode(parse.getBeginLabel()+": "+exp.getCode()+"\n"+exp.getTLabel()+": "+block.getCode()+
                (block.getNextLabel() != null ? "\n"+(block.getNextLabel()) + ": " : "") +
                "goto "+parse.getBeginLabel() + ";" +
                (block.getNextLabel() != null ? "\n"+(parse.getNextLabel()) + ": " : "") );
        parses.add(parse);
        return parse;
    }

    public Parse addIf(){
        Parse parse = new Parse();
        parse.setId(id++);
        parse.setPlace("I"+(ifHolder++));
        parse.setType(Parse.parse_type.nd);
        parse.setProcessed(false);
        Map<String, Parse> data = getLastExpAndLastBlock();
        Parse exp = data.get("exp");
        Parse block = data.get("block");
        parse.setNextLabel(exp.getFLabel());
        parse.setCode(exp.getCode()+"\n"+exp.getTLabel()+": "+block.getCode()+
                exp.getFLabel()+": ");
        parses.add(parse);
        return parse;
    }

    public Parse addIfElse(){
        Parse parse = new Parse();
//        parse.setId(id++);
//        parse.setPlace("w"+(whileHolder++));
//        parse.setType(Parse.parse_type.nd);
//        parse.setProcessed(false);
//        Map<String, Parse> data = getLastExpAndLastBlock();
//        Parse exp = data.get("exp");
//        Parse block = data.get("block");
//        parse.setNextLabel(exp.getFLabel());
//        parse.setBeginLabel("L"+(labelHolder++));
//        parse.setCode(parse.getBeginLabel()+": "+exp.getCode()+"\n"+exp.getTLabel()+": "+block.getCode()+
//                (block.getNextLabel() != null ? "\n"+(block.getNextLabel()) + ": " : "") +
//                "goto "+parse.getBeginLabel() +
//                (block.getNextLabel() != null ? "\n"+(parse.getNextLabel()) + ": " : "") );
//        parses.add(parse);
        return parse;
    }

    public Parse addParam(String name) {
        Parse parse = new Parse();
        parse.setId(id++);
        parse.addToParams(name.trim());
        //parse.setPlace( function name ) ??
        parse.setType(Parse.parse_type.param);
        parse.setProcessed(false);
        parses.add(parse);
        return parse;
    }



    private Map<String, Parse> getLastExpAndLastBlock() {
        Map<String, Parse> res = new HashMap<>();
        boolean exp = false, block = false;
        for (int i = parses.size() - 1 ; i >= 0; i--) {
            Parse check = parses.get(i);
            if(check.getType().equals(Parse.parse_type.exp) && !check.isProcessed()) {
                check.setProcessed(true);
                res.put("exp", check);
                exp = true;
            }
            else if(check.getType().equals(Parse.parse_type.block) && !check.isProcessed()) {
                check.setProcessed(true);
                res.put("block", check);
                block = true;
            }
            if(exp && block)
                return res;
        }
        return res;
    }

    private ArrayList<Parse> getLastND(int count) {
        ArrayList<Parse> res = new ArrayList<>();
        for (int i = parses.size() - 1 ; i >= 0 && res.size() != count ; i--) {
            Parse check = parses.get(i);
            if(check.getType().equals(Parse.parse_type.nd) && !check.isProcessed()) {
                check.setProcessed(true);
                res.add(check);
            }
        }
        return res;
    }

    public boolean contains (String name) {
        for (Parse parse : parses) {
            if (parse.getPlace().equals(name)) {
                return true;
            }
        }
        return false;
    }

    public ArrayList<Parse> getParses() {
        return parses;
    }

    public int getFunctionInputSize(String name){
        for (int i = 0 ; i < allScopesParses.size() ; i++){
            for (int j = 0 ; j < allScopesParses.get(i).size() ; j++){
                if(allScopesParses.get(i).get(j).getFunctionName() != null && allScopesParses.get(i).get(j).getFunctionName().contains(name)){
                //contains nist vali ; dare tahesh nemidonam chera
                    return allScopesParses.get(i).get(j).getParamStack().size();
                }
            }
        }
        return 0;
//        System.out.println(allScopesParses.get(1));
    }

    public void print(){
        for (int i = 0 ; i < allScopesParses.size() ; i++){
            System.out.println(i + " : " + allScopesParses.get(i).get(allScopesParses.get(i).size()-1).getCode());
        }
//        System.out.println(allScopesParses.get(1));
    }

    public void setParses(ArrayList<Parse> parses) {
        this.parses = parses;
    }

}
