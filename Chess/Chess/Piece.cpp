#include "Piece.h"
#include <iostream>
using namespace std;


string Piece::getPiece()
{
	if (isWhite)
		return "W";
	else
		return "B";
}

bool Piece::getColor()
{
	return isWhite;
}
Piece::Piece() {

}

Piece::Piece(bool color)
{
	isWhite = color;
}


Piece::~Piece()
{

}
