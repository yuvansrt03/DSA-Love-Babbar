#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    if(n%2 || (ceil(log2(n)) == floor(log2(n)))){
        cout<<-1<<endl;
        return;
    }
    n/=2;
    int no_of_bits=(int)log2(n)+1;
    int a,b=n;
    for(int i=0;i<no_of_bits;i++){
        if(b&1){
            a=1<<i;
            break;
        }
        b=b>>1;
    }
    b=n;
    b=b^a;
    cout<<a<<" "<<b<<" "<<0<<endl;
    
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
