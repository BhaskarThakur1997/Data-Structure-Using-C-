
// reverse linked list using iterative approach

#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void insertAtHead(node* &head, int val){
        node* new_node = new node(val);
        new_node->next = head;
        head = new_node;
}
void insertAtTail(node* &head, int val){
    node* new_node = new node(val);
    if(head==NULL){
        insertAtHead(head,val);
        return;
    }
    node* current = head;
    while(current->next!=NULL){
        current = current->next;
    }
    current->next = new_node;
}
node* iterativeReverse(node* &head){
    node* previous = NULL;
    node* current = head;
    node* next;
    while(current!=NULL){
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }
    return previous;
}
node* reverseK(node* head, int k){
    node* previous = NULL;
    node* current = head;
    node* next;
    int count=0;
    while(current!=NULL && count<k){
        next = current->next;
        current->next=previous;
        previous=current;
        current=next;
        count++;
    }
    if(next!=NULL){
        head->next=reverseK(next,k);
    }
    return previous;
}
void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"Null"<<endl;
}
int main(){
    node* head = NULL;
    /*insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,2);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    insertAtTail(head,7);
    insertAtTail(head,8);
    display(head);*/
    //node* newHead = iterativeReverse(head);
    //display(newHead);
    int test;
    cin>>test;
    while(test--){
        int num,k;
        cin>>num>>k;
        int arr[num];
    for(int i=0; i<num; i++){
        cin>>arr[i];
    }
    for(int i=0; i<num; i++)
        insertAtTail(head,arr[i]);
    
    //int k=4;
    node* new_node = reverseK(head,k);
    display(new_node);
    }
    
    
}