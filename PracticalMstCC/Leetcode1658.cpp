class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int target = 0;
        int n = nums.size();

        for (int num : nums) {
            target += num;
        }

        target -= x;

        if (target == 0) {
            return n;
        }

        int maxLen = 0;
        int curr = 0;
        int l = 0;

        for (int r = 0; r < n; ++r) {
            curr += nums[r];

            while (l <= r && curr > target) {
                curr -= nums[l];
                l++;
            }

            if (curr == target) {
                maxLen = max(maxLen, r - l + 1);
            }
        }

        if (maxLen) {
            return n - maxLen;
        } else {
            return -1;
        }
    }
};