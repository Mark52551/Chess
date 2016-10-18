#include "pawn.h"








pawn::pawn(bool color) : Piece(color)
{

}

pawn::pawn()
{

}

pawn::~pawn()
{
}

string pawn::getPiece()
{
	return Piece::getPiece() + "P";
}