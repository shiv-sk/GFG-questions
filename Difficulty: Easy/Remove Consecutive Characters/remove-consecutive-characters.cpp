//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string removeConsecutiveCharacter(string& s) {
        // code here.
        int i = 0;
        while(i < s.size()-1){
            if(s[i] == s[i+1]){
                s.erase(i , 1);
            }
            else{
                i++;
            }
        }
        return s;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.removeConsecutiveCharacter(s) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends