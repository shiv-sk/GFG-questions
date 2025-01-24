//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++
class Solution {
  public:
    string longestCommonPrefix(vector<string> arr) {
        // your code here
        string smallestStr = arr[0];
        for(const string &s : arr){
            if(s.size() < smallestStr.size()){
                smallestStr = s;
            }
        }
        string commonStr = "";
        for(int i = 0; i<smallestStr.size(); i++){
            char currentChar = smallestStr[i];
            bool common = true;
            for(const string &s : arr){
                if(s[i] != currentChar){
                    common = false;
                    break;
                }
            }
            if(common){
                commonStr.push_back(currentChar);
            }
            else{
                break;
            }
        }
        return commonStr;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        string ans = ob.longestCommonPrefix(arr);
        if (ans.empty())
            cout << "\"\"";
        else
            cout << ans;
        cout << endl;
    }
}

// } Driver Code Ends