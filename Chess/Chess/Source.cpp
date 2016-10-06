#pragma once
#include "Game.h"
#include "Piece.h"	
#include "Board.h"
#include <iostream>
using namespace std;

int main()
{
	Game begin;
	begin.welcome();
	begin.display_player_color();

	Board myBoard;
	myBoard.display_board();
	

	



	
	cin.get();

	







	return 0;

}