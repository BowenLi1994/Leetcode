class Solution {

private:
    vector<int> root;
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size(), res=n;
        root.resize(n);
        for(int i=0;i<n;i++) root[i]=i;
        
        for(int i=0;i<n;i++){
             for(int j=i+1;j<n;j++){
                 if(isConnected[i][j]==1){
                     int root1=getRoot(i);
                     int root2=getRoot(j);
                     if(root1!=root2){
                         root[root2]=root1;
                         res--;
                     }
                 }
             }
        }
           
        
        return res;
        
    }
    
    int getRoot(int p){
        while(p!=root[p]){
            root[p]=root[root[p]];
            p=root[p];
        }
        
        return p;
    }
};