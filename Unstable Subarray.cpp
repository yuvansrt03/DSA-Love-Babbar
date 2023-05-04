#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll solve(){
    ll n;
    cin>>n;
    ll arr[n];
    map<ll,ll>m;
    ll count=0;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        m[arr[i]]++;
    }
    ll totsub=n*(n-1)/2;
    ll poss,sub;
    for(auto x:m){
        if(x.second>0){
            ll a=x.second;
            poss=a*(a-1)/2;
            totsub-=poss;
        }
    }
    return totsub;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout<<solve()<<endl;
    }
    return 0;
}
