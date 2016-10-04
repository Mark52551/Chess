#pragma once
#include <iostream>

using namespace std;

const int board_size = 8;

class Board
{
public:
	const int SquareWidth = 4;
	const int SquareHeight = 3;
	void display_board();
	void display_piece();
	
	Board();

	~Board();
	

private:
	int board[board_size][board_size];







	
};

