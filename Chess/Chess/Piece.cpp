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

Piece::Piece() {

}

Piece::Piece(bool color)
{
	isWhite = color;
}


Piece::~Piece()
{

}
