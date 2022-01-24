class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int m=matrix.size();
        int n=matrix[0].size();
        vector<vector<bool>> visited(m,vector<bool>(n,false));
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0 && !visited[i][j]){
                    //cout<<"i: "<<i<<" j: "<<j<<endl;
                    for(int k=0;k<m;k++){
                        if(matrix[k][j]!=0){
                            matrix[k][j]=0;
                            visited[k][j]=true;
                        }
                    }
                    for(int k=0;k<n;k++){
                        if(matrix[i][k]!=0){
                            matrix[i][k]=0;
                            visited[i][k]=true;
                        }
                    }
                    // for(auto i : visited){
                    //     for(auto j :i)
                    //         cout<<j<<" ";
                    //     cout<<endl;
                    // }
                    
                }
            }
        }
        
    }
};