//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

/* print the name of the parties along with seats
   they got in election and print the maximum seat
   received
*/
void Election2019(char party[], int seats[], int n)
{
    //Your code here
    vector<pair<char , int>>v;
    int maxSeats = -1;
    for(int i = 0; i<n; i++){
        v.push_back(make_pair(party[i] , seats[i]));
    }
    sort(v.begin() , v.end());
    for(const auto &it : v){
        cout<<it.first<<" "<<it.second<<"\n";
        if(it.second > maxSeats){
            maxSeats = it.second;
        }
    }
    cout<<maxSeats<<"\n";
}

//{ Driver Code Starts.
    
int main() {
	
		int t; 
		cin>>t;
		while(t--)
		{
		    int n; 
		    cin>>n;
		    char party[n];
		    int seats[n];
		    for(int i = 0; i < n; i++)
		        cin>>party[i]; 
		     
		    for(int i = 0; i < n; i++)
		        cin>>seats[i];
		     
		    Election2019(party, seats, n);
		
cout << "~" << "\n";
}
}
// } Driver Code Ends