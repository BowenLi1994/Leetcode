class Solution {
public:
    int reverse(int x) {
        
        long res=0;
        while(x!=0){
            res=res*10+x%10;
            x/=10;
        }
        
        
        return abs(res)>INT_MAX?0:res;

        
        
        
        //         int res=0;
//         while(x!=0){
//             if(abs(res)>INT_MAX/10) return 0;
//             res=res*10+x%10;
//             x/=10;
//         }
        
//         return res;
       
//         if(x>=INT_MAX || x<INT_MIN)
//             return 0;
        
//         long res=0;
//         while(x!=0){
//             int reminder=x%10;
//             x/=10;
//             if(res*10+reminder >=INT_MAX || res*10+reminder<INT_MIN)
//                 return 0;
//             res=res*10+reminder;
//             //cout<<res<<endl;
//         }
        
        
//         return (int)res;
    }
};