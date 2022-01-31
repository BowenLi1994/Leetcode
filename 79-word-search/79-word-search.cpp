class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        
        int m=board.size(), n=board[0].size();
        vector<vector<bool>> visit(m, vector<bool>(n,false));
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(dfs(board,i,j,0,word,visit))
                    return true;
            }
        }
        
        return false;
        
    }
    
    bool dfs(vector<vector<char>>& board,int i, int j, int len, string word,vector<vector<bool>>& visit){
        if(len==word.size())
            return true;
        if(i<0||i>=board.size()||j<0||j>board[0].size()||visit[i][j]||board[i][j]!=word[len])
            return false;
        

        visit[i][j]=true;
        bool res=dfs(board,i+1,j,len+1,word,visit)||dfs(board,i-1,j,len+1,word,visit)||dfs(board,i,j+1,len+1,word,visit)||
                dfs(board,i,j-1,len+1,word,visit);
        visit[i][j]=false;
  
        
        return res;
    }
};