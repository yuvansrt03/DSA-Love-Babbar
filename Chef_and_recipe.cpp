#include <bits/stdc++.h>
using namespace std;

string solve(){
    int n;
    cin>>n;
    int arr[n];
    int ans[1000]={0};
    int unique[1000]={0};
    int k;
    int count=1;
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++){
        if(ans[arr[i]]!=0)return "NO";
        if(arr[i]==arr[i+1]){
            count++;
        }
        else{
            if(unique[count]!=0)return "NO";
            unique[count]=arr[i];
            ans[arr[i]]=1;
            count=1;
            
        }
    }
    return "YES";
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
