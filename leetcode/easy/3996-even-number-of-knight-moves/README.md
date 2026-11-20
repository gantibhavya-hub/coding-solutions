# Even Number of Knight Moves

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given two integer arrays `start` and `target`, where each array is of the form `[x, y]` representing a cell on a standard 8 x 8 chessboard.

Return `true` if a knight can move from `start` to `target` in an  **even**  number of moves. Otherwise, return `false`.

 **Note:**  A valid knight move consists of moving two squares in one direction and one square perpendicular to it. The figure below illustrates all eight possible moves from a cell.

 

Original
C++
 **Example 1:** 

 **Input:**  start = [1,1], target = [2,2]

 **Output:**  true

 **Explanation:** 

One possible sequence of moves is `(1, 1) -> (3, 2) -> (2, 4) -> (4, 3) -> (2, 2)`.

The knight reaches the target in 4 moves, which is even. Thus, the answer is `true`.

 **Example 2:** 

 **Input:**  start = [4,5], target = [6,6]

 **Output:**  false

 **Explanation:** ​​​​​​​

It is impossible to reach `target = [6, 6]` from `start = [4, 5]` in an even number of moves. Thus, the answer is `false`.

 

 **Constraints:** 

- start.length == target.length == 2
- 0 <= start[i], target[i] <= 7

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 49.7 MB (beats 27.48%)  
**Submitted:** 2026-11-20T18:09:56.027Z  

```cpp
class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        int s=start[0]+start[1];
        int end=target[0]+target[1];
        if(s%2==0 && end%2==0 || s%2!=0 && end%2!=0)
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

[View on LeetCode](https://leetcode.com/problems/even-number-of-knight-moves/)