#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>
#include <map>
class Solution {
public:
    bool isValidSudoku(std::vector<std::vector<char>>& board)
     {
         std::unordered_set<char> rows;
         std::unordered_set<char> cols;
         std::unordered_set<char> square;
         for(int r = 0; r < 9; r++)
         {
            rows.clear();
            for(int c = 0; c < 9; c++)
            {
                if(board[r][c] != '.' && rows.find(board[r][c]) != rows.end())
                {
                    return false;
                }
                rows.insert(board[r][c]);
            }
         }
         for(int c = 0; c < 9; c++)
         {
            cols.clear();
            for(int r = 0; r < 9; r++)
            {
                if(board[r][c] != '.' && cols.find(board[r][c]) != cols.end())
                {
                    return false;
                }
                cols.insert(board[r][c]);
            }
         }


    std::vector<std::unordered_set<char>> check_subbox(9);
    for (int row = 0; row < 9; row++)
    {
        for (int col = 0; col < 9; col++)
        {
            int loc = (row / 3) * 3 + col / 3;
            if (board[row][col] != '.' && check_subbox[loc].find(board[row][col]) != check_subbox[loc].end())
            {
                return false;
            }
            check_subbox[loc].insert(board[row][col]);
        }
    }
    return true;
}
};