# Alternating Digit Sum

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given a positive integer `n`. Each digit of `n` has a sign according to the following rules:

- The most significant digit is assigned a positive sign.
- Each other digit has an opposite sign to its adjacent digits.

Return  *the sum of all digits with their corresponding sign*.

 

 **Example 1:** 

```
Input: n = 521
Output: 4
Explanation: (+5) + (-2) + (+1) = 4.

```

 **Example 2:** 

```
Input: n = 111
Output: 1
Explanation: (+1) + (-1) + (+1) = 1.

```

 **Example 3:** 

```
Input: n = 886996
Output: 0
Explanation: (+8) + (-8) + (+6) + (-9) + (+9) + (-6) = 0.

```

 

 **Constraints:** 

- 1 <= n <= 109

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 7.9 MB  
**Submitted:** 2026-10-27T14:27:26.382Z  

```cpp
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
        long long sum=0;
        for(long long i=0;i<v.size();i++)
        {
            if(i%2!=0)
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
```

---

[View on LeetCode](https://leetcode.com/problems/alternating-digit-sum/)