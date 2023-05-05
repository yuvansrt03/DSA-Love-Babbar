#include <bits/stdc++.h>
using namespace std;
#define size 120000
bool sortbysecdesc(const pair<int,int> &a,
                   const pair<int,int> &b)
{
       return a.first>b.first;
}
void solve(){
    int n,m;
    cin>>n>>m;
    int arr[size]={0};
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr[a]++;
    }
    string strpost[size]={"0"};
    vector<pair<int,int>>close;
    vector<pair<int,int>>normal;
    for(int i=0;i<m;i++){
        int f,p;
        string s;
        cin>>f>>p>>s;
        strpost[p]=s;
        if(arr[f])close.push_back(make_pair(p,f));
        else normal.push_back(make_pair(p,f));
    }
    sort(close.begin(),close.end(),sortbysecdesc);
    sort(normal.begin(),normal.end(),sortbysecdesc);
    for(auto x:close){
        cout<<strpost[x.first]<<endl;
    }
    for(auto x:normal){
        // cout<<x.first<<" "<<x.second<<endl;
        cout<<strpost[x.first]<<endl;
    }

}

int main()
{
    solve();
    return 0;
}
