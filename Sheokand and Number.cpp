#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define int long long int
#define fastio  cin.tie(0), cout.tie(0),ios_base::sync_with_stdio(false);
int solve(){
    int n;
    cin>>n;
    if(n==1)return 2;
    int k=log2(n)+1;
    vector<int> v;
    int b;
    int a=(1<<(k));
    for(int i=k-1;i>=0;i--){
        if(n & (1<<i) && v.size()<3){
            v.push_back(i);
            if(v.size()==2)b=i+1;
        }
    }
    if(v.size()==1)return 1;
    int sum=(1<<v[0])+(1<<v[1]);
    int nearest_minus=n-sum;
    int extra_sum=(1<<v[0])+(1<<b);
    int nearest_plus=extra_sum-n;
    int ans=a-n+1;
    ans=min(nearest_minus,ans);
    if(v[0]!=b)ans=min(nearest_plus,ans);
    return ans;
}

int32_t main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        cout<<solve()<<endl;
    }
    return 0;
}
