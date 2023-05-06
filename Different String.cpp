#include <bits/stdc++.h>
using namespace std;
bool isallone(string s){
    int n=s.length();
    int count=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1')count++;
    }
    return count==n;
}
bool isallzero(string s){
    int n=s.length();
    int count=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1')count++;
    }
    return count==0;
}
string allone(int n){
    string ans="";
    for(int i=0;i<n;i++)ans+='1';
    return ans;
}
string minusone(string s){
    int n=s.length();
    string ans=s;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='0')ans[i]='1';
        if(s[i]=='1'){
            ans[i]='0';
            break;
        }
    }
    return ans;
}
string solve(){
    int n;
    cin>>n;
    vector<string>vec;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        vec.push_back(s);
    }
    sort(vec.begin(),vec.end(),greater<string>());
    if(!isallone(vec[0]) || isallzero(vec[0]))return allone(n);
    for(int i=0;i<n;i++){
        if(minusone(vec[i])!=vec[i+1] || i==n-1)return minusone(vec[i]);
    }
    return "";
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        cout<<solve()<<endl;
    }
    return 0;
}
