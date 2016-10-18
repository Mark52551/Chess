#pragma once
#include "Piece.h"
#include <iostream>
using namespace std;

class bishop :
	public Piece
{
public:
	
	bishop();
	bishop(bool);
	~bishop();
	string getPiece();
};

