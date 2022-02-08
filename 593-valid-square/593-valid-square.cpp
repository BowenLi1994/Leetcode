class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        
         unordered_map<int,int> m;
         vector<vector<int>> v{p1, p2, p3, p4};
        
        for(int i=0;i<3;i++){
            for(int j=i+1;j<4;j++){
                int dis=distance(v[i],v[j]);
                if(dis==0) return false;
                m[dis]++;
            }
        }
        
        return m.size()==2;
        
        
    }
    
    int distance(vector<int>& p1,vector<int>& p2){
        return (p1[0]-p2[0])*(p1[0]-p2[0])+(p1[1]-p2[1])*(p1[1]-p2[1]);
    }
};