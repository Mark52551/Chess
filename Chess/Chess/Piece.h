#pragma once
#include <iostream>
#include <string>
using namespace std;


class Piece
{
protected:
	bool isWhite;

public:
	//the functions that will be used to get the piece and move
	//this will get the piece 
	virtual string getPiece();
	//virtual string Piece::move();
	bool getColor();
	
	Piece();
	Piece(bool);
	~Piece();
};


//if (Piece = rook)
//{
	//code here for move
//}