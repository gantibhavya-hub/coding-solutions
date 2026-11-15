class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            int mini=INT_MAX;
            int ans=INT_MAX;
            for(int j=i;j<nums.size();j++)
            {
                mini=min(mini,nums[j]);
               ans&=nums[j];
            if(ans==mini)
            {
                count++;
            }
            }
        }
        return count;
    }
};