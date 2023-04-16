#include <bits/stdc++.h>
using namespace std;

int solve(){
    int n;
    cin>>n;
    if(n<3)return 0;
    if(n%2==0)return ((n/2)-1)*3;
    else return ((((n+1)/2)-1)*3)-1;
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
