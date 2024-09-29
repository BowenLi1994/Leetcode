class Solution {
public:
    string reverseWords(string s) {

        string t = "";
        stack<string> word_stack;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                if (t != "") {
                    // cout << i << " " << t << endl;
                    word_stack.push(t);
                    t = "";
                }
            } else {
                t += s[i];
            }
        }

        if (t != "")
            word_stack.push(t);

        string res;
        while (!word_stack.empty()) {
            // cout<<word_stack.top()<<endl;
            res += word_stack.top() + " ";
            word_stack.pop();
        }

        res.pop_back();

        return res;
    }
};