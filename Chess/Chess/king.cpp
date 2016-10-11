#include "king.h"


void move()
{
	//this will move the piece
}


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