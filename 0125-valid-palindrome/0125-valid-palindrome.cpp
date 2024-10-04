class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, j = s.size() - 1;

        // if (s.size() == 2) {
        //     if (s[0] != s[1])
        //         return false;
        // }

        while (i <= j) {
            // if (isalpha(s[i]) && isalpha(s[j])) {
            //     // cout << s[i] << " " << s[j] << endl;
            //     if (tolower(s[i]) == tolower(s[j])) {
            //         i++;
            //         j--;
            //     } else {
            //         return false;
            //     }

            // } else {
            //     if (!isalpha(s[i]))
            //         i++;
            //     if (!isalpha(s[j]))
            //         j--;
            // }
            if (!isalnum(s[i])) {
                i++;
                continue;
            }
            if (!isalnum(s[j])) {
                j--;
                continue;
            }
            if (tolower(s[i]) != tolower(s[j])) {
               return false;
            }
            else{
                i++;
                j--;
            }
        }

        return true;
    }
};