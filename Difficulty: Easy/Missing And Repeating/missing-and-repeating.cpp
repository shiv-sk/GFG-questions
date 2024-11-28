//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        int missingNumber = 0 , duplicateNumber = 0 , n = arr.size();
        vector<int>vec(n+1 , 0);
        for(int num : arr){
            vec[num]++;
        }
        for(int i = 1; i<=n; i++){
            if(vec[i] == 0) missingNumber = i;
            if(vec[i] > 1) duplicateNumber = i;
        }
        return {duplicateNumber , missingNumber };
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> arr;
        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        auto ans = ob.findTwoElement(arr);
        cout << ans[0] << " " << ans[1] << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends