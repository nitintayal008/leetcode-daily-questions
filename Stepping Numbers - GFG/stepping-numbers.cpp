//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:

    int steppingNumbers(int n, int m)
    {
        // Code Here
        int d[] = {0,1,2,3,4,5,6,7,8,9};
        queue<int> q;
        int ans=0;
        for(int i=1; i<=9; i++)
            q.push(i);
        if(n==0)
            ans++;
        while(!q.empty())
        {
            int node = q.front();
            q.pop();
            if(node >= n && node <= m)
            {
                ans++;
            }
            int child, lastdigit=node%10;
            node *= 10;
            if(lastdigit)
            {
                child = node + lastdigit[d-1];
                if(child<=m)
                    q.push(child);
            }
            if(lastdigit != 9)
            {
                child = node + lastdigit[d+1];
                if(child<=m)
                    q.push(child);
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main()
{
    Solution obj;
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        cin>>n>>m;
        cout << obj.steppingNumbers(n,m) << endl;
    }
	return 0;
}


// } Driver Code Ends