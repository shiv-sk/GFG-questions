//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:

    string printString(string s, char ch, int count) {
        // Your code goes here
        int cnt = 0 , index = 0 , n = s.size();
        for(int i = 0; i<n; i++){
            if(s[i] == ch){
                cnt++;
            }
            if(cnt == count){
                index = i+1;
                break;
            }
        }
        return index ? s.substr(index):"";
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
        char ch;
        int count;

        cin >> s >> ch >> count;
        Solution ob;
        cout << ob.printString(s, ch, count) << "\n";

        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends