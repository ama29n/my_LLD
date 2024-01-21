#include "./Pieces.h"

#ifndef PLAYINGPIECE_H_
#define PLAYINGPIECE_H_

class PlayingPiece {
private:
    Pieces pieceType;
public:

    PlayingPiece() {

    }

    // constructor injection
    PlayingPiece(Pieces _pieceType) {
        pieceType = _pieceType;
    }

    // method to get pice 
    Pieces getPieceType() {
        return pieceType;
    }
};

#endif