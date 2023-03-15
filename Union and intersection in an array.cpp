#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n],brr[m];
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<m;i++)cin>>brr[i];
    int temp[100000]={0};
    int count=0;
    vector<int>v;
    for(int i=0;i<n;i++){
        if(temp[arr[i]]==0){
            v.push_back(arr[i]);
            temp[arr[i]]++;
        }
    }
    for(int i=0;i<m;i++){
        if(temp[brr[i]]==0){
            v.push_back(brr[i]);
            temp[brr[i]]++;
        }
    }
    cout<<"UNION IS"<<endl;
    cout<<"size is "<<v.size()<<endl;
    for(int i=0;i<v.size();i++)cout<<v[i]<<' ';
    cout<<endl;
    vector<int>vi;
    int temp1[100000]={0};
    for(int i=0;i<n;i++)temp1[arr[i]]++;
    for(int i=0;i<m;i++)temp1[brr[i]]++;
    for(int i=0;i<100000;i++){
        if(temp1[i]>1){
            vi.push_back(i);
        }
    }
    cout<<"INTERSECTION IS "<<endl;
    cout<<"size is "<<v1.size()<<endl;
    for(int i=0;i<vi.size();i++)cout<<vi[i]<<" ";
    cout<<endl;
    
}
