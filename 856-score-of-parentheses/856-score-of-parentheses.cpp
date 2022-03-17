class Solution 
{
public:
    int scoreOfParentheses(string s) 
    {
        int score = 0;
        stack<int> st;
        
        for(auto it : s)
        {
            // when we found ( just push it to the stack
            if(it=='(')
            {
                // pushing a pair
                st.push(score);
                
                // set score to 0 again for new pair
                score = 0;
            }
            
            // if we found ) parenthesis for a pair then change the score
            else
            {
                score = st.top() + max(2*score, 1);
                st.pop();
            }
        }
        
        return score;
    }
};