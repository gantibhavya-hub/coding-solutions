# Reverse String Prefix

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given a string `s` and an integer `k`.

Reverse the first `k` characters of `s` and return the resulting string.

 

 **Example 1:** 

 **Input:**  s = "abcd", k = 2

 **Output:**  "bacd"

 **Explanation:** ​​​​​​​

The first `k = 2` characters `"ab"` are reversed to `"ba"`. The final resulting string is `"bacd"`.

 **Example 2:** 

 **Input:**  s = "xyz", k = 3

 **Output:**  "zyx"

 **Explanation:** 

The first `k = 3` characters `"xyz"` are reversed to `"zyx"`. The final resulting string is `"zyx"`.

 **Example 3:** 

 **Input:**  s = "hey", k = 1

 **Output:**  "hey"

 **Explanation:** 

The first `k = 1` character `"h"` remains unchanged on reversal. The final resulting string is `"hey"`.

 

 **Constraints:** 

- 1 <= s.length <= 100
- s consists of lowercase English letters.
- 1 <= k <= s.length

## Solution

**Language:** C  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8.8 MB (beats 31.39%)  
**Submitted:** 2026-10-08T17:21:37.381Z  

```c
char* reversePrefix(char* s, int k) {
  int i;
    char temp;
    for(int i=0;i<k/2;i++)
    {
        temp=s[i];
        s[i]=s[k-i-1];
        s[k-i-1]=temp;
    }
    return s;
}
```

---

[View on LeetCode](https://leetcode.com/problems/reverse-string-prefix/)