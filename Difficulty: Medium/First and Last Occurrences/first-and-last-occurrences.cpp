//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        int firstOccu = -1 , lastOccu = -1 , n = arr.size();
        for(int i = 0; i<n; i++){
            if(arr[i] == x){
                if(firstOccu == -1){
                    firstOccu = i;
                    lastOccu = i;
                }else{
                    lastOccu = i;
                }
            }
        }
        return {firstOccu , lastOccu};
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
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int x;
        cin >> x;
        cin.ignore();
        vector<int> ans;
        Solution ob;
        ans = ob.find(arr, x);
        cout << ans[0] << " " << ans[1] << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends