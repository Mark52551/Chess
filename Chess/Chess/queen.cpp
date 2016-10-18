#include "queen.h"


queen::queen(bool color) : Piece(color)
{
	
}


queen::~queen()
{
}

string queen::getPiece()
{
	return Piece::getPiece() + "Q";
}
queen::queen()
{

}