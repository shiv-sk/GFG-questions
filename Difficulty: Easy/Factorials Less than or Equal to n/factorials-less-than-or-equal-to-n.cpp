//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    void generateFact(long long n , long long i , long long factorial , vector<long long>&ans){
        if(factorial > n){
            return;
        }
        ans.push_back(factorial);
        generateFact(n , i+1 , factorial * (i+1) , ans);
    }
    vector<long long> factorialNumbers(long long n) {
        // Write Your Code here
        vector<long long>ans;
        generateFact(n , 1 , 1 , ans);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for (auto num : ans) {
            cout << num << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends