class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        int left=0,right=0;
        int n=nums.size();
        deque<int> dq;
        vector<int> res;
        while(right<n){
            
            while(!dq.empty()&&nums[dq.back()]<nums[right])
                dq.pop_back();
            dq.push_back(right);
            if(left>dq.front())
                dq.pop_front();
            if(right>=k-1){
                res.push_back(nums[dq.front()]);
                left++;
            }
            
            right++;
        }
        
        return res;
        
    }
};