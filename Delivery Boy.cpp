#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
#define int long long int
using namespace __gnu_pbds;
#define MAX 300
void printme(int dp[300][300],int n){
    cout<<"\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
}
void solve(){
    int n;
    cin>>n;
    int dp[MAX][MAX];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>dp[i][j];
        }
    }
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j)continue;
                if(i==k or j==k)continue;
                dp[i][j]=min(dp[i][j],(dp[i][k]+dp[k][j]));
            }
        }
        // printme(dp,n);
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++){
        int s,g,d;
        cin>>s>>g>>d;
        int normal=dp[s][g]+dp[g][d];
        int fast=dp[s][d];
        cout<<normal<<" "<<normal-fast<<"\n";
    }
}
int32_t main()
{
    solve();
    return 0;
}
