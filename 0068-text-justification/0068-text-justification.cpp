class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> res;
        vector<string> line;
        int length = 0;
        int i = 0;
        while (i < words.size()) {
            // line is full
            if (length + line.size() + words[i].size() > maxWidth) {
                // cout<<"line is full"<<endl;
                // for(auto w: line){
                //     cout<<w<<" ";
                // }
                // cout<<endl;
                // cout<<"length: "<<length<<endl;
                int extra_space = maxWidth - length;
                // cout<<"extra space: "<<extra_space<<endl;
                int spacing = extra_space / max(int(line.size()-1),1);
                // cout<<"spacing: "<<spacing<<endl;
                int reminder = extra_space % max(int(line.size()-1),1);
                // cout<<"reminder: "<<reminder<<endl;
                if(line.size()==1){
                    string n(spacing, ' ');
                    line[0]+=n;
                }
                for (int i = 1; i < line.size(); i++) {
                    string n(spacing, ' ');
                    line[i] = n + line[i];
                    if (reminder > 0) {
                        line[i] = " "+line[i];
                        reminder--;
                    }
                }
                res.push_back(join(line, ""));
                // cout << res.back() << endl;
                line.clear();
                length = 0;
            }

            // line is not full;
            line.push_back(words[i]);
            length += words[i].size();
            i++;
        }

        // last line
        string last_line = join(line, " ");
        // cout<<last_line<<endl;
        int trail_spacing = maxWidth - last_line.size();
        // cout<<"trail_spacing: "<<trail_spacing<<endl;
        string n = string(trail_spacing, ' ');
        // cout<<last_line+n<<endl;
        res.push_back(last_line + n);

        return res;
    }

    std::string join(const std::vector<std::string>& vec,
                     const std::string& delimiter) {
        std::ostringstream result;
        for (size_t i = 0; i < vec.size(); ++i) {
            result << vec[i];
            if (i != vec.size() - 1) {
                result << delimiter; // Add delimiter between elements, but not
                                     // after the last one
            }
        }
        return result.str();
    }
};