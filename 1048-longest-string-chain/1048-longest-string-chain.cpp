class Solution {
public:
    
    struct cmp{
      bool operator()(const string& s1, const string& s2){
          return s1.size()<s2.size();
      }  
    };
    
    int longestStrChain(vector<string>& words) {
        
        int res=1;
        sort(words.begin(),words.end(),cmp());
        
        int n=words.size();
        vector<int> dp(n,1);
        
        for(int i=1;i<n;i++){
            for(int j=i-1;j>=0;j--){
                if(words[j].size()==words[i].size()) continue;
                if(words[j].size()+1<words[i].size()) break;
                
                if(pre(words[i],words[j])){
                    dp[i]=max(dp[i],dp[j]+1);
                    res=max(res,dp[i]);
                }
                
            }
        }
        
        
        return res;
    }
    
    bool pre(string l,string s){
        int i=0,m=l.size(),n=s.size();
        for(int j=0;j<m;j++)
            if(l[j]==s[i]) i++;
        
        return i==n;
    }
};