//{ Driver Code Starts
// C++ program Find concatenated string with 
// uncommon characters of given strings 
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends


class Solution
{
    public:
    string unCommonCharString(unordered_map<char , int>&umap , string &str){
        string ans = "";
        for(char ch :str){
            if(umap.find(ch) == umap.end()){
                ans.push_back(ch);
            }
        }
        return ans;
    }
    //Function to remove common characters and concatenate two strings.
    string concatenatedString(string s1, string s2) 
    { 
        // Your code here
        unordered_map<char , int>s1Map(26);
        unordered_map<char , int>s2Map(26);
        for(char ch :s1){
            s1Map[ch]++;
        }
        for(char ch :s2){
            s2Map[ch]++;
        }
        string s1Ans = unCommonCharString(s1Map , s2);
        string s2Ans = unCommonCharString(s2Map , s1);
        if(!s1Ans.size() && !s2Ans.size()){
            return "-1";
        }
        return s2Ans+s1Ans;
    }

};

//{ Driver Code Starts.

/* Driver program to test above function */
int main() 
{ 
	int t;
	cin >> t;
	
	while(t--){
    	string s1, s2;
    	cin >> s1 >> s2;
    	Solution obj;
    	string res = obj.concatenatedString(s1, s2);
    	cout<<res<<endl;
	
cout << "~" << "\n";
}
	return 0; 
}

// } Driver Code Ends