//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector<int> ans;
        // int r=matrix.size();
        // int c=matrix[0].size();
        
        int count=0;
        int total=r*c;
        int top=0,left=0;
        int right=c-1,bottom=r-1;
        
        while(count<total){
            // 1st part  Row Print ->
            for(int i=left;i<=right;i++){
                ans.push_back(matrix[top][i]);
                count++;
            }
            top++;
            
            // 1st part  Row Print ->
            for(int i=top; count<total && i<=bottom;i++){
                ans.push_back(matrix[i][right]);
                count++;
            }
            right--;
            
            // 1st part  Row Print ->
            for(int i=right; count<total && i>=left;i--){
                ans.push_back(matrix[bottom][i]);
                count++;
            }
            bottom--;
            
            for(int i=bottom; count<total && i>=top;i--){
                ans.push_back(matrix[i][left]);
                count++;
            }
            left++;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends