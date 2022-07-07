//
// Purpur Tentakel
// 03.07.2022
//

#include "../hed/Helper.h"

void Sizes() {
	Print("bool", sizeof(bool));
	Print("char", sizeof(char));
	Print("short", sizeof(short));
	Print("int", sizeof(int));
	Print("long", sizeof(long));
	Print("long long", sizeof(long long));
	Print("long int", sizeof(long int));
	Print("float", sizeof(float));
	//Print("long float", sizeof(long float));
	Print("double", sizeof(double));
	Print("long double", sizeof(long double));
}