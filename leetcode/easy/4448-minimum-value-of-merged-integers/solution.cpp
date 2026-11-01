class Solution {
public:
    int merge(int a, int b)
    {
        if(b==0)
        return a*10;
        int digits=log10(b)+1;
        return a*pow(10,digits)+b;
    }
    int minMergedInteger(vector<int>& nums) {
        int mini=INT_MAX;
        for(int i=0;i<nums.size()-1;i+=2)
        {
            int m=merge(nums[i],nums[i+1]);
            mini=min(mini,m);
        }
        return mini;
    }
};