#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int temp;
    int i=arr[0];
    while(1){
        if(arr[i]<0){
            cout<<arr[i]*-1<<endl;
            break;
        }
        temp=arr[i];
        arr[i]=i*-1;
        i=temp;
    }
    return 0;
}
