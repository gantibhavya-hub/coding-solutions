class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>result;
        for(int i=0;i<heights.size();i++)
        {
            result.push_back(heights[i]);
        }
        sort(result.begin(),result.end());
        int count=0;
        for(int i=0;i<result.size();i++)
        {
            if(heights[i]!=result[i])
            count++;
        }
        return count;
    }
};