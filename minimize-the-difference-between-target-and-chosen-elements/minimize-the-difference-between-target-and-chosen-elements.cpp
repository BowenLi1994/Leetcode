class Solution {
public:
    int minimizeTheDifference(vector<vector<int>>& mat, int target) {
        
        int m=mat.size();
        int n=mat[0].size();
        
        unordered_set<int> cap({0});
        
        for(int i=0;i<m;i++){
            
            int great=-1;
            unordered_set<int> temp;
            
            for(auto x : cap){
                for(auto y: mat[i]){
                    
                    if(x+y<=target)
                        temp.insert(x+y);
                    else{
                        if(great==-1 ||x+y < great)
                            great=x+y;
                    }
                }
            }
            
            if(great !=-1)
                temp.insert(great);
            
            cap=std::move(temp);
            
            
        }
        
        int diff=INT_MAX;
        for(auto x : cap)
            diff=min(diff,abs(x-target));
        
        return diff;
        
    }
};