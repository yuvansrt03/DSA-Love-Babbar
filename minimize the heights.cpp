#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        for(int i=0;i<n;i++){
            if(arr[i]>k){
                arr[i]-=k;
            }
            else{
                arr[i]+=k;
            }
        }
        sort(arr,arr+n);
        int min_sum=INT_MAX;
        for(int i=0;i<n-1;i++){
            if(arr[i+1]!=arr[i])
            min_sum=min(min_sum,arr[i+1]-arr[i]);
        };
        return min_sum;
    }
};
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    Solution obs;
    cout<<obs.getMinDiff(arr,n,k)<<endl;
    return 0;
}
