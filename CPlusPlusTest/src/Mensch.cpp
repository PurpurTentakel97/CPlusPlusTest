//
// Purpur Tentakel
// 04.07.2022
//

#include <string>
#include <array>
#include <format>
#include "../hed/Mensch.h"
#include "../hed/Helper.h"

Mensch::Mensch(std::string name,const int x, const int y, const int speed) 
	: mName(name), mX(x), mY(y), mSpeed(speed) {}

void Mensch::Move(const int xa ,const int ya) {
	mX += xa * mSpeed;
	mY += ya * mSpeed;
}
std::string Mensch::ToString() const {
	std::string toReturn = std::format("name: {} / x: {} / y: {} / speed: {}", mName, mX, mY, mSpeed);
	return toReturn;
}


void MoveAndPrintMenschMultiple(Mensch& mensch, const std::array<int,10> xs, const std::array<int,10> ys) {
	if (xs.size() != ys.size()) {
		Print("Length of Xas != Length if Yas");
		return;
	}

	for (int i = 0; i < xs.size(); ++i) {
		MoveAndPrintMensch(mensch, xs[i], ys[i]);
	}
}
void MoveAndPrintMensch(Mensch& mensch, const int xa, const int ya) {
	Print("move", xa, ya);
	mensch.Move(xa, ya);
	Print(mensch.ToString());
}
