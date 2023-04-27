#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long int n;
    cin>>n;
    if(n==1){
        cout<<-1<<endl;
        return;
    }
    long long int a,b;
    a=b=sqrt(n);
    if(n-(a*b)>1e6)a++;
    if(a*b==n){
        a--;
    }
    cout<<a<<" "<<b<<" "<<n-(a*b)<<endl;
    
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
