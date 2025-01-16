//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        int n = arr.size() , maxLen = 0 , sum = 0;
        unordered_map<int , int>umap;
        for(int i = 0; i<n; i++){
            sum += arr[i];
            if(sum == k){
                maxLen = max(maxLen , i+1);
            }
            
            int rem = sum - k;
            if(umap.find(rem) != umap.end()){
                int len = i - umap[rem];
                maxLen = max(maxLen , len);
            }
            
            if(umap.find(sum) == umap.end()){
                umap[sum] = i;
            }
        }
        return maxLen;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution solution;
        cout << solution.longestSubarray(arr, k) << "\n";
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends