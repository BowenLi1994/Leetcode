class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int res=INT_MIN;

        int l=0;
        set<char> alpha_set;
        for(int r=0;r<s.size();r++){
            if(!alpha_set.count(s[r])){
                alpha_set.insert(s[r]);
                res=max(res,(int)alpha_set.size());
            }
            else{
                while(alpha_set.count(s[r])&&l<r){
                    alpha_set.erase(s[l]);
                    l++;
                }
                alpha_set.insert(s[r]);
            }
        }

        return res==INT_MIN?0:res;
    }
};