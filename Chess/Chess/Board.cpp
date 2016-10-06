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
	//function to display all of the pieces on the board
}
Board::Board()
{
	
}


Board::~Board()
{
}
