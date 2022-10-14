//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 
  

// } Driver Code Ends
class Solution{
    public:
    int maximizeSum(int a[], int n) 
    {
        // Complete the function
        unordered_map<int,int>mp;
        for(int i=0;i<n; i++){
            mp[a[i]]++;
        }
        vector<int>v(a,a+n);
        sort(v.rbegin(),v.rend());
        int i=0;
        int sum=0;
        while(i<n){
            if(mp[v[i]]>0){
                sum+=v[i];
                mp[v[i]]--;
                mp[v[i]-1]--;
                i++;
            }else{
                i++;
            }
        }
        return sum;
    }

};


//{ Driver Code Starts.



int main()
{
    
    int t;cin>> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        sort(arr, arr+n);
        Solution ob;
        
        cout << ob.maximizeSum(arr, n) << endl;
        
        
    }

}


// } Driver Code Ends