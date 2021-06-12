#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

Node *insertBegin(Node *head,int x){
    Node *temp=new Node(x);
    temp->next=head;
    return temp;
}

Node *insertLast(Node *head,int x){
    Node *temp=new Node(x);
    if(head==NULL){
        return temp;
    }
    Node *curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    return head;
}

void printList(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<(curr->data)<<" ";
        curr=curr->next;
    }
}

int main(){
    Node *head = NULL;
    head=insertBegin(head,30);
    head=insertBegin(head,20);
    head=insertBegin(head,10);
    head=insertLast(head,40);
    head=insertLast(head,50);
    printList(head);
    return 0;
}