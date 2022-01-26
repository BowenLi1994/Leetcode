class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int res=0;
        int left=0,right=height.size()-1;
        
        while(left<right){
            res=max(res,(min(height[left],height[right])*(right-left)));
            //cout<<"res: "<<res<<endl;
            
            if(height[left]<height[right])
                left++;
            else
                right--;
            // if(height[left]<=height[right]){
            //     while(height[left]<=height[right]){
            //         left++;
            //     }
            //     cout<<"left: "<<left<<endl;
            // }
            // else{
            //     while(height[left]>height[right]){
            //         right--;
            //     }
            //      cout<<"right: "<<right<<endl;
            // }
        }
        
        return res;
        
    }
};