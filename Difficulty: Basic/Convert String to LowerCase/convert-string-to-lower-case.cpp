//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string toLower(string s) {
        // code here
        int n = s.size();
        string str = "";
        for(char ch : s){
            char c = (char) tolower(ch);
            str.push_back(c);
        }
        return str;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.toLower(s) << endl;
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends