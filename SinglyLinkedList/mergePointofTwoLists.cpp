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

int intersectionPoint(Node *head1 , Node *head2){
    int len1=0,len2=0;
    for(Node *curr1=head1;curr1!=NULL;curr1=curr1->next){
        len1++;
    }
    for(Node *curr2=head2;curr2!=NULL;curr2=curr2->next){
        len2++;
    }
    int d=abs(len1-len2);
    Node *curr1=head1;
    Node *curr2 = head2;
    if(len1>len2){
        for(int i=0;i<d;i++){
            curr1=curr1->next;
        }
    }
    else{
        for(int i=0;i<d;i++){
            curr2=curr2->next;
        }
    }
    while(curr1!=NULL && curr2!=NULL){
        if(curr1==curr2){
            return curr1->data;
        }
        else{
            curr1=curr1->next;
            curr2=curr2->next;
        }
    }
    return -1;
}

void printList(Node* head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<(curr->data)<<" ";
        curr=curr->next;
    }
}

int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    Node *head2 = new Node(15);
    head2->next=head->next->next;
    printList(head);
    cout<<endl;
    printList(head2);
    int res=intersectionPoint(head , head2);
    cout<<"\n"<<res;

}