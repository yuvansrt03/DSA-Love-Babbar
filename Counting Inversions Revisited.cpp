#include <bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int a_sum=0;
    int b_sum=0;
    int a_val=k*(k+1)/2;
    int b_val=k*(k-1)/2;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                a_sum+=a_val;
            }
        }
    }
    for(int i=n-1;i>=0;i--){
        for(int j=i-1;j>=0;j--){
            if(arr[i]>arr[j]){
                b_sum+=b_val;
            }
        }
    }
    cout<<a_sum+b_sum<<endl;
}

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
