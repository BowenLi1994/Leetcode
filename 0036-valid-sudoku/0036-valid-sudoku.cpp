class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
     set<char> row[9],col[9],square[9];

        for(int r=0;r<9;r++){
            for(int c=0;c<9;c++){
                char t=board[r][c];
                if(t=='.')
                    continue;
                if(row[r].count(t) || col[c].count(t)||square[r/3*3+c/3].count(t)){
                    return false;
                }
                row[r].insert(t);
                col[c].insert(t);
                square[r/3*3+c/3].insert(t);
            }
        }
        return true;
    }
};