#pragma once

class Hall {

	int num;
	int lines;
	int rows;
	bool seats[100][100];

public:
	Hall(){}

	Hall(int x, int y, int z) {

		num = x;
		lines = y;
		rows = z;
		for (int i = 0; i < lines; i++) {
			for (int k = 0; k < rows; k++) {
				seats[i][k] = true;
			}
		}
	}
	void reserveSeat(int, int);
	void checkFree();
	void unbook(int, int);
	void showNumber();
	size_t getNum();

};