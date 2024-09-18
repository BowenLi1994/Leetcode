class Solution {
public:
    bool canJump(vector<int>& nums) {
        int gas = 0;
        for (auto n : nums) {
            if (gas < 0)
                return false;
            else if(gas<n){
                gas=n;
            }
            gas--;
        }

        return true;
    }
};