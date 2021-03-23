/*
Given a string A denoting an expression. It contains the following operators ’+’, ‘-‘, ‘*’, ‘/’.

Chech whether A has redundant braces or not.

Return 1 if A has redundant braces, else return 0.

Note: A will be always a valid expression.
*/

#include <iostream>
#include <stack>
using namespace std;

int main(){
    string str;
    cin>> str;
    stack<char> st;
    bool result = false;
    for(int i=0; i<str.size(); i++){
        if(str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/'){
            st.push(str[i]);
        }
        else if(str[i] == '('){
            st.push(str[i]);
        }
        else if(str[i] == ')'){
            if(st.top() == '('){
                result = true;
            }
            while(!st.empty() && st.top() != '('){
                st.pop();
            }
            st.pop();
        }
    }
    cout<<result;
    return 0;
}
