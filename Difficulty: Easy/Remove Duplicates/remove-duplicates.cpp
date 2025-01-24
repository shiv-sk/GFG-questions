//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    string removeDups(string &s) {
        // Your code goes here
        string finalStr = "";
        unordered_set<char>uset;
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

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution ob;
        cout << ob.removeDups(s) << "\n";

        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends