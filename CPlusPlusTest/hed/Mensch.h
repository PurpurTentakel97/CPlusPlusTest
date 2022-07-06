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
	Mensch(std::string name_, int x_, int y_, int speed_);
	void Move(int xa, int ya);
	std::string ToString() const;

private:
	std::string name;
	int x, y;
	int speed;
};

void MoveAndPrintMenschMultiple(Mensch& mensch, std::array<int,10> xs, std::array<int,10> ys);
void MoveAndPrintMensch(Mensch& mensch, int xa, int ya);