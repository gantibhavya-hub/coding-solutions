# Rotate String

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given two strings `s` and `goal`, return `true`  *if and only if*  `s`  *can become*  `goal`  *after some number of  **shifts**  on*  `s`.

A  **shift**  on `s` consists of moving the leftmost character of `s` to the rightmost position.

- For example, if s = "abcde", then it will be "bcdea" after one shift.

 

 **Example 1:** 

 **Input:**  s = "abcde", goal = "cdeab"

 **Output:**  true

 **Explanation:** 

Rotating `s` to the left by 2 positions moves `"ab"` to the end, resulting in `"cdeab"`, which is equal to `goal`.

 **Example 2:** 

 **Input:**  s = "abcde", goal = "abced"

 **Output:**  false

 **Explanation:** 

No sequence of rotations of `s` can produce `"abced"`. The characters appear in a different relative order, so `goal` is not a rotation of `s`.

 

 **Constraints:** 

- 1 <= s.length, goal.length <= 100
- s and goal consist of lowercase English letters.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8.2 MB (beats 23.00%)  
**Submitted:** 2026-10-08T17:15:42.781Z  

```cpp
class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.length();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            string t=s.substr(i)+s.substr(0,i);
            if(t==goal)
            {
                ans=1;
            }
        }
        if(ans==1)
        return true;
        else
        return false;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/rotate-string/)