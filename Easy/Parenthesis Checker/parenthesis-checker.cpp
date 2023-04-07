//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        string s=x;
        stack<char>st;
        for(int i=0;i<s.length();i++){
            if(s[i]=='['|| s[i]=='{'|| s[i]=='('){
                st.push(s[i]);
            }
            else{
                if(st.empty()){
                    return false;
                }
                else{
                    char c =st.top();
                    if((s[i]==']' && c=='[') || (s[i]==')' && c=='(') || (s[i]=='}' && c=='{')){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
            }
        }
        if(!st.empty()) return false;
        return true;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends