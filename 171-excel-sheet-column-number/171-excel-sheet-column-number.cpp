class Solution {
public:
    
    //example BCD
    //26*26*2 + 26*3 + 4
    //26(26*2+3)+4
    //result*26+d
    
    
    int titleToNumber(string columnTitle) {
          int result = 0;
        for (char c: columnTitle){
            int d = (c-'A')+1;
            result = result*26 + d;
        }
        return result;
    
    }
};