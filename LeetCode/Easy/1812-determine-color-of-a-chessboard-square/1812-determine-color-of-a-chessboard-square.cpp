class Solution {
public:
    bool squareIsWhite(string coordinates) {
        char board[8][8];
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                if ((i + j) % 2 == 0)
                    board[i][j] = 'B';   
                else
                    board[i][j] = 'W';   
            }
        }
        int row = coordinates[1] - '1';
        int col = coordinates[0] - 'a';
        return board[row][col] == 'W';
    }
};