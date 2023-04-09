#include <bits/stdc++.h>
using namespace std;

int solve(){
    int n;
    cin>>n;
    string s;
    char c;
    cin>>s;
    cin>>c;
    int count=0;
    int last=0;
    for(int i=0;i<n;i++){
        if(s[i]==c){
            count+=(i+1);
            last=i+1;
        }
        else{
            count+=last;
        }
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cout<<solve()<<endl;
    }
    return 0;
}
