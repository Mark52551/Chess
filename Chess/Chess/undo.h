#pragma once
#include "storedMove.h"

class undo
{

public:

	void push(int col,int row,int srcCol, int srcRow, Piece* pieceMoved, Piece* capturedPiece);
	bool pop(storedMove&);



	undo();
	~undo();

private:
	storedMove* top;




};

