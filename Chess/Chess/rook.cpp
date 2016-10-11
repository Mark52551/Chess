#include "rook.h"



rook::rook(bool color) : Piece(color)
{

}


rook::~rook()
{
}

string rook::getPiece()
{
	return Piece::getPiece() + "R";
}

rook::rook()
{

}