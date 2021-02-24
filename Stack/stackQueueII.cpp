/* Implement stack using Queue */
/* Approach II : pop() operation costly */

#include <iostream>
#include <queue>
using namespace std;

class stack{
    int N;
    queue<int>Q1;
    queue<int>Q2;
    public:
    stack(){
        N=0;
    }
    void pop(){
        if(Q1.empty()){
            return;
        }
        while(Q1.size()!=1){
            Q2.push(Q1.front());
            Q1.pop();
        }
        Q1.pop();
        N--;
        queue<int>temp=Q1;
        Q1=Q2;
        Q2=temp;
    }
    void push(int val){
        Q1.push(val);
        N++;
    }
    int top(){
        if(Q1.empty())
        return -1;
        while(Q1.size()!=1){
            Q2.push(Q1.front());
            Q1.pop();
        }
        int ans=Q1.front();
        Q2.push(ans);
        queue<int>temp=Q1;
        Q1=Q2;
        Q2=temp;
        return ans;
    }
    int size(){
        return N;
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
}