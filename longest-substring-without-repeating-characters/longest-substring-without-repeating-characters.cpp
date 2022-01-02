class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        if(s.empty())
            return 0;
        
        
        map<char,int> m;
        int left=-1;
        int result=0;
        
        for(int i=0;i<s.size();i++){
            
            if(m.count(s[i]) && m[s[i]]>left)
                left=m[s[i]];
            m[s[i]]=i;
            
            result=max(result,i-left);
            
            // cout<<"--------------"<<endl;
            // for(auto  kv: m)
            //     cout<<kv.first<<"--->"<<kv.second<<endl;
            // cout<<"left: "<<left<<endl;
            // cout<<"result: "<<result<<endl;
        }
        
        return result;
        
    }
};