#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int minJumps(int arr[], int n){
        int jump=0,start=0,end=0;
        for(int i=0;i<n-1;i++){
            end=max(end,arr[i]+i);
            if(start==i){
                start=end;
                jump++;
            }
        }
        if(start<n-1) return -1;
        return jump;

    }
};
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    Solution obs;
    cout<<obs.minJumps(arr,n)<<endl;
    return 0;
}
