class Piece
{
public:
    char getSymbol();
    virtual void moveTo(char, int) = 0;

protected:
    char symbol;
};