#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;
    vector<char>vec;
    for(int i=0;i<s.length()-1;i++){
        if(s[i]==s[i+1])vec.push_back(s[i]);
    }
    if(s[0]==s[s.length()-1])vec.push_back(s[0]);
    if(vec.size()==0 || (vec.size()==2 && vec[0]!=vec[1]))cout<<"yes"<<endl;
    else cout<<"no"<<endl;
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
