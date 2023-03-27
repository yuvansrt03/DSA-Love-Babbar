#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int l=0,r=0;
    while(1){
        if(arr[l]>0){
            l++;
            r++;
        }
        while(arr[r]>0){
            r++;
            if(r>=n)break;
        }
        swap(arr[l],arr[r]);
        l+=2;
        if(l>=n)break;
    }
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";

    
}
