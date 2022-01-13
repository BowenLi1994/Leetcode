class Solution {
public:
    string longestPalindrome(string s) {
        
        int start=0;
        int len=1;
        
        int n=s.size();
        
        bool dp[n][n];
        
        for(int i=0;i<n;i++){
            dp[i][i]=true;
            for(int j=0;j<i;j++){
                dp[j][i]= ((s[i]==s[j]) && (i-j<2 || dp[j+1][i-1]));
                //cout<<i<<"-->"<<j<<": "<<dp[i][j]<<endl;
                if(dp[j][i] && i-j+1> len){
                    start=j;
                    len=i-j+1;
                }
            }
        }
        
        return s.substr(start,len);
        
    }
};