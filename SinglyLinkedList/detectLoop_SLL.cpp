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

Node *insert(Node *head , int x){
    Node *temp = new Node(x);
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

int detectLoop(Node *head){
    Node *temp;
    Node *curr = head;
    while(curr!=NULL){
        if(curr->next==NULL){
            return 0;
        }
        if(curr->next==temp){
            return 1;
        }
        Node *curr_next=curr->next;
        curr->next=temp;
        curr=curr_next;
    }
    return 0;
}

void printList(Node * head){                                          //Do-While Loop method
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
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    Node *temp3 = new Node(40);
    head->next=temp1;
    temp1->next=temp2;
    temp2->next=temp3;
    temp3->next=head;
    Node *head1=head;
    int res=detectLoop(head1);
    cout<<res;
    cout<<endl;
    printList(head);
}