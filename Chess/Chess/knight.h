#pragma once
#include "Piece.h"
#include <string>
using namespace std;
class knight :
	public Piece
{
public:
	knight();
	knight(bool);
	~knight();
	string getPiece();
};

