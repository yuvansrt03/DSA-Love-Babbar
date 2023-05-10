#include <bits/stdc++.h>
using namespace std;
#define int long long int
int solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int negs=0;
    int p=0,q=0; 
    for(int i=0;i<n;i++){
        if(arr[i]<0)q+=(i+1);
        else p+=(i+1);
    }
    return abs(p-q);
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout<<solve()<<endl;
    }
    return 0;
}
