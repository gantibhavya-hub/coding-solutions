class Solution {
public:
    int peakValleyDifference(vector<int>& nums) {
        int peaksum=0,valleysum=0;
        for(int i=1;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1])
            {
                peaksum+=nums[i];
            }
            if(nums[i]<nums[i-1] && nums[i]<nums[i+1])
            {
                valleysum+=nums[i];
            }
        }
        return peaksum-valleysum;
    }
};