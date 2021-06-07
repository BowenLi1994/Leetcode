class Solution {
public:
    string convert(string s, int numRows) {
        
        string res;
        if(numRows <=1)
            return s;
        
        vector<string> zz(numRows);
        
        int i=0;
        while(i<s.size()){
            
            
            for(int pos=0;pos<numRows&&i<s.size();pos++){
                zz[pos].push_back(s[i++]);
            }
            
            for(int pos=numRows-2; pos>0&&i<s.size();pos--){
                zz[pos].push_back(s[i++]);
            }
            
        }
        
        for(auto& str: zz){
            res+=str;
        }
        
        return res;
        
    }
};