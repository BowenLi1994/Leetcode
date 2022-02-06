class Solution {
public:
    struct node{
        string word;
        int index;
        node(string w,int i){
            word=w;
            index=i;
        }
    };
    
    int numMatchingSubseq(string s, vector<string>& words) {
        
        vector<vector<node*>> dic(26);
        int res=0;
        
        for(auto word: words){
            dic[word[0]-'a'].push_back(new node(word,0));
        }
        
        for(auto c:s){
            vector<node *> old_brack=dic[c-'a'];
            dic[c-'a'].clear();
            
            for(auto n:old_brack){
                n->index++;
                if(n->index>=n->word.size()) res++;
                else{
                    dic[n->word[n->index]-'a'].push_back(n);
                }
            }
        }
        
        
        return res;
    }
};