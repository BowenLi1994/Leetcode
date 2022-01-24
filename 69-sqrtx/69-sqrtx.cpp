class Solution {
public:
    int mySqrt(int x) {
        
        int left=0;
        int right=x/2+1;
        
        while(left<=right){
            long long mid=(left+right)/2;
            long long product=mid*mid;
            if(product == x) return mid;
            if(product > x) right=mid-1;
            else left=mid+1;
        }
        
        
        return right;
    }
};