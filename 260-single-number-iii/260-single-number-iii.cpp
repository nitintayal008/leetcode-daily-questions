class Solution {
public:
    vector<int> singleNumber(vector<int>& arr) {
        if(arr.size()==2)return arr;
        long long n=arr.size();
        vector<int>ans;
        long long XOR=0;
        long long res=0;
        long long res2=0;
        for(int i=0;i<n; i++){
            XOR=XOR^arr[i];
        }
        long long temp=XOR&(~(XOR-1));
        for(int i=0;i<n; i++){
            if((arr[i]&temp)!=0){
                res=res^arr[i];
            }else{
                res2=res2^arr[i];
            }
        }
            
        ans.push_back(res);
        ans.push_back(res2);
        return ans;
        
    }
};