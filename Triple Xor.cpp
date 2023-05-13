#include <bits/stdc++.h>
using namespace std;
#define int long long int
int nCr(int n, int r)
{
        double sum = 1;
        for(int i = 1; i <= r; i++){
            sum = sum * (n - r + i) / i;
        }
        return (int)sum;
}
void solve(){
    int n,k;
    cin>>n>>k;
    int b=(1<<n)/2;
    int val=(nCr(b,1)*nCr(b,2))+nCr(b,3);
    cout<<(val/b)*6<<"\n"; 
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
