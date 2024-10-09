class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        // outer loop
        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            int sum_target = 0 - nums[i];
            int j = i + 1, k = nums.size() - 1;
            while (j < k) {
                if (nums[j] + nums[k] == sum_target) {
                    res.push_back({nums[i],nums[j],nums[k]});
                    j++;

                    while (nums[j] == nums[j - 1] && j < k) {
                        j++;
                    }
                } else if (nums[j] + nums[k] < sum_target) {
                    j++;
                } else {
                    k--;
                }
            }
        }

        return res;
    }
};