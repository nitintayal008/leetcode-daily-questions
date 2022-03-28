// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
public:    
       int swapBits(int x, int p1, int p2, int n)
    {
        int ans1=0,ans2=0;
        for(int i=p1;i<p1+n;i++)if(x&(1<<i))ans1+=(1<<i);
        for(int i=p2;i<p2+n;i++)if(x&(1<<i))ans2+=(1<<i);
        int s=p2-p1;
     
        return (x-ans1+(ans1<<s)-ans2+(ans2>>s));
    }
};

// { Driver Code Starts.

 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,p1,p2,n;
		cin>>x>>p1>>p2>>n;
		Solution obj;
		int res=obj.swapBits(x,p1,p2,n);
		printf("%d\n", res);
	}
    return 0;
}  // } Driver Code Ends