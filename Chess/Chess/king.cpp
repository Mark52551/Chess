#include "king.h"





king::king(bool color) : Piece (color)
{
	
}


king::~king()
{
}

string king::getPiece()
{
	return Piece::getPiece() + "K";
}