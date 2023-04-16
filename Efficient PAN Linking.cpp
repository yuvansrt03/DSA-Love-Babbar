#include <bits/stdc++.h>
using namespace std;

string solve(){
    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin>>s;
        int n=s.length();
        string ans;
        ans=s[n-1];
        if(int(s[n-2]-'0')%2!=0){
            cout<<1;
        }
        cout<<ans<<endl;
        
    }
    return 0;
}
