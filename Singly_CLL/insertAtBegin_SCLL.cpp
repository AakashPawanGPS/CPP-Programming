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

Node * insertAtBegin_Naive(Node *head , int x){
    Node *temp = new Node(x);
    if(head==NULL){
        temp->next=temp;
        return temp;
    }
    else{
        Node *curr = head;
        while(curr->next!=head){
            curr=curr->next;
        }
        curr->next=temp;
        temp->next=head;
    }
    return temp;
}

Node *insertAtBegin_Eff(Node * head , int x){
    Node * temp = new Node(x);
    if(head==NULL){
        temp->next=temp;
        return temp;
    }
    else{
        temp->next=head->next;
        head->next=temp;

        int t = temp->data;
        temp->data=head->data;
        head->data = t;

        return head;
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
    printList2(head);
    cout<<endl;
    head=insertAtBegin_Naive(head,5);
    printList2(head);
    cout<<endl;
    head=insertAtBegin_Eff(head,1);
    printList2(head);
}