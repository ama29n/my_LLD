#include <bits/stdc++.h>

#include "../piece/Pieces.h"

using namespace std;

class Board {
private:
    int size;
    vector<vector<Pieces>> board;
public:

    // constructor
    Board(int _size) {
        size = _size;
        board.resize(size, vector<Pieces> (size, Pieces::Default));
    }

    // method to add piece to board
    bool addPiece(int row, int col, Pieces piece) {
        // check if the row and col doesn't exceed size
        if(row < 0 || row == size || col < 0 || col == size) {
            return false;
        }
        // if the cell is already filled
        if(board[row][col] != Pieces::Default) {
            return false;
        }
        // else, add piece to the board
        board[row][col] = piece;
        return true;
    }

    // method to get free cells in board
    vector<pair<int, int>> getFreeCells() {
        vector<pair<int, int>> freeCells;
        for(int i = 0; i < size; i++) {
            for(int j = 0; j < size; j++) {
                if(board[i][j] == Pieces::Default) {
                    freeCells.push_back({ i, j });
                }
            }
        }
        return freeCells;
    }

    // method to print the board
    void printBoard() {
        for(int i = 0; i < size; i++) {
            for(int j = 0; j < size; j++) {
                if(board[i][j] == Pieces::Default) {
                    cout << "   |";
                } else if(board[i][j] == Pieces::O) {
                    cout << " O |";
                } else {
                    cout << " X |";
                }
            }
            cout << endl;
        }
    }

    // method to check winner
    bool checkWinner(Pieces piece) {
        // checking across rows
        for(int i = 0; i < size; i++) {
            bool flag = true;
            for(int j = 0; j < size; j++) {
                if(board[i][j] != piece) {
                    flag = false;
                    break;
                }
            }
            if(flag) {
                return true;
            }
        }

        // checking across columns
        for(int i = 0; i < size; i++) {
            bool flag = true;
            for(int j = 0; j < size; j++) {
                if(board[j][i] != piece) {
                    flag = false;
                    break;
                }
            }
            if(flag) {
                return true;
            }
        }

        return false;
    }
};
