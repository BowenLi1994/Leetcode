class Solution {
public:
    string longestPalindrome(string s) {
        
       
        int len=1, left=0, n=s.size();
        bool dp[n][n];
        for(int i=0;i<n;i++){
            dp[i][i]=true;
            
            for(int j=0; j<i;j++){
                
                dp[j][i]=((s[i]==s[j])&&(i-j<2 || dp[j+1][i-1]));
                
                if(dp[j][i] && i-j+1 > len){
                    
                    left=j;
                    len=i-j+1;
                    
                }
            }
        }
        
        return s.substr(left,len);
        
    }
};