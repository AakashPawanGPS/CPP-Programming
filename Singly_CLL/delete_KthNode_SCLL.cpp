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

Node *deleteHead(Node *head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==head){
        delete head;
        return NULL;
    }
    Node *temp = head;
    head->data=head->next->data;
    head->next = head->next->next;
    delete temp;

    return head;
}

Node *deleteKthNode(Node * head , int k){
    Node *curr = head;
    if(head==NULL){
        return head;
    }
    if(k==1){
        return deleteHead(head);
    }
    for(int i=0;i<k-2;i++){
        curr=curr->next;
    }
    Node *temp=curr->next;
    curr->next=curr->next->next;
    delete temp;
    return head;
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
    printList2(head);
    cout<<endl;
    head = deleteKthNode(head , 1);
    printList2(head);
}