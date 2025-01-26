//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int smallestSubstring(string s) {
        // Code here
        int left = 0 , right = 0 , zero = 0 , one = 0 , two = 0;
        int len = INT_MAX;
        while(right < s.size()){
            if(s[right] == '0'){
                zero++;
            }
            else if(s[right] == '1'){
                one++;
            }
            else{
                two++;
            }
            while(zero>0 && two>0 && one>0){
                len = min(len , right - left + 1);
                if(s[left] == '0'){
                    zero--;
                }
                else if(s[left] == '1'){
                    one--;
                }
                else{
                    two--;
                }
                left++;
            }
            right++;
        }
        len == INT_MAX ? len = -1 : len;
        return len;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.smallestSubstring(S);
        cout << endl;
    
cout << "~" << "\n";
}
}
// } Driver Code Ends