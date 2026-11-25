class Solution {
public:
    int getLeastFrequentDigit(int n) {
        int t=n;
        vector<int>v;
        while(n>0)
        {
            int r=n%10;
            v.push_back(r);
            n/=10;
        }
        unordered_map<int,int>freq;
        for(int i=0;i<v.size();i++)
        {
            freq[v[i]]++;
        }
        int mini=INT_MAX;
        int count=0;
        for(auto i:freq)
        {
            mini=min(mini,i.second);
        }
        int ans=INT_MAX;
        for(auto i:freq)
        {
            if(i.second==mini)
            {
                ans=min(ans,i.first);
            }
        }
        return ans;
    }
};