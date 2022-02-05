class Solution {
public:
    string decodeString(string s) {
        
        string res;
        stack<string> st;
        for(auto c :s){
            if(c!=']'){
                string t(1,c);
                st.push(t);
            }
            else{
                string substr;
                while(st.top()!="["){                    
                    // string t;
                    // t.push_back(st.top());
                    substr=st.top()+substr;                 
                    st.pop();
                }
                st.pop();
                string rep;
                while(!st.empty()&&st.top()>="0"&&st.top()<="9"){
                    rep=st.top()+rep;                 
                    st.pop();
                }
                
                
               string t=substr;
                for(int i=0;i<stoi(rep)-1;i++)
                    t+=substr;
               st.push(t);
                    
            }
        }
        
        while(!st.empty()){
            res=st.top()+res;
            st.pop();
        }
        return res;
        
    }
};