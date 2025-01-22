//{ Driver Code Starts
#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got
        int maxVotes = INT_MIN;
        string winner = "";
        vector<string>ans;
        unordered_map<string , int>umap;
        for(int i = 0; i<n; i++){
            if(umap.find(arr[i]) != umap.end()){
                umap[arr[i]]++;
            }
            else{
                umap[arr[i]] = 1;
            }
        }
        for(auto it : umap){
            if(it.second > maxVotes){
                winner = it.first;
                maxVotes = it.second;
            }
            else if(it.second == maxVotes){
                if(it.first < winner){
                    winner = it.first;
                }
            }
        }
        string votes = to_string(maxVotes);
        ans.push_back(winner);
        ans.push_back(votes);
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    
cout << "~" << "\n";
}
    return 0;
}

// } Driver Code Ends