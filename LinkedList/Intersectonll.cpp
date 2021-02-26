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

void insertAtHead(node* &head, int val){
    node* n = new node(val);
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
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
}

int length(node* &head){
    int l = 0;
    node* temp = head;
    while(temp!=NULL){
        l++;
        temp = temp->next;
    }
    return l;
}

int intersection(node* &head1, node* &head2){
    int len1 = length(head1);
    int len2 = length(head2);
    int d = 0;
    node* temp1;
    node* temp2;
    if(len1 > len2){
        d = len1 - len2;
        temp1 = head1;
        temp2 = head2; 
    }else{
        d = len2 - len1;
        temp1 = head2;
        temp2 = head1;
    }
    while(d){
        temp1 = temp1->next;
        if(temp1 == NULL){
            return -1;
        }
        //temp1 = temp1->next;
        d--;
    }
    while(temp1!= NULL && temp2!= NULL){
        if(temp1 == temp2){
            return temp1->data;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
    return -1;
}

void intersect(node* &head1, node* &head2, int pos){
    node* temp1 = head1;
    pos--;
    while(pos--){
        temp1 = temp1->next;
    }
    node* temp2 = head2;
    while(temp2->next!=NULL){
        temp2 = temp2->next;
    }
    temp2->next = temp1;
}

void printList(node* &head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node* head1 = NULL;
    node* head2 = NULL;
    insertAtTail(head1,1);
    insertAtTail(head1,2);
    insertAtTail(head1,3);
    insertAtTail(head1,4);
    insertAtTail(head1,5);
    insertAtTail(head1,6);
    insertAtTail(head2,20);
    insertAtTail(head2,4);
    intersect(head1,head2,5);
    printList(head1);
    printList(head2);
    cout<<intersection(head1,head2)<<endl;
    return 0;
}