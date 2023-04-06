#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    int i=1;
    while(1){
        if(i>=n){
            cout<<-1<<endl;
            return;
        };
        if(arr[i]>max)break;
        i++;
    }
    
    cout<<i<<endl;
    for(int j=0;j<i;j++)cout<<arr[j]<<" ";
    cout<<endl;
    cout<<n-i<<endl;
    for(int j=i;j<n;j++)cout<<arr[j]<<" ";
    cout<<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
