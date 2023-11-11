#pragma once
#include "general_librarys.h"
class UserMove {
private:

public:
	char doMove() {
		cout << "Choose between [r , p, s]";
		char move;
		try {
			while (1) {

				cin >> move;
				if (move == 'r' || move == 'p' || move == 's') {
					return move;
				}
				else {
					cout << "Please be sure you entered one of the following [r , p, s]";
				}
			}
		}
		catch (...) {
			cout << "Something went wrong!!\n Please relaunch the program.";
		}

	}
};