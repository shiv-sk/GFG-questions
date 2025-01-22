//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string roundToNearest(string str) {
        // Complete the function
        int n = str.size();
        int lastdigit = str[n-1];
        int rem = lastdigit - '0';
        
        if(rem <= 5){
            str[n-1] = '0';
        }
        else{
            str[n-1] = '0';
            for(int i = n-2; i>=0; i--){
                if(str[i] < '9'){
                    str[i]++;
                    return str;
                }
                str[i] = '0';
            }
            str = '1' + str;
        }
        return str;
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
        cout << ob.roundToNearest(str) << endl;

        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends