#pragma once
#include <iostream>
#include <string>
using namespace std;


class Piece
{

public:
	//the functions that will be used to get the piece and move
	//this will get the piece 
	virtual string Piece::getPiece();
	
	Piece();
	~Piece();
};

