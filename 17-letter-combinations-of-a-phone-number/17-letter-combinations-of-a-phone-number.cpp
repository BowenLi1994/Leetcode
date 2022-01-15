class Solution {
public:
    vector<string> letterCombinations(string digits) {
        
        
        vector<string> dict={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> res;
        
        if(digits=="")
            return res;
        
        dfs(digits,dict,0,"",res);
        
        return res;
    }
    
    void dfs(string& digits,vector<string>&dict, int level, string out,vector<string>&res){
        if(level==digits.size()) {res.push_back(out); return;}
        string str=dict[digits[level]-'0'];
        for(auto i: str)
            dfs(digits,dict,level+1,out+i,res);
    }
};