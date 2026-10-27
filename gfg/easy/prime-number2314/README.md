# Prime Number

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given a number  **n**, determine whether it is a  **prime number**  or not.
 **Note:**  A prime number is a number greater than 1 that has no positive divisors other than 1 and itself.

**Examples :
**

```
Input: n = 7
Output: true
Explanation: 7 has exactly two divisors: 1 and 7, making it a prime number.
```

```
Input: n = 25
Output: false
Explanation: 25 has more than two divisors: 1, 5, and 25, so it is not a prime number.
```

```
Input: n = 1
Output: false
Explanation: 1 has only one divisor (1 itself), which is not sufficient for it to be considered prime.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-27T17:28:48.529Z  

```cpp
class Solution {
  public:
    bool isPrime(int n) {
        // code here
     int c=0;
     for(int i=1;i*i<=n;i++){
         if(n%i==0){
             c++;
         if(n/i!=i){
             c++;}
             
             
         }
     }
     if(c==2) return true;
     else return false;
    }
};

```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/prime-number2314/1)