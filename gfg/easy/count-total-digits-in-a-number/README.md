# Count Digits in Number

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a number  **n**, return the count of digits in this number.

 **Examples :** 

```
Input: n = 1567
Output: 4
Explanation: There are 4 digits in 1567, which are 1, 5, 6 and 7.
```

```
Input: n = 99999
Output: 5
Explanation: The number of digits in 99999 is 5.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-27T13:39:33.437Z  

```cpp
class Solution {
  public:
    int countDigits(int n) {
        // Code here
    if(n==0){
        return 1;
    }
    int c=0;
    while(n>0){
        c++;
        n=n/10;
    }
    return c;
        
    }
    
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/count-total-digits-in-a-number/1)