#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    cout<<k<<"min element is"<<arr[k-1]<<endl;
    cout<<k<<"max element is"<<arr[n-k]<<endl;
}
