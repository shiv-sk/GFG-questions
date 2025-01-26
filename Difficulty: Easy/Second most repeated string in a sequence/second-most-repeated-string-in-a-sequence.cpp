//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        //code here.
        int large = 0, secondLarge = 0;
        string largeStr = "" , secondLargeStr = "";
        unordered_map<string , int>umap;
        for(int i = 0; i<n; i++){
            umap[arr[i]]++;
        }
        for(auto it : umap){
            if(it.second > large){
                secondLarge = large;
                secondLargeStr = largeStr;
                large = it.second;
                largeStr = it.first;
            }
            else if(it.second > secondLarge){
                secondLarge = it.second;
                secondLargeStr = it.first;
            }
        }
        return secondLargeStr;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    
cout << "~" << "\n";
}
}
// Contributed By: Pranay Bansal

// } Driver Code Ends