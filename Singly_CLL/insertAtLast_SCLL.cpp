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

Node *insertAtEnd_Naive(Node *head , int x){
    Node * temp = new Node(x);
    if(head==NULL){
        temp->next=temp;
        return temp;
    }
    else{
        Node *curr=head;
        while(curr->next!=head){
            curr=curr->next;
        }
        curr->next=temp;
        temp->next=head;
        return head;
    }
}

Node *insertAtEnd_Eff(Node *head , int x){
    Node *temp = new Node(x);
    if(head==NULL){
        temp->next=temp;
        return temp;
    }
    else{
        temp->next=head->next;
        head->next=temp;

        int t = temp->data;
        temp->data=head->data;
        head->data=t;

        return temp;
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
    cout<<"\n";
    head=insertAtEnd_Naive(head,43);
    
    printList2(head);
    
    head=insertAtEnd_Eff(head,45);
    cout<<endl;
    printList2(head);
}