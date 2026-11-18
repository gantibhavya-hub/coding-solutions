# RIBBONCUT

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Ribbon Cut

You have a ribbon of length $N$. You want to cut it into two pieces of positive integer lengths such that one piece is  **exactly twice as long**  as the other.

Determine whether this is possible.

### Input Format
- The only line of input contains a single integer $N$.
### Output Format

Output `YES` if it is possible, and `NO` otherwise.

Each letter of `YES` and `NO` may be printed in either uppercase or lowercase.

### Constraints
- $1 \leq N \leq 20$
### Sample 1:
Input
Output

```
6

```

```
YES

```

### Explanation:

Cut the ribbon into pieces of lengths $2$ and $4$.

### Sample 2:
Input
Output

```
10

```

```
NO

```

### Explanation:

The possible size pairs after cutting are: $(1, 9), (2, 8), (3, 7), (4, 6), (5, 5)$. It can be verified that none of them work.

### Sample 3:
Input
Output

```
9

```

```
YES

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-18T15:32:20.343Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	if(n==1 || n==3 || n==5 || n==7 || n==11 || n==13 || n==17 || n==19)
	{
	    cout<<"NO";
	}
	else if(n%2==0)
	{
	    int a=n-2;
	    int r=n-a;
	    if(2*r==a)
	    {
	        cout<<"YES";
	    }
	    else
	    {
	        cout<<"NO";
	    }
	}
	else if(n%3==0)
	{
	    int a=n-3;
	    int r=n-a;
	    if(2*r==a)
	    {
	        cout<<"YES";
	    }
	    else
	    {
	        cout<<"NO";
	    }
	}
}

```

---

[View on CodeChef](https://www.codechef.com/problems/RIBBONCUT)