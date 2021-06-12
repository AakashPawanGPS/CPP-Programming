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
    Node *head = NULL;
    int n;
    int num;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num;
        head=insertAtEnd_Eff(head,num);
    }
    printList2(head);
}