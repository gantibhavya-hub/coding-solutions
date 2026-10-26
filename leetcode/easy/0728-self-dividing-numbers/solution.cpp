class Solution {
public:
int self(int n){
    int temp=n;
    while(temp>0)
    {
        int r=temp%10;
        if(r==0 || n%r!=0)
        {
            return false;
        }
        temp/=10;
    }
   return true;
}
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(long long i=left;i<=right;i++)
        {
            if(self(i)==true)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};