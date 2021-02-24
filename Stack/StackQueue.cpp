/* Implement Stack Using Queue */

#include <iostream>
#include<queue>
using namespace std;

class stack{
    int n;
    queue<int> Q1;
    queue<int> Q2;
    public:
     stack(){
        n=0;
    }
    void push(int x){
        Q2.push(x);
        n++;
        while(!Q1.empty()){
            Q2.push(Q1.front());
            Q1.pop();
        }
        queue<int> temp=Q1;
        Q1=Q2;
        Q2=temp;
    }
    void pop(){
        Q1.pop();
        n--;
    }
    int top(){
        return Q1.front();
    }
    int size(){
        return n;
    }
};
int main(){
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.top()<<endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout<<st.size()<<endl;
    return 0;
}
