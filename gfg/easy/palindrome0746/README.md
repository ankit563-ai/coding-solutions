# Palindrome Number

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

You are given an integer `n`. Your task is to find if it is a palindrome.

 **Examples:** 

```
Input: n = 555
Output: true
Explanation: The number 555 reads the same backward as forward, so it is a palindrome.
```

```
Input: n = 123
Output: false
Explanation: The number 123 reads differently backward (321), so it is not a palindrome.
```

```
Input: n = -121
Output: true
Explanation: if number is palindrome, mainly ignore sign.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-27T15:36:29.687Z  

```cpp
class Solution {
  public:
    bool isPalindrome(int n) {
        // code here
        if(n<0){
           n=-n;
        }
      int d=n;
      long long r=0;
      while(n>0){
          int l=n%10;
          r=(r*10)+l;
          n=n/10;
      }
      if(r==d){
          return true;
      }
      else{
          return false;}
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/palindrome0746/1)