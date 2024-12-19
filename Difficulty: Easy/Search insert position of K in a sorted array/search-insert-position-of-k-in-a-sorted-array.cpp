//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int searchInsertK(vector<int>arr, int n, int k)
    {
        // code here
        int left = 0 , right = n-1;
        while(left <= right){
            int mid = (left+right)/2;
            if(arr[mid] == k){
                return mid;
            }
            else if(arr[mid] > k){
                right = mid-1;
            }
            else {
                left = mid+1;
            }
        }
        return left;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        vector<int>Arr(N);
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.searchInsertK(Arr, N, k)<<endl;
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends