class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        
        int m=board.size();
        int n=board[0].size();
        
        vector<vector<int>> dirc={{-1,-1},{-1,0},{1,-1},{0,-1},{0,1},{-1,1},{1,0},{1,1}};
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                
                //original is dead
                if(board[i][j]==0){
                    int live=0;
                    for(auto dir: dirc){
                        if(i+dir[0]>=0 && i+dir[0]<m && j+dir[1]>=0 && j+dir[1]<n){
                            if(board[i+dir[0]][j+dir[1]]==1 || board[i+dir[0]][j+dir[1]]==2)
                                live++;
                        }
                    }
                    
                    if(live==3)
                       board[i][j]=3;
                    else
                        board[i][j]=0;
                    
                }
                //original is live
                else{
                    int live=0;
                    for(auto dir: dirc){
                        if(i+dir[0]>=0 && i+dir[0]<m && j+dir[1]>=0 && j+dir[1]<n){
                            if(board[i+dir[0]][j+dir[1]]==1 || board[i+dir[0]][j+dir[1]]==2)
                                live++;
                        }
                    }
                    
                    //if(i==2 && j==1) cout<<live<<endl;
                    if(live==2 || live==3)
                        board[i][j]=1;
                    else
                        board[i][j]=2;
                }
                
            }
        }
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
               //cout<<board[i][j]<<" ";
               board[i][j]=board[i][j]%2;
                //cout<<board[i][j]<<" ";
            }
            //cout<<endl;
        }
        
    }
};