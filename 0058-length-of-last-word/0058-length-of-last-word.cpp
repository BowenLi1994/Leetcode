class Solution {
public:
    int lengthOfLastWord(string s) {
        int l = 0;
        int i;
        for (i = s.size() - 1; i >= 0; i--) {
            if (s[i] != ' ')
                break;
        }
        while (i >= 0 && s[i] != ' ') {
            l++;
            i--;
        }

        return l;
    }
};