class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string comPre = "";
        sort(strs.begin(), strs.end());
        string first = strs[0], last = strs[strs.size() - 1];
        for (int i = 0; i < min(first.size(), last.size()); i++) {
            if (first[i] != last[i])
                break;
            comPre+=first[i];
        }

        return comPre;
    }
};