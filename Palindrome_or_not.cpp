#include <bits/stdc++.h>
using namespace std;
bool ispalindrome(string s){
    int n=s.length();
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1])return 0;
    }
    return 1;
}
int main()
{
    string s;
    cin>>s;
    cout<<ispalindrome(s)<<endl;
}
