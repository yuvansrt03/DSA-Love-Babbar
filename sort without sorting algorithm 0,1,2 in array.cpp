#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int l=0,r=n-1,i=0;
    while(i<r){
        if(arr[i]==0){
            swap(arr[i],arr[l]);
            l++;
            i++;
        }
        if(arr[i]==1){
            i++;
        }
        if(arr[i]==2){
            swap(arr[i],arr[r]);
            r--;
        }
    }
    for(int i=0;i<n;i++)cout<<arr[i]<<endl;
}
