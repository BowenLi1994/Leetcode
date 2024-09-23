class Solution {
public:
    string intToRoman(int num) {
        string s[] = {"M",  "CM", "D",  "CD", "C",  "XC", "L",
                      "XL", "X",  "IX", "V",  "IV", "I"};
        int n[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        int i = 0;
        string res;
        while (num > 0) {
            // cout<<num<<endl;
            if (num >= n[i]) {
                res += s[i];
                num = num - n[i];
            } else {
                i++;
            }
            // cout<<res<<endl;
        }
        
        return res;
    }
};