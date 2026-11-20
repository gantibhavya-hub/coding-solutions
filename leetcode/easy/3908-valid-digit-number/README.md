# Valid Digit Number

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given an integer `n` and a digit `x`.

A number is considered  **valid**  if:

- It contains at least one occurrence of digit x, and
- It does not start with digit x.

Return `true` if `n` is  **valid**, otherwise return `false`.

 

Original
C++
 **Example 1:** 

 **Input:**  n = 101, x = 0

 **Output:**  true

 **Explanation:** 

The number contains digit 0 at index 1. It does not start with 0, so it satisfies both conditions. Thus, the answer is `true`​​​​​​​.

 **Example 2:** 

 **Input:**  n = 232, x = 2

 **Output:**  false

 **Explanation:** 

The number starts with 2, which violates the condition. Thus, the answer is `false`.

 **Example 3:** 

 **Input:**  n = 5, x = 1

 **Output:**  false

 **Explanation:** 

The number does not contain digit 1. Thus, the answer is `false`.

 

 **Constraints:** 

- 0 <= n <= 105​​​​​​​
- 0 <= x <= 9

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8.1 MB (beats 48.40%)  
**Submitted:** 2026-11-20T17:59:08.638Z  

```cpp
class Solution {
public:
    bool validDigit(int n, int x) {
        int count=0;
        vector<int>v;
        while(n>0)
        {
            int r=n%10;
            v.push_back(r);
            n/=10;
        }
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==x)
            {
                count++;
            }
        }
        if(count>=1 && v[v.size()-1]!=x)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/valid-digit-number/)