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

Node *reverse(Node *head){
    Node *prev=NULL;
    Node *curr=head;
    Node *next=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next = prev;
        prev=curr;
        curr=next;
    }
    return prev;
}


void printList(Node* head){
    Node *curr = head;
    while(curr!=NULL){
        cout<<(curr->data)<<" ";
        curr=curr->next;
    }
}

int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    printList(head);
    head = reverse(head);
    printf("\n");
    printList(head);
    return 0;
}