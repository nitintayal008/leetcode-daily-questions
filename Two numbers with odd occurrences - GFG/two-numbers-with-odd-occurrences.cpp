//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{

    public:

    vector<long long int> twoOddNum(long long int arr[], long long int n)  

    {

        // code here

        long long int xor1 = 0, x1=0, x2=0;

        for(int i=0; i<n; i++){

            xor1 ^= arr[i];

        }

        long long sn = xor1 & ~(xor1-1);

        for(int i=0; i<n; i++){

            if((arr[i]&sn) != 0)

            x1 ^= arr[i];

            else

            x2 ^= arr[i];

        }

        vector<long long> v;

        v.emplace_back(max(x1,x2));

        v.emplace_back(min(x1,x2));

        return v;

    }

};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        long long int Arr[N];
        for(long int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<long long int>ans=ob.twoOddNum(Arr,N);
        for(long long int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends