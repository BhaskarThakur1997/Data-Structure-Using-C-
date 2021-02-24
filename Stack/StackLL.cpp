#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};
node* head;
void push(int data){
    node* temp = new node(data);
    if(!temp){
        cout<<"\nHeap Overflow";
        exit(1);
    }
    temp->data = data;
    temp->next = head;
    head = temp;
}
int isEmpty(){
    return head == NULL;
}
int peek(){
    if(!isEmpty())
        return head->data;
        else
        exit(1);
}
void pop(){
    node* temp;
    if(head==NULL){
        cout<<"\nStack Underflow"<<endl;
        exit(1);
    }
    else{
        temp = head;
        head = head->next;
        temp->next = NULL;
        free(temp);
    }
}

void display(){
    node* temp;
    if(head==NULL){
        cout<<"\nStack underflow";
        exit(1);
    }
    else{
        temp = head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
}
int main(){
    push(11);
    push(22);
    push(33);
    push(44);
    display();

    cout<<"\nTop element:"<<peek()<<endl;
    pop();
    pop();
    display();
    cout<<"\nTop element:"<<peek()<<endl;
    return 0;
}