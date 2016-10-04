#pragma once
#include <iostream>

using namespace std;

class Board
{
public:
	const int SquareWidth = 4;
	const int SquareHeight = 3;
	void Board::display_board(int board[8][8])
	{
		//Here I will chose how I want to display my board.
		for (int row = 0; row < 8 * SquareHeight; ++row)
		{
			int SquareRow = row / SquareHeight;
			if (row % 3 == 1)
			{
				cout << "-" << (char)('1' + 7 - SquareRow) << "-";
			}
			else
			{
				cout << "---";
			}
		}
		
	}
	void Board::display_piece()
	{
		//this will display the pieces on the board
	}
	/*
	
	*/
	









	Board();

	~Board();
};

