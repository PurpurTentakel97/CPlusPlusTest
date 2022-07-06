//
// Purpur Tentakel
// 04.07.2022
//

#pragma once
#include <string>
#include <array>
#include "../hed/Helper.h"

class Mensch {
public:
	Mensch(std::string name, int x, int y, int speed);
	void Move(int xa, int ya);
	std::string ToString() const;

private:
	std::string mName;
	int mX, mY;
	int mSpeed;
};

void MoveAndPrintMenschMultiple(Mensch& mensch, std::array<int,10> xs, std::array<int,10> ys);
void MoveAndPrintMensch(Mensch& mensch, int xa, int ya);