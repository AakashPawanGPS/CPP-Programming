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

Node *kgroupRev(Node *head , int k){
    Node *curr=head;
    Node *next=NULL;
    Node *prev=NULL;
    int count=0;
    while(curr!=NULL && count<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    if(next!=NULL){
        Node *restHead = kgroupRev(next,k);
        head->next=restHead;
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
    cout<<endl;
    head=kgroupRev(head,2);
    printList(head);
}