// { Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>

using namespace std;



 // } Driver Code Ends


class Solution{
public:

//we will use reverse priory queue in order to miantain the decreasing order 
//everytime while iterting we compare array element with priooty quque top 
//element and if it is greater then top element then we decrement the value 
//upto top element and increment count by that nummber;
    int minOperations(int *a,int n)
    {
        int count =0;
        priority_queue<int ,vector<int>,greater<int>>pq;
        for(int i=0; i<n; i++){
            if(!pq.empty() && pq.top()<a[i]){
                count+=a[i]-pq.top();
                pq.push(a[i]);
                pq.pop();
                
            }
            pq.push(a[i]);
            //3,4,53,7,3,8
            //3
            //3 4
            //4
            //4 4
            //4 4 53
            
            //3
            //1 3
            //1 3 5
            //3 5
            
        }
        return count;
    }
};

// { Driver Code Starts.

int main() {
    
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int  a[n+1];
        for(int i=0;i<n;i++)
            cin>>a[i];
            
        Solution ob;
        cout<<ob.minOperations(a,n)<<endl;
    }
    
	return 0;
}  // } Driver Code Ends