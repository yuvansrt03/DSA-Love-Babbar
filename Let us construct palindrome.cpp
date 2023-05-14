#include <bits/stdc++.h>
using namespace std;
#define int long long int
// cd "c:\GAMES\PROJECTS\cpp\" ; if ($?) { g++ baa.cpp -o fun } ; if ($?) { .\fun }
bool ispalindrome(string s){
    string r=s;
    reverse(r.begin(),r.end());
    return r==s;
}
string solve(){
    string s;
    cin>>s;
    int n=s.length();
    int count=0;
    int i=0,j=n-1;
    while(i<j){
        if(s[i]==s[j]){
            i++;
            j--;
        }
        else{
            string a=s,b=s;
            a.erase(a.begin()+i);
            b.erase(b.begin()+j);
            // cout<<a<<" "<<b<<endl;
            if(ispalindrome(a) || ispalindrome(b))return "YES";
            else return "NO";
        }
    }
    return "YES";
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout<<solve()<<endl;
    }
    return 0;
}
