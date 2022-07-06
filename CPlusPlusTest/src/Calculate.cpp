//
// Purpur Tentakel
// 03.07.2022
//

#include "../hed/Helper.h"

void Add(int* result, const int a, const int b) {
	*result = a + b;
}

int Multiply(const int a, const int b) {
	return a * b;
}

void MultiplyAndLog(const int a, const int b) {
	const int result = Multiply(a, b);
	Print(result);
}