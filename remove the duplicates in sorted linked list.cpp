#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(){
            data=0;
            next=NULL;
        }

        Node(int x){
            data=x;
            next=NULL;
        }

};
Node *head,*temp,*newnode,*stamp;

Node* solve(Node* head){
    temp=head;
    while(temp->next!=NULL){
        if((temp->data)==(temp->next->data)){
            stamp=temp;
            if(temp->next->next==NULL){
                temp->next=NULL;
                break;
            }
            while((stamp->data)==(stamp->next->data)){
                stamp=stamp->next;
            }
            temp->next=stamp->next;
        }
        temp=temp->next;
    }
    return head;
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        newnode=new Node(a);
        if(i==0){
            head=temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=temp->next;
        }
    }
    head=temp=solve(head);
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
