class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, vector<string>& supplies) {
        
        unordered_set<string> s(supplies.begin(),supplies.end());
        unordered_map<string,int> m;
        vector<string> res;
        for(auto r:recipes){
            m[r]=0;
        }
        
        unordered_map<string,vector<string>> graph;
        int n=recipes.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<ingredients[i].size();j++){
                if(!s.count(ingredients[i][j])){
                    graph[ingredients[i][j]].push_back(recipes[i]);
                    m[recipes[i]]++;
                }
            }
        }
        
        queue<string> q;
        
        for(auto rec : recipes){
            if(m[rec]==0)
                q.push(rec);
        }
        
        while(!q.empty()){
            string tmp=q.front();
            q.pop();
            res.push_back(tmp);
            for(auto n: graph[tmp]){
                m[n]--;
                if(m[n]==0)
                    q.push(n);
            }
        }
        
        return res;
        
    }
};