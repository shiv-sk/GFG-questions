//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
string reverseString(string s);
int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	    {
	        string s;
	        getline(cin,s);
	        cout<<reverseString(s)<<endl;
	    
cout << "~" << "\n";
}
}

// } Driver Code Ends


string reverseString(string s)
{
    //code here.
    unordered_set<char>st;
    string ans = "";
    int n = s.size();
    for(int i = n-1; i >= 0; i--){
        if(st.find(s[i]) == st.end() && s[i] != ' '){
            ans.push_back(s[i]);
            st.insert(s[i]);
        }
    }
    return ans;
}