#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    if(n>1 and k==1){
        cout<<-1;
    }
    else{
        for(int i=1;i<k;i++)cout<<i<<" ";
        for(int i=n;i>=k;i--)cout<<i<<" ";
    }
    cout<<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
