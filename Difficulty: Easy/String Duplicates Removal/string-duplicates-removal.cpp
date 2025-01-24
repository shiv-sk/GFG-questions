//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string removeDuplicates(string &s) {
        // code here
        string finalStr = "";
        unordered_set<char>uset(52);
        for(const char &ch : s){
            if(uset.find(ch) == uset.end()){
                finalStr.push_back(ch);
                uset.insert(ch);
            }
        }
        return finalStr;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        auto ans = ob.removeDuplicates(str);

        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends