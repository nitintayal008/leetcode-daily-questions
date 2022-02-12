// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       vector<int>ans;
       stack<int>st;
       st.push(0);
       ans.push_back(1);
      for(int i=1; i<n; i++){
          while(st.empty()==false && price[st.top()]<=price[i]){
              st.pop();
          }
          // logic we are using 
          // first we are calculating oyr answer and then pushing that 
          // address into stack. we are taking use of that address and 
          // then pushing.
          int span=(st.empty()?(i+1):(i-st.top()));
          ans.push_back(span);
          st.push(i);
      }
      return ans;
    }
};



// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends