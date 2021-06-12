#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;
    Node(int x){
        data=x;
        next= NULL;
        prev = NULL;
    }
};

Node *insertAtHead(Node * head , int x){
    Node *temp = new Node(x);
    if(head==NULL){
        temp->next=temp;
        temp->prev=temp;
        return temp;
    }
    temp->prev=head->prev;
    temp->next=head;
    head->prev->next=temp;
    head->prev=temp;

    return temp;
}

void printList2(Node * head){                                          //Do-While Loop method
    if(head==NULL){
        return ;               
    }
    Node *curr = head;
    do{
        cout<<(curr->data)<<" ";
        curr=curr->next;
    }while(curr!=head);
}

int main(){
    Node *head  = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    Node *temp3 = new Node(40);
    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;
    temp2->next=temp3;
    temp3->next = head;
    temp3->prev=temp2;
    head->prev=temp3;
    printList2(head);
    cout<<endl;
    head = insertAtHead(head , 4);
    printList2(head);    
}