class Solution {
public:
    int reverse(int x) {
       
        if(x>=INT_MAX || x<INT_MIN)
            return 0;
        
        long res=0;
        while(x!=0){
            int reminder=x%10;
            x/=10;
            if(res*10+reminder >=INT_MAX || res*10+reminder<INT_MIN)
                return 0;
            res=res*10+reminder;
            cout<<res<<endl;
        }
        
        
        return (int)res;
    }
};