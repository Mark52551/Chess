#include "knight.h"



knight::knight(bool color) : Piece(color)
{
	
}

knight::knight()
{

}

knight::~knight()
{
}

string knight::getPiece()
{
	return Piece::getPiece() + "N";
}