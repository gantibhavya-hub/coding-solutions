
class Solution {
public:
    bool primes(int n)
    {
        if(n<2)
        return false;
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                return false;
            }
        }
        return true;
    }
    vector<int> maxPrimes(int n, int s) {
        vector<int>v;
        long long sum=0;
        for(int i=2;i<=n;i++)
        {
            if(primes(i))
            {
                if(sum+i<=s)
                {
                    sum+=i;
                   v.push_back(i);
                }
                else
                {
                    break;
                }
            }
        }
        return v;
    }
};