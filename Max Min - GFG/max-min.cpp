//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
   public:
   int mini=INT_MAX;
   int maxo=INT_MIN;
    int findSum(int A[], int N)
    {
    	for(int i=0;i<N; i++){
    	    if(mini>A[i]){
    	        mini=A[i];
    	    }
    	    if(maxo<A[i]){
    	        maxo=A[i];
    	    }
    	}
    	return mini+maxo;
    }

};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.findSum(arr, n);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}

// } Driver Code Ends