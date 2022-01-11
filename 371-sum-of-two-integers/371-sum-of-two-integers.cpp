class Solution {
public:
    int getSum(int a, int b) {
        
        int x=abs(a);
        int y=abs(b);
        
        if(x<y) return getSum(b,a);
        
        int sign=(a>0)?1:-1;
        
        if(a*b>=0){
            while(y!=0){
                int temp=(x&y)<<1;
                x=x^y;
                y=temp;
            }
        }
        else{
             while(y!=0){
                int temp=((~x)&y)<<1;
                x=x^y;
                y=temp;
            }
        }
        
        return sign*x;
    }
};