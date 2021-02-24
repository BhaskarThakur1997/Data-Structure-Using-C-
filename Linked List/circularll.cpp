
#include <cstddef>
class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};
void insertAtHead(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){
        n->next = n;
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
    
}
void insertAtTail(node* &head, int val){
    if(head == NULL){
        insertAtHead(head, val);
        return;
    }
    node* n = new node(val);
    node* temp = head;
    while(temp->next != head){
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}
void display(node* &head){
    node* temp = head;
    do
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    } while (temp!=head);
        cout<<"NULL";
}
int main(){
    node *head = NULL;
 /*   int arr[4] = {1,2,3,4};
    for(int i=0; i<4; i++)*/
    insertAtTail(head, 1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtHead(head,5);
    display(head);f:

    return 0;
}