#pragma once
#include "general_librarys.h"
#include <ctime>

class ComputerMove
{
private:
	vector<char> moves = { 'r', 'p', 's' };
public:
	char getComputerMove() {
		int move;
		srand(time(NULL));
		move = rand() % 3;
		return moves[move];
		
	}
};

