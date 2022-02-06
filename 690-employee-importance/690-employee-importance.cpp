/*
// Definition for Employee.
class Employee {
public:
    int id;
    int importance;
    vector<int> subordinates;
};
*/

class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        
        int imp[2001];
        vector<vector<int>> relation(2001);
        
        for(auto em : employees){
            imp[em->id]=em->importance;
            relation[em->id]=em->subordinates;
        }
        
        int res=0;
        queue<int> q;
        q.push(id);
        
        while(!q.empty()){
            for(auto sub : relation[q.front()])
                q.push(sub);
            res+=imp[q.front()];
            q.pop();
        }
        
        
        return res;
        
    }
};