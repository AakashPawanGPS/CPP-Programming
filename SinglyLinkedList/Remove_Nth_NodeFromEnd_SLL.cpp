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

void printNfromEnd(Node *head , int n){
    int len=0;
    for(Node *curr=head;curr!=NULL;curr=curr->next){
        len++;
    }
    if(len<n){
        return;
    }
    Node *curr=head;
    for(int i=1;i<len-n+1;i++){
        curr=curr->next;
    }
    cout<< (curr->data);
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
    int n;
    cin>>n;
    printNfromEnd(head,n);
}