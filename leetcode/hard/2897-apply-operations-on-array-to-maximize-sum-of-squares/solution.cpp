
class Solution {
public:
    int maxSum(vector<int>& nums, int k) {
        long long MOD = 1e9 + 7;
        long long ans = 0;
        int n = nums.size();

        vector<int> bits(32, 0);

        // Count set bits at each position
        for (int i = 0; i < n; i++) {
            for (int b = 0; b < 32; b++) {
                if (nums[i] & (1LL << b)) {
                    bits[b]++;
                }
            }
        }

        // Build the largest possible numbers greedily
        for (int i = 0; i < k; i++) {
            long long num = 0;

            for (int b = 0; b < 32; b++) {
                if (bits[b] > 0) {
                    num |= (1LL << b);
                    bits[b]--;
                }
            }

            ans = (ans + num * num) % MOD;
        }

        return ans;
    }
};
