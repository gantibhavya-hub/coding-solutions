class Solution {
public:
    int alternateDigitSum(int n) {
        vector<long long>v;
        while(n>0)
        {
            long long r=n%10;
            v.push_back(r);
            n/=10;
        }
        reverse(v.begin(),v.end());
        long long sum=0;
        for(long long i=0;i<v.size();i++)
        {
            if(i%2==0)
            {
                sum+=v[i];
            }
            else
            {
                sum-=v[i];
            }
        }
        return sum;
    }
};