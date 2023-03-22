#include <bits/stdc++.h>
using namespace std;
bool sort_col(vector<int> v1,vector<int> v2){
    return v1[0]<v2[0];
}
int main()
{
    int n;
    cin>>n;
    vector<vector<int>>vect;
    for(int i=0;i<n;i++){
        vector<int>each;
        for(int j=0;j<2;j++){
            int a;
            cin>>a;
            each.push_back(a);
        }
        vect.push_back(each);
    }
    vector<vector<int>>v_ans;
    sort(vect.begin(),vect.end(),sort_col);
    for(int i=0;i<vect.size();i++){
        vector<int>v_each;
        v_each.push_back(vect[i][0]);
        v_each.push_back(vect[i][1]);
        if(i==0){
            v_ans.push_back(v_each);
            continue;
        }
        if(vect[i][0]<=v_ans[v_ans.size()-1][1]){
            v_ans[v_ans.size()-1][1]=max(vect[i][1],v_ans[v_ans.size()-1][1]);
            continue;
        }
        v_ans.push_back(v_each);
    }
    for(int i=0;i<v_ans.size();i++){
        cout<<v_ans[i][0]<<" "<<v_ans[i][1]<<endl;
    }
}
