# Generate Parentheses

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given `n` pairs of parentheses, write a function to  *generate all combinations of well-formed parentheses*.

 

 **Example 1:** 

```
Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]

```

 **Example 2:** 

```
Input: n = 1
Output: ["()"]

```

 

 **Constraints:** 

- 1 <= n <= 8

## Solution

**Language:** C++  
**Runtime:** 4 ms (beats 30.41%)  
**Memory:** 16.1 MB (beats 23.35%)  
**Submitted:** 2026-10-02T15:51:17.113Z  

```cpp
class Solution {
public:
vector<string>ans;
void generate(int open , int close , int n, string s)
{
    if(open==n && close==n)
    {
        ans.push_back(s);
        return;
    }
    if(open<n)
    {
        generate(open+1,close,n,s+'(');
    }
    if(open>close)
    {
        generate(open,close+1,n,s+')');
    }
}
    vector<string> generateParenthesis(int n) {
        generate(0,0,n,"");
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/generate-parentheses/)