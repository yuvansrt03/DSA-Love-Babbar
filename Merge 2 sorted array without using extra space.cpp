#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int arr[m],brr[n];
    for(int i=0;i<m;i++)cin>>arr[i];
    for(int i=0;i<n;i++)cin>>brr[i];
    int flag=0;
    for(int i=0;i<m;i++){
        flag=0;
        for(int j=0;j<n;j++){
            if(flag and brr[j]<brr[j-1]){
                swap(brr[j],brr[j-1]);
                continue;
            }
            else if(arr[i]<=brr[j]){
                break;
            }
            else if(arr[i]>brr[j]){
                swap(arr[i],brr[j]);
                flag=1;
            }
        }
    }
    for(int i=0;i<m;i++)cout<<arr[i]<<" ";
    for(int i=0;i<n;i++)cout<<brr[i]<<" ";
}
