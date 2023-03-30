#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--)
    {
        ll arr[3];
        for(ll i=0;i<3;i++)cin>>arr[i];
        ll k;
        cin>>k;
        ll sum=0;
        for(ll i=0;i<3;i++){
            if(arr[i]<k)sum+=arr[i];
            else sum+=(k-1);
        }
        sum++;
        cout<<sum<<endl;
    }
    return 0;
}
