#pragma once
#include "Piece.h"

using namespace std;

class king :
	public Piece
{
public:
	void move();
	king(bool);
	~king();
	string getPiece();
};

