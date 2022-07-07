//
// Purpur Tentakel
// 02.07.2022
// C++ 20
//

#include "../hed/Helper.h"
#include "../hed/Calculate.h"

std::string breakStr = "---------------------------------------------------------------------------";

void Vector() {
	iVector3 iVec3(2, 5, 7);
	Print("iVec3");
	Print(iVec3.ToString());
	Print(iVec3.GetLength());
	Print("iVec3N (dVec3N)");
	dVector3 iVec3N = iVec3.Normalize();
	Print(iVec3N.ToString());
	Print(iVec3N.GetLength());

	Print(breakStr);

	dVector3 dVec3(2.5, 5.9, 7.3);
	Print("dVec3");
	Print(dVec3.ToString());
	Print(dVec3.GetLength());
	Print("dVec3N");
	dVector3 dVec3N = dVec3.Normalize();
	Print(dVec3N.ToString());
	Print(dVec3N.GetLength());


	Print(breakStr);

	iVector2 iVec2(2, 5);
	Print("iVec2");
	Print(iVec2.ToString());
	Print(iVec2.GetLength());
	Print("iVec2N (dVec2N)");
	dVector2 iVec2N = iVec2.Normalize();
	Print(iVec2N.ToString());
	Print(iVec2N.GetLength());

	Print(breakStr);

	dVector2 dVec2(2.5, 5.9);
	Print("dVec2");
	Print(dVec2.ToString());
	Print(dVec2.GetLength());
	Print("dVec2N");
	dVector2 dVec2N = dVec2.Normalize();
	Print(dVec2N.ToString());
	Print(dVec2N.GetLength());
}

void CalculateVector() {
	Print("iVector3");
	iVector3 ivec1_1(1, 2, 3);
	Print(ivec1_1.ToString());
	iVector3 ivec2_1(5, 7, 9);
	Print(ivec2_1.ToString());
	iVector3 ivecr1_1 = ivec1_1 + ivec2_1;
	Print(ivecr1_1.ToString());
	iVector3 ivecr2_1 = ivec1_1 - ivec2_1;
	Print(ivecr2_1.ToString());
	iVector3 ivecr3_1 = ivec1_1 * ivec2_1;
	Print(ivecr3_1.ToString());
	dVector3 ivecr4_1 = ivec1_1 / ivec2_1;
	Print(ivecr4_1.ToString());

	Print(breakStr);

	Print("iVector3 + dVector3");
	iVector3 ivec1_2(1, 2, 3);
	Print(ivec1_2.ToString());
	dVector3 dvec2_2(5.6, 7.3, 9.7);
	Print(dvec2_2.ToString());
	dVector3 dvecr1_2 = ivec1_2 + dvec2_2;
	Print(dvecr1_2.ToString());
	dVector3 dvecr2_2 = ivec1_2 - dvec2_2;
	Print(dvecr2_2.ToString());
	dVector3 dvecr3_2 = ivec1_2 * dvec2_2;
	Print(dvecr3_2.ToString());
	dVector3 dvecr4_2 = ivec1_2 / dvec2_2;
	Print(dvecr4_2.ToString());
}
int main() {
	CalculateVector();
}
