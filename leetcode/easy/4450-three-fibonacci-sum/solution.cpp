class Solution {
public:
    bool threeFibonacciSum(int n) {
        vector<long long>v;
        long long a=0,b=1;
        int i=0;
        while(true)
        {
            long long c=a+b;
            long long sum=a+b+c;
            if(sum==n)
            {
                return true;
            }
            if(sum>n)
            {
                return false;
            }
            a=b;
            b=c;
        }
    }
};