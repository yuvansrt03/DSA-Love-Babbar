class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    long long int maxprod=INT_MIN;
	    long long int prod=arr[0];
	    long long int neg=0;
	    for(int i=1;i<n;i++){
	        if(arr[i]==0){
	            maxprod=max(maxprod,prod);
	            if(i==n)break;
	            prod=arr[i+1];
	            i++;
	        }
	        else{
	            if(neg==0 and arr[i]<0)neg=arr[i];
	            else prod*=arr[i];
	            if(prod<0 and neg!=0){
	                prod*=neg;
	                neg=0;
	            }
	        }
	    }
	    maxprod=max(maxprod,prod);
	    return maxprod;
	}
};
