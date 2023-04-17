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
Node* head,*temp,*newnode;

int solve(){
    temp=head;
    int arr[10000]={0};
    while(temp!=NULL){
        if(arr[temp->data]==1)return temp->data;
        else arr[temp->data]=1;
        temp=temp->next;
    }
    return -1;
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

    cout<<solve()<<endl;
}
