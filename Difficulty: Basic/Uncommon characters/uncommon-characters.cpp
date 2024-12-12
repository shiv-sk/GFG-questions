//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        string UncommonChars(string s1, string s2)
        {
            // code here
            unordered_set<char>st1(s1.begin() , s1.end());
            unordered_set<char>st2(s2.begin() , s2.end());
            string str = "";
            for(char ch : st1){
                if(st2.find(ch) == st2.end()){
                    str.push_back(ch);
                }
            }
            for(char ch : st2){
                if(st1.find(ch) == st1.end()){
                    str.push_back(ch);
                }
            }
            sort(str.begin() , str.end());
            return str.empty() ? "-1":str;
        }
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends