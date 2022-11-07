class Solution {
public:
    int maximum69Number (int num) {
        int nums=num;
         int i=1;
        int digitcount=-1;
        int count=0;
        while(num>0){
            int rem=num%10;
            if(rem==6){
                digitcount=count;
                
            }
            count++;
            num=num/10;
        }
        if(digitcount==-1)return nums;
        int ans=nums+(3*pow(10,digitcount));
        return ans;
    }
};




