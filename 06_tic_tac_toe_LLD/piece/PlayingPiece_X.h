#include "./PlayingPiece.h"
#include "./Pieces.h"

class PlayingPiece_X : public PlayingPiece {
public:

    // constructor to set Piece
    PlayingPiece_X() : PlayingPiece(Pieces::X) {

    }
};