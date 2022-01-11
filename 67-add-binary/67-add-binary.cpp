class Solution {
    
public:
    string addBinary(string a, string b) {
        
        string res;
        int m=a.size()-1, n=b.size()-1, carry=0;
        
        while(m>=0 || n>=0){
            int x=m>=0?a[m--]-'0':0;
            int y=n>=0?b[n--]-'0':0;
            
            int sum=x+y+carry;
            carry=sum/2;
            sum=sum%2;
            
            res=to_string(sum)+res;
        }
        
        if(carry!=0){
            res=to_string(carry)+res;
        }
        
        return res;
    }
};