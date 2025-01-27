//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // Function to find the minimum indexed character.
    int minIndexChar(string &s1, string &s2) {
        // Your code here
        unordered_map<char , int>umap;
        int mini = INT_MAX;
        for(int i = 0; i<s1.size(); i++){
            if(umap.find(s1[i]) == umap.end()){
                umap[s1[i]] = i;
            }
        }
        for(char ch : s2){
            if(umap.find(ch) != umap.end()){
                mini = min(mini , umap[ch]);
            }
        }
        return mini == INT_MAX ? -1 : mini;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        string patt;
        cin >> str;
        cin >> patt;
        Solution obj;
        cout << obj.minIndexChar(str, patt) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends