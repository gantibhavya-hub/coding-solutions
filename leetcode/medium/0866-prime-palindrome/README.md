# Prime Palindrome

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer n, return  *the smallest  **prime palindrome**  greater than or equal to* `n`.

An integer is  **prime**  if it has exactly two divisors: `1` and itself. Note that `1` is not a prime number.

- For example, 2, 3, 5, 7, 11, and 13 are all primes.

An integer is a  **palindrome**  if it reads the same from left to right as it does from right to left.

- For example, 101 and 12321 are palindromes.

The test cases are generated so that the answer always exists and is in the range `[2, 2 * 108]`.

 

 **Example 1:** 

```
Input: n = 6
Output: 7

```

 **Example 2:** 

```
Input: n = 8
Output: 11

```

 **Example 3:** 

```
Input: n = 13
Output: 101

```

 

 **Constraints:** 

- 1 <= n <= 108

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 7.6 MB (beats 99.38%)  
**Submitted:** 2026-10-07T16:57:09.721Z  

```cpp
class Solution {
public:
     bool isprime(int n)
        {
            if(n<2)
            return false;
            if(n%2==0)
            return n==2;
            for(int i=3;i*i<=n;i+=2)
            {
                if(n%i==0)
                return false;
            }
            return true;
        }
        int makepalindrome(int n){
            int ans=n;
            n/=10;
            while(n>0)
            {
                ans=ans*10+n%10;
                n/=10;
            }
            return ans;
        }
    int primePalindrome(int n) {
        if(n<=2)
        return 2;
        if(n<=3)
        return 3;
        if(n<=5)
        return 5;
        if(n<=7)
        return 7;
        if(n<=11)
        return 11;
        for(int x=10; ;x++)
        {
            int palindrome=makepalindrome(x);
            if(palindrome>=n && isprime(palindrome))
            return palindrome;
        }
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/prime-palindrome/)