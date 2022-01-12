class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int left=-1;
        int res=0;
        
        unordered_map<char,int> m;
        
        for(int i=0;i<s.size();i++){
            if(m.count(s[i]) && m[s[i]] > left){
                left=m[s[i]];
            }
            
            m[s[i]]=i;
            res=max(res,i-left);
        }
        
        
        return res;
    }
};