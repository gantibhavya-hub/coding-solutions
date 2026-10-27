class Solution {
public:
    int mirrorDistance(int n) {
        long long rev=0;
        long long temp=n;
        while(temp>0)
        {
            int r=temp%10;
            rev=rev*10+r;
            temp/=10;
        }
        long long ans=abs(n-rev);
        return ans;
    }
};