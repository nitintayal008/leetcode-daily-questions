// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    int findSubString(string str){
        int n=str.size();
        unordered_map<char,int> mpp;
        for(auto e: str){
            mpp[e]++;
        }
        int distinct=mpp.size();
        int wS=0;
        int wE=0;
        int res=INT_MAX;
        mpp.clear();
        while(wE<n){
            mpp[str[wE]]++;
            while(mpp.size()==distinct){
                res=min(res,wE-wS+1);
                mpp[str[wS]]--;
                if(mpp[str[wS]]==0){
                    mpp.erase(str[wS]);
                }
                wS++;
            }
            wE++;
        }
        return res;
    }
};

// { Driver Code Starts.
// Driver code
int main() {
    int t;
    cin >> t;
    while (t--) {

        string str;
        cin >> str;
        Solution ob;
        cout << ob.findSubString(str) << endl;
    }
    return 0;
}  // } Driver Code Ends