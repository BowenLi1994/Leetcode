class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int res=0;
        int window_left=-1;
        unordered_map<char,int> m;
        
        for(int i=0; i< s.size();i++){
            if(m.count(s[i])&&m[s[i]]>window_left){
                window_left=m[s[i]];
            }
            m[s[i]]=i;
            res=max(res,i-window_left);
        }
        
                    
        return res;
    }
};


//n^2
// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
        
//         int res=0;
        
//         if(s.empty())
//             return 0;
//         if(s.size()==1)
//             return 1; 
    
       
        
//        for(size_t i=0;i<s.size()-1;i++){
//            int max_sub=1;
//            vector<bool> checked(256,false);
//            checked[s[i]]=true;
//            for(size_t j=i+1;j<s.size();j++){
//                if(!checked[s[j]]){
//                    max_sub++;
//                    checked[s[j]]=true;
//                }
//                else
//                    break;
//            }
           
//            res=max(res,max_sub);
           
//        }
        
        
        
//         return res;
        
//     }
// };