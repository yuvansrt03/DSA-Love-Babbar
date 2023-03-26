vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            int i=0,j=0,k=0;
            vector<int>ans;
            int l=0;
            while(i<n1 & j<n2 & k<n3){
                while(A[i]>B[j])j++;
                while(B[j]>C[k])k++;
                if(A[i]==B[j] & B[j]==C[k]){
                    if(ans.size()==0 or ans[ans.size()-1]!=A[i])
                    ans.push_back(A[i]);
                }
                i++;
            }
            return ans;
            
        }
