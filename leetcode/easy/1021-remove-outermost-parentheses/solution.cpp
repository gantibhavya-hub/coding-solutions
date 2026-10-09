class Solution {
public:
    string removeOuterParentheses(string s) {
        string s1;
    int dept=0;
    for(char c:s)
    {
        if(c=='(')
        {
            if(dept>0) s1+=c;
            dept++;
        }
        else
        {
            dept--;
            if(dept>0) s1+=c;
        }
    }
        return s1;
    }
};