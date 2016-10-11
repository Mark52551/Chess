#include "bishop.h"

bishop::bishop(bool color) : Piece(color)
{
	
}

bishop::bishop()
{

}

bishop::~bishop()
{

}

string bishop::getPiece()
{
	return Piece::getPiece() + "B";
}