class Solution {
public:
    int minRotations(string s) {
        int current=0;
        int total=0;
        for(int i=0;i<s.length();i++)
        {
            int next=s[i]-'0';
            int d=abs(current-next);
            int rotations=min(d,10-d);
            total+=rotations;
            current=next;
        }
        return total;
    }
};