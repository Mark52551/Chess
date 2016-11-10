#include "undo.h"


void undo::push(int srcCol, int srcRow, int col, int row, Piece* pieceMoved, Piece* capturedPiece)
{

	storedMove* move = new storedMove;
	move->nextMove = nullptr;
	move->prevMove = nullptr;
	move->srcCol = srcCol;
	move->srcRow = srcRow;
	move->col = col;
	move->row = row;
	move->pieceMoved = pieceMoved;
	move->capturedPiece = capturedPiece;
	//storedMove* temp = nullptr;
	
	if (top != nullptr)
	{
		top->nextMove = move;
		move->prevMove = top;
	}

	top = move;

}

bool undo::pop(storedMove& lastmove)
{
	if (top == nullptr)
	{
		return false;
	}

	lastmove = *top;
	storedMove* temp = nullptr;
	if (top->prevMove != nullptr)
	{
		temp = top->prevMove;
		temp->nextMove = nullptr;
	}
	delete top;
	top = temp;

	return true;


}

undo::undo()
{
	top = nullptr;
}


undo::~undo()
{
	storedMove move;

	while (top != nullptr)
	{
		pop(move);
	}
}
