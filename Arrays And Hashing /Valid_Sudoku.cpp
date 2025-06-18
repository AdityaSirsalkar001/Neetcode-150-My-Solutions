class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
       map<int , unordered_set<int>> rows , cols;
       map<pair<int , int> , unordered_set<int>> squares;

       for(int r = 0; r < 9; r++){
            for(int c = 0; c < 9; c++){
                
                if(board[r][c] == '.') continue;

                else if(rows[r].count(board[r][c]) ||
                        cols[c].count(board[r][c]) ||
                        squares[{r/3 , c/3}].count(board[r][c])){
                            return false;
                        }

                else {
                    rows[r].insert(board[r][c]);
                    cols[c].insert(board[r][c]);
                    squares[{r/3 , c/3}].insert(board[r][c]);
                }
            }
       } 

       return true;
    }
};
