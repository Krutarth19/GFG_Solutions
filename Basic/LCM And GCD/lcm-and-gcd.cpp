//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int GCD(long long a,long long b){
        if(a==0) return b;
        if(b==0) return a;
        
        if (a == b)
            return a;
            
         if (a > b)
            return GCD(a-b, b);
        return GCD(a, b-a);
    }
    vector<long long> lcmAndGcd(long long A , long long B) {
        long long gcd = GCD(A,B);
        long long lcm = (A*B)/gcd;
        vector<long long> ans;
        ans.push_back(lcm);
        ans.push_back(gcd);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends