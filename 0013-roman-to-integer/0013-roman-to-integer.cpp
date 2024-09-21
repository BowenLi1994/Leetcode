class Solution {
public:
    int romanToInt(string s) {

        map<char, int> alphabet;
        alphabet['I'] = 1;
        alphabet['V'] = 5;
        alphabet['X'] = 10;
        alphabet['L'] = 50;
        alphabet['C'] = 100;
        alphabet['D'] = 500;
        alphabet['M'] = 1000;

        // map<string, int> special;
        // special["IV"] = 4;
        // special["IX"] = 9;
        // special["XL"] = 40;
        // special["XC"] = 90;
        // special["CD"] = 400;
        // special["CM"] = 900;

        int res = 0;
        int i;
        for (i = 0; i < s.size() - 1; i++) {
            if (s[i] == 'I') {
                if (s[i + 1] == 'V') {
                    res += 4;
                    i++;
                } else if (s[i + 1] == 'X') {
                    res += 9;
                    i++;
                } else {
                    res += 1;
                }
            } else if (s[i] == 'X') {
                if (s[i + 1] == 'L') {
                    res += 40;
                    i++;
                } else if (s[i + 1] == 'C') {
                    res += 90;
                    i++;
                } else {
                    res += 10;
                }
            } else if (s[i] == 'C') {
                if (s[i + 1] == 'D') {
                    res += 400;
                    i++;
                } else if (s[i + 1] == 'M') {
                    res += 900;
                    i++;
                } else {
                    res += 100;
                }
            } else {
                res += alphabet[s[i]];
            }

            // cout<<s[i]<<" "<<res<<endl;
        }

        if (i < s.size()) {
            res += alphabet[s[i]];
        }

        return res;
    }
};