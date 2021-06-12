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

Node *seggregateEvenOdd(Node *head){
    Node *evenStart=NULL , *evenEnd=NULL , *oddStart=NULL , *oddEnd=NULL;
    for(Node *curr=head; curr!=NULL; curr=curr->next){
        int x=curr->data;
        if(x%2==0){
            if(evenStart==NULL){
                evenStart=curr;
                evenEnd=evenStart;
            }
            else{
                evenEnd->next=curr;
                evenEnd=evenEnd->next;
            }
        }
        else{
            if(oddStart==NULL){
                oddStart=curr;
                oddEnd=oddStart;
            }
            else{
                oddEnd->next=curr;
                oddEnd=oddEnd->next;
            }
        }
    }
    if(evenStart==NULL || oddStart==NULL){
        return head;
    }
    evenEnd->next=oddStart;
    oddEnd->next=NULL;

    return evenStart;
}

void printList(Node* head){
    Node *curr = head;
    while(curr!=NULL){
        cout<<(curr->data)<<" ";
        curr=curr->next;
    }
}

int main(){
    Node *head = NULL;
    cout<<"Enter Size:";
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        head=insert(head,num);
    }
    head=seggregateEvenOdd(head);
    printList(head);
}