#include <bits/stdc++.h>
using namespace std;
#define int long long int
int solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    for(int i=1;i<n;i++){
        if(__gcd(arr[i],arr[0])==1)return n;
    }
    return -1;
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
