class Solution {
public:
    long long minCost(vector<int>& nums) {
        int n=nums.size();
        long long ans=LLONG_MAX;
        int l=0;
        while(l<n)
        {
            int r=l;
            while(r+1<n && nums[r+1]==nums[l])
            {
                r++;
            }
            if(l<n-1 && r>0)
            {
                long long cost=1LL*(l+n-r-1)*nums[l];
                ans=min(ans,cost);
            }
            l=r+1;
        }
        return ans;
    }
};