import java.io.*;
import java.lang.reflect.Array;
import java.util.List;
import java.util.Stack;

public class Bracket {

    public static void main(String[] args) throws IOException {
        readFile();
//        System.out.println(isBalanced("{{}("));
//        System.out.println(isBalanced("[](){()}"));
//        System.out.println(isBalanced("()"));
//        System.out.println(isBalanced("({}([][]))[]()"));
//        System.out.println(isBalanced("{)[](}]}]}))}(())("));
//        System.out.println(isBalanced("[()][{}()][](){}([{}(())([[{}]])][])[]([][])(){}{{}{[](){}}}()[]({})[{}{{}([{}][])}]"));
//        System.out.println(isBalanced("{[{((({}{({({()})()})[]({()[[][{-truncated-}"));
    }

    public static String isBalanced(String x) {
        if (x.length() % 2 != 0) {
            return "NO";
        }
        Stack<Character> stack = new Stack();
        for (char s : x.toCharArray()) {
            if (s == '{' || s == '[' || s == '(') {
                stack.push(s);
            } else if (
                    !stack.isEmpty()
                    && ((stack.peek() == '{' && s == '}')
                    || (stack.peek() == '[' && s == ']')
                    || (stack.peek() == '(' && s == ')'))
            ) {
                stack.pop();
            } else {
                return "NO";
            }
        }
        return stack.isEmpty() ? "YES" : "NO";
    }

    public static void readFile() throws IOException {
        File f = new File("./input.txt");
        BufferedReader br = new BufferedReader(new FileReader(f));
        String s;
        int i = 1;
        while ((s = br.readLine()) != null) {
            System.out.printf("%d - %s%n", i, isBalanced(s));
            i += 1;
        }
    }
}
