#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char s[n];
    cin>>s;
    int last=n-1;
    for(int i=0;i<n/2;i++){
        char temp=s[i];
        s[i]=s[last];
        s[last]=temp;
        last--;
    }
    for(int i=0;i<n;i++)cout<<s[i]<<" ";
}
