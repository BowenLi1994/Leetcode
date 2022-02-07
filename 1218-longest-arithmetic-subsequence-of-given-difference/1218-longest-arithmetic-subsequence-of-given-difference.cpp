class Solution {
public:
    int longestSubsequence(vector<int>& arr, int difference) {
                int res = 0;
        unordered_map<int, int> dp;
        for (int i : arr) {
            dp[i] = 1 + dp[i - difference];
            res = max(dp[i], res);
        }
        return res;
        
    }
};