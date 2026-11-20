class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        int s=start[0]+start[1];
        int end=target[0]+target[1];
        if(s%2==0 && end%2==0 || s%2!=0 && end%2!=0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};