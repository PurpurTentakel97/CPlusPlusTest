//
// Purpur Tentakel
// 02.07.2022
// C++ 20
//

#include "../hed/Helper.h"
#include "../hed/Mensch.h"
#include <array>


int main() {
	const std::array<int, 10> xs = { 1,2,3,4,5,6,7,8,9,10 };
	const std::array<int, 10> ys = { 10,9,8,7,6,5,4,3,2,1 };

	Mensch coder("coder", 0, 0, 2);
	Print(coder.ToString());
	MoveAndPrintMenschMultiple(coder, xs, ys);
}
