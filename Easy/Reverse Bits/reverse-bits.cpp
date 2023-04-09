//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long reversedBits(long long X) {
        bitset<32> binary(X);
        string binary_str =binary.to_string().substr(0,32);
        string reversed_str(binary_str.rbegin(), binary_str.rend());
        bitset<32> reversed_binary(reversed_str);
        unsigned int reversed_decimal = reversed_binary.to_ulong();
        return reversed_decimal;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}
// } Driver Code Ends