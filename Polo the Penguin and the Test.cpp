#include <bits/stdc++.h>
using namespace std;
int dp[101][101];

int knapsack(int* p, int *t, int n, int w){
    if(n==0 || w==0){
        return 0;
    }
    
    if(dp[n][w]!=-1){
        return dp[n][w];
    }
    if(t[n-1]<=w){
        return dp[n][w] = max((knapsack(p, t, n-1, w-t[n-1])+p[n-1]), (knapsack(p, t, n-1, w)));
    }else{
        return dp[n][w]=knapsack(p, t, n-1, w);
    }
}

int solve(){
    int n,w;
    cin>>n>>w;
    int time[n];
    int score[n];
    for(int i=0;i<n;i++){
        int c,p,t;
        cin>>c>>p;
        score[i]=c*p;
        cin>>t;
        time[i]=t;
    }
    memset(dp, -1, sizeof(dp));
	return knapsack(score,time,n,w);
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
