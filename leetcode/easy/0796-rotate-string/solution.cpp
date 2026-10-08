class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.length();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            string t=s.substr(i)+s.substr(0,i);
            if(t==goal)
            {
                ans=1;
            }
        }
        if(ans==1)
        return true;
        else
        return false;
    }
};