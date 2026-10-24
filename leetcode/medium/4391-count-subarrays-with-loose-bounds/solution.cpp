class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long a=0;
        long long l=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int x=nums[i];
            if(x>=minK&&x<=maxK){
                l++;
                a+=l;
            }
            else{
                l=0;
            }
        }
        return a;
    }
};