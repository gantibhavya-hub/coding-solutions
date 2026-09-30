class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        map<int,vector<int>>pos;
        for(int i=0;i<nums.size();i++)
        {
            pos[nums[i]].push_back(i);
        }
        int ans=0;
        for(auto p:pos)
            {
                vector<int>v=p.second;
                if(v.size()==3)
                {
                    if(v[1]-v[0]==v[2]-v[1])
                    {
                        ans++;
                    }
                }
            }
        return ans;
    }
};