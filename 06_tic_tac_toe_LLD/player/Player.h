#include <bits/stdc++.h>

#include "../piece/PlayingPiece.h"

class Player {
private:
    string name;
    PlayingPiece *piece;
public:

    // constructor
    Player(string _name, PlayingPiece *_piece) {
        name = _name;
        piece = _piece;
    }

    // method to get name
    string getName() {
        return name;
    }

    // method to change name 
    void setName(string _name) {
        name = _name;
    }

    // method to get piece 
    PlayingPiece* getPiece() {
        return piece;
    }

    // method to change piece
    void setPiece(PlayingPiece *_piece) {
        piece = _piece;
    }
};