class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> rows(9);
        vector<unordered_set<char>> cols(9);
        vector<unordered_set<char>> blocks(9);

        for (int col = 0; col < 9; col++)
        {
            for (char row = 0; row < 9; row++)
            {
                char num = board[row][col];

                if (num == '.') continue;

                int block = (row / 3) * 3 + (col / 3);


                if (rows[row].contains(num) ||
                    cols[col].contains(num) ||
                    blocks[block].contains(num)
                ) return false;

                rows[row].insert(num);
                cols[col].insert(num);
                blocks[block].insert(num);

            }
            
        }
        return true;
    }
};
