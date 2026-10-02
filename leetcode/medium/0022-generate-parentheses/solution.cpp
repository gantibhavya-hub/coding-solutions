class Solution {
public:
vector<string>ans;
void generate(int open , int close , int n, string s)
{
    if(open==n && close==n)
    {
        ans.push_back(s);
        return;
    }
    if(open<n)
    {
        generate(open+1,close,n,s+'(');
    }
    if(open>close)
    {
        generate(open,close+1,n,s+')');
    }
}
    vector<string> generateParenthesis(int n) {
        generate(0,0,n,"");
        return ans;
    }
};