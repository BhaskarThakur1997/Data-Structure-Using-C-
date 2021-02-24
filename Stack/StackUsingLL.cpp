// implemt stack using linked list

#include <bits/stdc++.h>
using namespace std;

struct StackUsingLL
{
   int data;
   struct StackUsingLL* link;
};
struct StackUsingLL* top;

void push(int data){
    struct StackUsingLL* temp;
    temp = new StackUsingLL();
    if (!temp)
    {
        cout<<"\nHeap Overflow";
        exit(1);
    }
    temp->data = data;
    temp->link = top;
    top = temp;
}

int isEmpty(){
    return top == NULL;
}

int peek(){
    if(!isEmpty())
        return top->data;
    else
    exit(1);
}

void pop(){
    struct StackUsingLL* temp;
    if(top==NULL){
        cout<<"\nStack Underflow"<<endl;
        exit(1);
    }
    else{
        temp = top;
        top = top->link;
        temp->link = NULL;
        free(temp);
    }
}

void display(){
    struct StackUsingLL* temp;
    if(top == NULL){
        cout<<"\nStack Underflow";
        exit(1);
    }
    else{
        temp = top;
        while(temp != NULL){
            cout<<temp->data<<"->";
            temp = temp->link;
        }
    }
}

int main(){
    push(11);
    push(22);
    push(33);
    push(44);
    display();
    cout<<"\nTop elements is:"<<peek()<<endl;
    pop();
    pop();
    display();
    cout<<"\nTop elements is:"<<peek()<<endl;
    return 0;

}