class Solution {
public:
    bool checkGoodInteger(int n) {
        long long digitSum=0,squareSum=0;
        while(n>0)
        {
            long long r=n%10;
            digitSum+=r;
            squareSum+=r*r;
            n/=10;
        }
        long long ans=squareSum-digitSum;
        if(ans>=50)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};