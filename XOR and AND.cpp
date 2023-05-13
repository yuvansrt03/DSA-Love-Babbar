#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n;
    cin>>n;
    int arr[n];
    map<int,int>m;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        arr[i]=(int)log2(k)+1;
        m[arr[i]]++;
    
    }
    int count=0;
    for(auto x:m){
        int temp=(x.second)*(x.second-1)/2;
        count+=temp;
    }
    cout<<count<<endl;
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
