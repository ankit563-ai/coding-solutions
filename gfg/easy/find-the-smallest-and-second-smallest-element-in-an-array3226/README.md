# First and Second Smallests

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an array,  **arr[]**  of integers, your task is to return the  **smallest**  and  **second smallest**  element in the array. If the smallest and second smallest do not exist, return  **-1.** 

 **Examples:** 

```
Input: arr[] = [2, 4, 3, 5, 6]
Output: [2, 3] 
Explanation: 2 and 3 are respectively the smallest and second smallest elements in the array.
```

```
Input: arr[] = [1, 1, 1]
Output: [-1]
Explanation: Only element is 1 which is smallest, so there is no second smallest element.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-25T17:18:17.798Z  

```cpp
class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        // code here
       int n=arr.size();
       int f=arr[0];
       for(int i=0;i<n;i++){
           if(arr[i]<f){
               f=arr[i];
           }
       }
       int s=INT_MAX;
       for(int i=0;i<n;i++){
           if(arr[i]<s&&arr[i]!=f){
               s=arr[i];
           }
       }
       if(s==INT_MAX){
           return {-1
               
           };
       }
       return {f,s};
        
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/find-the-smallest-and-second-smallest-element-in-an-array3226/1)