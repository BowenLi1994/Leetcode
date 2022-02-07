class Solution {
public:
    bool equationsPossible(vector<string>& equations) {
        
        for(auto eq:equations){
            if(eq[1]=='='){
                graph[eq[0]].insert(eq[3]);
                graph[eq[3]].insert(eq[0]);
            }
        }
        
        for(auto eq:equations){
            if(eq[1]=='!'){
                unordered_set<char> visited;
                if(connect(eq[0],eq[3],visited))
                    return false;
            }
        }
    
        return true;
        
    }
    
    bool connect(char source,char target,unordered_set<char>& visited){
        if(source==target) return true;
        if(visited.count(source)) return false;
        
        visited.insert(source);
        
        for(auto child:graph[source]){
            if(connect(child,target,visited))
                return true;
        }
        
        return false;
    }
    
private:
    unordered_map<char,unordered_set<char>> graph;
};