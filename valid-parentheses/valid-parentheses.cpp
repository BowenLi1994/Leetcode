class Solution {
public:
    bool isValid(string s) {
        
        vector<int> v;
 
        for(auto c :s){
            if(c=='(' || c== '{' || c == '[')
                v.push_back(c);
            if(c==')'||c=='}'||c==']')
                if(v.empty())
                    return false;
            if(c==')'){
                if(v.back()=='(')
                    v.pop_back();
                else
                    return false;
            }
            if(c=='}'){
                if(v.back()=='{')
                    v.pop_back();
                else
                    return false;
            }
            if(c==']'){
                if(v.back()=='[')
                    v.pop_back();
                else
                    return false;
            }
        }
        
        if(v.empty())
            return true;
        
        return false;
        
    }
};