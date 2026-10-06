class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        map<int,int>count;
        for(int i=0;i<nums.size();i++)
        {
            count[nums[i]]++;
        }
        vector<int>result;
        int r;
        for(auto val:count)
        {
            if(val.second==2)
            {
            r=val.first;
            result.push_back(r);
            }
        }
        return result;
    }
};