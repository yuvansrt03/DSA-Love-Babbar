#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a,b,n;
        cin>>a>>b>>n;
        if(a%b==0){
            cout<<-1<<endl;
            continue;
        }
        int fin=n-n%a;
        if(n%a!=0)fin+=a;
        if(fin%b==0)fin+=a;
        cout<<fin<<endl;
    }
    return 0;
}
