// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        // Write Your Code here
        vector<int>ans;
        int sum1=0, sum2=0;
        sort(candies,candies+N);
        int j=N;
         int m=N;
        for(int i=0; i<j; i++){
            sum1+=candies[i];
            j-=K;
        }
        ans.push_back(sum1);
       
        int n=N;
        int t=0;
        for(int i=n-1; i>=t; i--){
            sum2 +=candies[i];
            t +=K;
        }
        ans.push_back(sum2);
        return ans;
            
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        int candies[N];

        for (int i = 0; i < N; i++)
        {
            cin >> candies[i];
        }

        Solution ob;
        vector<int> cost = ob.candyStore(candies, N, K);
        cout << cost[0] << " " << cost[1] << endl;
    }
    return 0;
}  // } Driver Code Ends