//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minimumApple(vector<int>& arr) {
        // Complete the function
        unordered_set<int>st;
        for(int i : arr){
            st.insert(i);
        }
        return st.size();
    }
};


//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    Solution ob;
    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        cout << ob.minimumApple(nums) << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends