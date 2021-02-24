#include<iostream>

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
void insertATHead(node* &head, int val){
    node* n = new node(val);
    n->next = head;
    head = n;
}
void insertAtTail(node* &head, int val){
    if(head==NULL){
       insertATHead(head, val);
        return;
    }
    node* n = new node(val);
    node* temp = head;
    while(temp->next!= NULL){
        temp = temp->next;
    }
    temp->next = n;
}
void display(node* head){
    node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"Null"<<endl;
}
node* mergeRecursive(node* head1,  node* head2){
    if(head1 == NULL){
        return head2;
    }
    if(head2 == NULL){
        return head1;
    }
    node* result;
    if(head1->data < head2->data){
        result = head1;
        result->next = mergeRecursive(head1->next, head2);
    }
    else{
        result = head2;
        result->next = mergeRecursive(head1, head2->next);
    }
    return result;
}
int main(){
    node* head1 = NULL;
    node* head2 = NULL;
    int arr1[] = {1,4,5,7};
    int arr2[] = {2,3,6};
    
    for(int i=0; i<4; i++){
        insertAtTail(head1, arr1[i]);
    }
    
    for(int i=0; i<3; i++){
        insertAtTail(head2, arr2[i]);
    }
    cout<<"arr1 :\n";
    display(head1);
    cout<<"arr2:\n";
    display(head2);

    node* newHead = mergeRecursive(head1, head2);
    cout<<"Merge 2 - sorted Linked List:\n";
    display(newHead);
 
 
    return 0;
}