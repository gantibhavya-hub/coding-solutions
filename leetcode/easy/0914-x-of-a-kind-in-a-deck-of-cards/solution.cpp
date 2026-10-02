class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        map<int,int>result;
        for(int i=0;i<deck.size();i++)
        {
            result[deck[i]]++;
        }
        int g=0;
        for(auto i:result)
        {
            g=gcd(g,i.second);
        }
        return g>1;
    }
};