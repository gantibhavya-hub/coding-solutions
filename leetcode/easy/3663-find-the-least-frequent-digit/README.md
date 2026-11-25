# Find The Least Frequent Digit

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an integer `n`, find the digit that occurs  **least**  frequently in its decimal representation. If multiple digits have the same frequency, choose the  **smallest**  digit.

Return the chosen digit as an integer.

The  **frequency**  of a digit `x` is the number of times it appears in the decimal representation of `n`.

 

Original
C++
 **Example 1:** 

 **Input:**  n = 1553322

 **Output:**  1

 **Explanation:** 

The least frequent digit in `n` is 1, which appears only once. All other digits appear twice.

 **Example 2:** 

 **Input:**  n = 723344511

 **Output:**  2

 **Explanation:** 

The least frequent digits in `n` are 7, 2, and 5; each appears only once.

 

 **Constraints:** 

- 1 <= n <= 231​​​​​​​ - 1

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 9.3 MB (beats 8.09%)  
**Submitted:** 2026-11-25T16:51:26.905Z  

```cpp
class Solution {
public:
    int getLeastFrequentDigit(int n) {
        int t=n;
        vector<int>v;
        while(n>0)
        {
            int r=n%10;
            v.push_back(r);
            n/=10;
        }
        unordered_map<int,int>freq;
        for(int i=0;i<v.size();i++)
        {
            freq[v[i]]++;
        }
        int mini=INT_MAX;
        int count=0;
        for(auto i:freq)
        {
            mini=min(mini,i.second);
        }
        int ans=INT_MAX;
        for(auto i:freq)
        {
            if(i.second==mini)
            {
                ans=min(ans,i.first);
            }
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/find-the-least-frequent-digit/)