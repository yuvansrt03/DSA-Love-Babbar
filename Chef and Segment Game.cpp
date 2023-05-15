#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define double long double
int power(int x,int y)
{
    int res = 1;
    if (x == 0) return 0;
    while (y > 0)
    {
        if (y & 1)
            res = (res*x);
        y = y>>1;
        x = (x*x);
    }
    return res;
}
void solve(){
    
    double x,k;
    cin>>x>>k;
    cout<<fixed<<setprecision(8);
    int n=(int)log2(k)+1;
    double left_most=x/(power(2,n));
    double diff=k-power(2,n-1);
    double ans=diff*(left_most*2)+left_most;
    cout<<ans;
    
}

int32_t main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout<<endl;
    }
    return 0;
}
