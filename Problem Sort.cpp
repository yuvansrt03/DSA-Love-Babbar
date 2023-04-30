#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p,s;
    cin>>p>>s;
    vector<pair<int,int>>ans;
    for(int i=0;i<p;i++){
        vector<pair<int,int>>vec;
        for(int j=0;j<s;j++){
            int k;
            cin>>k;
            vec.push_back(make_pair(k,0));            
        }
        for(int j=0;j<s;j++){
            int k;
            cin>>k;
            vec[j].second=k;
        }
        sort(vec.begin(),vec.end());
        int count=0;
        // for(auto x:vec){
        //     cout<<x.first<<" "<<x.second<<endl;
        // }
        for(int k=0;k<vec.size()-1;k++){
            count+=vec[k].second>vec[k+1].second;
        }
        // cout<<count<<endl;
        ans.push_back(make_pair(count,i+1));
    }
    sort(ans.begin(),ans.end());
    for(auto x:ans){
        cout<<x.second<<endl;
    }
    
    return 0;
}
