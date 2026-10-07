# Minimum Absolute Difference

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an array of  **distinct**  integers `arr`, find all pairs of elements with the minimum absolute difference of any two elements.

Return a list of pairs in ascending order(with respect to pairs), each pair `[a, b]` follows

- a, b are from arr
- a < b
- b - a equals to the minimum absolute difference of any two elements in arr

 

 **Example 1:** 

```
Input: arr = [4,2,1,3]
Output: [[1,2],[2,3],[3,4]]
Explanation: The minimum absolute difference is 1. List all pairs with difference equal to 1 in ascending order.
```

 **Example 2:** 

```
Input: arr = [1,3,6,10,15]
Output: [[1,3]]

```

 **Example 3:** 

```
Input: arr = [3,8,-10,23,19,-4,-14,27]
Output: [[-14,-10],[19,23],[23,27]]

```

 

 **Constraints:** 

- 2 <= arr.length <= 105
- -106 <= arr[i] <= 106

## Solution

**Language:** C++  
**Runtime:** 16 ms (beats 48.44%)  
**Memory:** 36.8 MB (beats 16.35%)  
**Submitted:** 2026-10-07T16:33:47.699Z  

```cpp
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int min=INT_MAX;
        vector<vector<int>>s;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size()-1;i++)
        {
            int d=arr[i+1]-arr[i];
            if(min>d)
            {
                min=d;
            }
        }
        for(int i=0;i<arr.size()-1;i++)
        {
            if(abs(arr[i+1]-arr[i]==min))
            {
                s.push_back({arr[i],arr[i+1]});
            }
        }
        return s;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/minimum-absolute-difference/)