#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll max_sum_subarray(ll arr[],ll n){
    ll subarr[n],max_sum=0;
    ll curr_sum=0;
    for(ll i=0;i<n;i++){
        curr_sum+=arr[i];
        subarr[i]=curr_sum;
        if(curr_sum<0)curr_sum=0;
    }
    for(ll i=0;i<n-1;i++){
        max_sum=max(max_sum,subarr[i]);
    }
    max_sum=max(max_sum,subarr[n-1]);
    return max_sum;
}

void solve(){
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }

    ll front_max=INT_MIN,sum=0;
    for(ll i=0;i<n;i++){
        sum+=arr[i];
        front_max=max(sum,front_max);
    }
    ll back_max=INT_MIN;sum=0;
    for(ll i=n-1;i>=0;i--){
        // cout<<"arr[i]"<<arr[i]<<endl;
        sum+=arr[i];
        // cout<<"sum="<<sum<<endl;
        back_max=max(back_max,sum);
    }

    ll m;
    cin>>m;
    ll brr[m];
    ll b_sum=0;
    for(ll i=0;i<m;i++){
        cin>>brr[i];
        if(brr[i]>0)b_sum+=brr[i];
    }
    cout<<max(front_max,back_max)+b_sum<<endl;
    // cout<< max_sum_subarray(arr,n)<<endl;
}
int main()
{
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
