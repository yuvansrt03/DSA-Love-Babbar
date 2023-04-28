#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll solve(){
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    ll i=0;
    ll zeroc=0,onec=0,twoc=0;
    for(ll i=0;i<n;i++){
        if(arr[i]==0)zeroc++;
        else if(arr[i]==1)onec++;
        else if(arr[i]==2)twoc++;
        else break;
    }
    ll extra=n-(zeroc+onec);
    ll ans=(extra-1)*(extra)/2;
    ans-=(twoc)*(twoc-1)/2;
    return ans;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        cout<<solve()<<endl;
    }
    return 0;
}
