class Solution {
public:
    int digitFrequencyScore(int n) {
        vector<long long>r;
        while(n>0)
        {
            long long m=n%10;
            r.push_back(m);
            n/=10;
        }
        unordered_map<long long,long long>a;
        for(long long i=0;i<r.size();i++)
        {
            a[r[i]]++;
        }
        long long sum=0;
        for(auto j:a)
        {
            sum+=j.first*j.second;
        }
        return sum;
    }
};