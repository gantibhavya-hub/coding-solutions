# X of a Kind in a Deck of Cards

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given an integer array `deck` where `deck[i]` represents the number written on the `ith` card.

Partition the cards into  **one or more groups**  such that:

- Each group has exactly x cards where x > 1, and
- All the cards in one group have the same integer written on them.

Return `true` *if such partition is possible, or* `false` *otherwise*.

 

 **Example 1:** 

```
Input: deck = [1,2,3,4,4,3,2,1]
Output: true
Explanation: Possible partition [1,1],[2,2],[3,3],[4,4].

```

 **Example 2:** 

```
Input: deck = [1,1,1,2,2,2,3,3]
Output: false
Explanation: No possible partition.

```

 

 **Constraints:** 

- 1 <= deck.length <= 104
- 0 <= deck[i] < 104

## Solution

**Language:** C++  
**Runtime:** 2 ms (beats 27.17%)  
**Memory:** 21.4 MB (beats 26.75%)  
**Submitted:** 2026-10-02T16:29:37.135Z  

```cpp
class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        map<int,int>result;
        for(int i=0;i<deck.size();i++)
        {
            result[deck[i]]++;
        }
        int g=0;
        for(auto i:result)
        {
            g=gcd(g,i.second);
        }
        return g>1;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/x-of-a-kind-in-a-deck-of-cards/)