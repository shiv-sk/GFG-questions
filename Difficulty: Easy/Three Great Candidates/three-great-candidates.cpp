//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    long long maxProduct(vector<int> arr) {
        // code here
        int n = arr.size();
        if(n < 3){
            return -1;
        }
        sort(arr.begin() , arr.end());
        long long option1 = (long long)arr[n-1] * arr[n-2] * arr[n-3];
        long long option2 = (long long)arr[0] * arr[1] * arr[n-1];
        
        return max(option1 , option2);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        auto ans = ob.maxProduct(arr);
        cout << ans << "\n";
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends