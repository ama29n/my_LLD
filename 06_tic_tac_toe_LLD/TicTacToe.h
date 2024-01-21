#include <bits/stdc++.h>

#include "./piece/PlayingPiece_O.h"
#include "./piece/PlayingPiece_X.h"
#include "./board/Board.h"
#include "./player/Player.h"

using namespace std;

class TicTacToe {
private:
    // To add players from front and add them to the end
    deque<Player *> q;
    // Board
    Board *board;

public:

    TicTacToe() {
        initializeGame();
    }

    // method to start the gane
    void initializeGame() {
        // Player 1
        PlayingPiece_O *noughtPiece = new PlayingPiece_O();
        Player *player_1 = new Player("Player_1", noughtPiece);
        // Player 2
        PlayingPiece_X *crossPiece = new PlayingPiece_X();
        Player *player_2 = new Player("Player_2", crossPiece);

        q.push_back(player_1);
        q.push_back(player_2);

        board = new Board(3);
    }

    // method to start the game
    void startGame() {
        bool noWinner = true;

        while(noWinner) {
            Player *playerTurn = q.front();
            q.pop_front();

            board->printBoard();

            // get free space from board
            vector<pair<int, int>> freeCells = board->getFreeCells();

            if(freeCells.size() == 0) {
                cout << "No Winner: match draw :(" << endl;
                noWinner = false;
                continue;
            }

            // Take row and col from the user
            cout << "Player: " << playerTurn->getName() << "'s turn. Enter row and column: ";

            while(true) {
                int row, col;
                cin >> row >> col;
                bool piecePlaced = board->addPiece(row, col, playerTurn->getPiece()->getPieceType());
                if(piecePlaced == false) {
                    cout << "Cell is already filled or is Invalid. Enter row and column: ";
                    continue;
                } else {
                    break;
                }
            }

            bool winnerFound = board->checkWinner(playerTurn->getPiece()->getPieceType());

            if(winnerFound) {
                cout << endl;
                board->printBoard();
                cout << playerTurn->getName() << " is the winner" << endl;
                noWinner = false;
                continue;
            }

            q.push_back(playerTurn);
        }
    }
};