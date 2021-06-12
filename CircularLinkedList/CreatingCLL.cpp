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

void printList(Node* head){                                             //For-Loop Method
    if(head==NULL){
        return;
    }
    cout<<(head->data)<<" ";
    for(Node *temp=head->next;temp!=head;temp=temp->next){
        cout<<(temp->data)<<" ";
    }
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
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=head;
    printList(head);
    cout<<endl;
    printList2(head);
}