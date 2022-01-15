class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int res=0;
        
        for(int i=0;i<strs[0].size();i++){
            char t=strs[0][i];
            for(int j=0;j<strs.size();j++){
                if(strs[j][i]!=t || strs[j].size()<=res)
                   return strs[0].substr(0,res);
            }
            res++;
        }
        
        return strs[0].substr(0,res);
        
    }
};