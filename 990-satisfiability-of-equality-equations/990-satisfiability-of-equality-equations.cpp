class Solution {
public:
    bool equationsPossible(vector<string>& equations) {
        for(int i=0;i<26;i++)
            root[i]=i;
        
        for(auto eq : equations){
            if(eq[1]=='='){
                root[find(eq[0]-'a')]=find(eq[3]-'a');
            }
        }
        for(auto eq : equations){
            if(eq[1]=='!'){
               if(find(eq[0]-'a')==find(eq[3]-'a')) return false;
            }
        }
        
        return true;
    }
    
    int find(int x){
        
        return root[x]==x?x:find(root[x]);
    }
    
private:
    int root[26];
};