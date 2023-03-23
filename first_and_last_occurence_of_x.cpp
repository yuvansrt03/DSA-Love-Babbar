#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    int arr[n];
    int start,end;
    bool first_time=1;
    for(int i=0;i<n;i++)cin>>arr[i];
    for(int i=0;i<n;i++){
        if(arr[i]==x and first_time){
            start=i+1;
            end=i+1;
            first_time=0;
        }
        else if(arr[i]==x){
            end++;
        }
    }
    cout<<start<<" "<<end<<endl;
}
