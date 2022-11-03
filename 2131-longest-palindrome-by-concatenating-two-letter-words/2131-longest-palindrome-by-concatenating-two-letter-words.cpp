class Solution {
public:
    // string rev(string str){
    //     char temp=str[0];
    //     str[0]=str[1];
    //     str[1]=temp;
    //     return str;
    // }
    int longestPalindrome(vector<string>& words) {
        int count = 0;
       unordered_map<string,int> hm; 
       
       for(string s:words){ // match to make pairs that can be taken in palindrome
           string p = s;
           reverse(p.begin(),p.end());
           if(hm[p]>0){ // reverse of current string found, these 2 strings can be added to palindrome 
               count+= 4;
               hm[p]--;  // remove occurence of string as we used it for palindrome
           }
           else{
               hm[s]++;   // reverse not fount , put it in hashmap
           }
       }
        
       for(auto it:hm){
           if(it.first[0]==it.first[1] && it.second>0){
             return count+=2;
           }
       }
        return count;
    }
};