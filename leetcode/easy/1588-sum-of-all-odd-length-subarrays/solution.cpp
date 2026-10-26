class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int total_sum=0;
        for(int i=0;i<arr.size();i++)
        {
            int sum=0;
            for(int j=i;j<arr.size();j++)
            {
                sum+=arr[j];
                if((j-i+1)%2!=0)
                {
                    total_sum+=sum;
                }
            }
        }
        return total_sum;
    }
};