class Solution {
public:
   bool checkPoll(string s, int i , int j){
       while(i<j){
           if(s[i]==s[j]){
            i++;
            j--;
            
        }
        
            else{
                   return false;
            }
       }
       return true;
        
             
    }
    bool validPalindrome(string s) {
        int n=s.length();
        int i=0,j=n-1;
        while(s[i]==s[j]&& i<j){
            i++;
            j--;
        } return checkPoll(s,i+1,j) || checkPoll(s,i,j-1);
    }
};