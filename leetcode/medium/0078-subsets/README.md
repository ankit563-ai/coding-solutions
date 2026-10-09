# Subsets

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer array `nums` of  **unique**  elements, return  *all possible*   *subsets*   *(the power set)*.

The solution set  **must not**  contain duplicate subsets. Return the solution in  **any order**.

 

 **Example 1:** 

```
Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

```

 **Example 2:** 

```
Input: nums = [0]
Output: [[],[0]]

```

 

 **Constraints:** 

- 1 <= nums.length <= 10
- -10 <= nums[i] <= 10
- All the numbers of nums are unique.

## Solution

**Language:** C++  
**Runtime:** 3 ms (beats 28.00%)  
**Memory:** 16.8 MB (beats 5.03%)  
**Submitted:** 2026-10-09T17:15:07.504Z  

```cpp
class Solution {
private:
    void solve(vector<int> nums,vector<int> output,int index,vector<vector<int>>&ans){
        if(index>=nums.size()){
            ans.push_back(output);
            return ;
        }
        solve(nums,output,index+1,ans);
        int element=nums[index];
        output.push_back(element);
        solve(nums,output,index+1,ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int index=0;
        solve(nums,output,index,ans);
        return ans;
        
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/subsets/)