class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<char>st;
        int count=0;
        for(char ch:s)
        {
            if(ch=='(')
            {
                st.push(count);
                count=0;
            }
            else
            {
                int score=max(2*count,1);
                count=st.top()+score;
                st.pop();
            }
        }
        return count;
    }
};