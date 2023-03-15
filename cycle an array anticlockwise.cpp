#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int temp=arr[n-1];
    for(int i=n-1;i>=0;i--){
        if(i==0){
            arr[i]=temp;
            break;
        }
        arr[i]=arr[i-1];
    }
    for(int i=0;i<n;i++)cout<<arr[i]<<endl;
}
