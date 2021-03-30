
import java.util.Scanner;
import java.util.Stack;


public class RedundantBraces {
 public static int braces(String a) {
    Stack<Character> st = new Stack<Character>();
    for(int i=0; i<a.length(); i++){
        if(a.charAt(i) == '+' || a.charAt(i) == '-' || a.charAt(i) == '*' || a.charAt(i) == '/'){
            st.push(a.charAt(i));
        }
        else if(a.charAt(i) == '('){
            st.push(a.charAt(i));
        }
        else if(a.charAt(i) == ')'){
            if(st.peek() == '('){
                return 1;
            }
            while(!st.empty() && st.peek()!='('){
            st.pop();
            }
            st.pop();   
        }
    }
    return 0;
}    
 public static void main(String args[]){
     Scanner scan = new Scanner(System.in);
     String a = scan.next();
     System.out.print(braces(a));
 }
}
