//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	string firstAlphabet(string s)
	{
	    // Your code goes here
	    string ans = "" , word = "";
	    int n = s.size();
	    for(int i = 0; i<n; i++){
	        if(s[i] != ' '){
	            word.push_back(s[i]);
	        }
	        else if(s[i] == ' ' && !word.empty()){
	            ans.push_back(word[0]);
	            word = "";
	        }
	    }
	    if(!word.empty()){
	        ans.push_back(word[0]);
	    }
	    return ans;
	}
};

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s;
   		getline(cin, s);

   	
        Solution ob;
   		cout << ob.firstAlphabet(s) << "\n";
   	
cout << "~" << "\n";
}

    return 0;
} 

// } Driver Code Ends