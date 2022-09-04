class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<set<char>>row(9),col(9),mat(9);
        for(int i=0;i<9;i++){
            
            for(int j=0;j<9;j++){
                
                char curr = board[i][j];
                
                if(curr=='.') continue;
                
                    if(row[i].count(curr) || col[j].count(curr) || mat[(i/3)*3 + j/3].count(curr)){
                        return false;
                    }
                    row[i].insert(curr);
                    col[j].insert(curr);
                    mat[(i/3)*3 + j/3].insert(curr);
            }
        }
        return true;
    }
};