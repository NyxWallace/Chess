#include "Piece.h"

class Rook : public Piece
{
    public:
        Rook();
        void moveTo(char column, int row);
};