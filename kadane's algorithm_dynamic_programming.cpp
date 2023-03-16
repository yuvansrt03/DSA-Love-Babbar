#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    int sum[n];
    sum[0]=arr[0];
    int l=0,r=0,max_ele=sum[0];
    int max_ele_index=0;
    for(int i=1;i<n;i++){
        if(sum[i-1]<0){
            sum[i]=arr[i];
        }
        else{
            sum[i]=sum[i-1]+arr[i];
        }
        if(sum[i]>max_ele){
            max_ele_index=i;
            max_ele=sum[i];
        }
    }
    int flag=0;
    for(int i=n-1;i>=0;i--){
        if(sum[i]==max_ele){
            r=i;
            flag=1;
        }
        else if(sum[i]<0 && flag){
            l=i+1;
            break;
        }
    }
    cout<<"Maximum sum of the subarray is "<<max_ele<<endl;
    cout<<"Maximum sum Subarray is"<<endl;
    for(int i=l;i<=r;i++)cout<<arr[i]<<" ";

}
