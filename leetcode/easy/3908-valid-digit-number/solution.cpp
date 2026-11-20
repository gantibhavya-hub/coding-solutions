class Solution {
public:
    bool validDigit(int n, int x) {
        int count=0;
        vector<int>v;
        while(n>0)
        {
            int r=n%10;
            v.push_back(r);
            n/=10;
        }
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==x)
            {
                count++;
            }
        }
        if(count>=1 && v[v.size()-1]!=x)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};