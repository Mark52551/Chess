#include "Board.h"

void Board::display_board()
{
	//Here I will chose how I want to display my board.
	for (int row = 0; row < board_size; ++row)
	{
		for (int col = 0; col < board_size; col++)
		{
			cout << "-------";
		}
		cout << "-" << endl;
		for (int col = 0; col < board_size; col++)
		{
			cout << "|" << "      ";
		}
		cout << "|" << endl;
		for (int col = 0; col < board_size; col++)
		{
			cout << "|" << "      ";
		}
		cout << "|" << endl;
		for (int col = 0; col < board_size; col++)
		{
			cout << "|" << "      ";
		}
		cout << "|" << endl;
	}
	for (int col = 0; col < board_size; col++)
	{
		cout << "-------";
	}
	cout << "-" << endl;
	
}

void Board::display_piece()
{
	//display pieces
}
Board::Board()
{
	//this is for the top section which is the white pieces on top
	board[0][0] = new rook(true);
	board[1][0] = new knight(true);
	board[2][0] = new bishop(true);
	board[3][0] = new queen(true);
	board[4][0] = new king(true);
	board[5][0] = new bishop(true);
	board[6][0] = new knight(true);
	board[7][0] = new rook(true);
	//Check to see if board set up is right 
	board[1][0] = new pawn(true);
	board[1][1] = new pawn(true);
	board[1][2] = new pawn(true);
	board[1][3] = new pawn(true);
	board[1][4] = new pawn(true);
	board[1][5] = new pawn(true);
	board[1][6] = new pawn(true);
	board[1][7] = new pawn(true);
	//boards from [2][x]
	//boards from [3][x]
	//boards from [4][x]
	//boards from [5][x]



	//continue this for the whole top row

	//every other row set to null pointer

	//continue for bottom row
}


Board::~Board()
{
}
