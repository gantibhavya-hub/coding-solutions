# Self Dividing Numbers

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

A  **self-dividing number**  is a number that is divisible by every digit it contains.

- For example, 128 is a self-dividing number because 128 % 1 == 0, 128 % 2 == 0, and 128 % 8 == 0.

A  **self-dividing number**  is not allowed to contain the digit zero.

Given two integers `left` and `right`, return  *a list of all the  **self-dividing numbers**  in the range*  `[left, right]` (both  **inclusive**).

 

 **Example 1:** 

```
Input: left = 1, right = 22
Output: [1,2,3,4,5,6,7,8,9,11,12,15,22]

```

 **Example 2:** 

```
Input: left = 47, right = 85
Output: [48,55,66,77]

```

 

 **Constraints:** 

- 1 <= left <= right <= 104

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 9.2 MB (beats 24.84%)  
**Submitted:** 2026-10-26T09:22:11.197Z  

```cpp
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
```

---

[View on LeetCode](https://leetcode.com/problems/self-dividing-numbers/)