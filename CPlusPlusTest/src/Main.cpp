//
// Purpur Tentakel
// 02.07.2022
// C++ 20
//

#include "../hed/Helper.h"
#include "../hed/Vector.h"
#include <format>

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

void CalculateVector3() {
	iVector3 ivec1_1(1, 2, 3);
	Print(std::format("iVector3 -> {}", ivec1_1.ToString()));
	iVector3 ivec2_1(5, 7, 9);
	Print(std::format("iVector3 -> {}", ivec2_1.ToString()));
	iVector3 ivecr1_1 = ivec1_1 + ivec2_1;
	Print(std::format("iVector3 + iVector3 -> {}", ivecr1_1.ToString()));
	iVector3 ivecr2_1 = ivec1_1 - ivec2_1;
	Print(std::format("iVector3 - iVector3 -> {}", ivecr2_1.ToString()));
	iVector3 ivecr3_1 = ivec1_1 * ivec2_1;
	Print(std::format("iVector3 * iVector3 -> {}", ivecr3_1.ToString()));
	dVector3 ivecr4_1 = ivec1_1 / ivec2_1;
	Print(std::format("iVector3 / iVector3 -> {}", ivecr4_1.ToString()));

	Print(breakStr);

	iVector3 ivec1_2(1, 2, 3);
	Print(std::format("iVector3 -> {}", ivec1_2.ToString()));
	dVector3 dvec2_2(5.6, 7.3, 9.7);
	Print(std::format("dVector3 -> {}", dvec2_2.ToString()));
	dVector3 dvecr1_2 = ivec1_2 + dvec2_2;
	Print(std::format("iVector3 + dVectro3 -> {}", dvecr1_2.ToString()));
	dVector3 dvecr2_2 = ivec1_2 - dvec2_2;
	Print(std::format("iVector3 - dVector3 -> {}", dvecr2_2.ToString()));
	dVector3 dvecr3_2 = ivec1_2 * dvec2_2;
	Print(std::format("iVector3 * dVector3 -> {}", dvecr3_2.ToString()));
	dVector3 dvecr4_2 = ivec1_2 / dvec2_2;
	Print(std::format("iVector3 / dVector3 -> {}", dvecr4_2.ToString()));

	Print(breakStr);

	dVector3 dvec1_3(1.4, 2.3, 3.5);
	Print(std::format("dVector3 -> {}", dvec1_3.ToString()));
	iVector3 ivec2_3(5, 7, 9);
	Print(std::format("iVector3 -> {}", ivec2_3.ToString()));
	dVector3 dvecr1_3 = dvec1_3 + ivec2_3;
	Print(std::format("dVector3 + iVectro3 -> {}", dvecr1_3.ToString()));
	dVector3 dvecr2_3 = dvec1_3 - ivec2_3;
	Print(std::format("dVector3 - iVector3 -> {}", dvecr2_3.ToString()));
	dVector3 dvecr3_3 = dvec1_3 * ivec2_3;
	Print(std::format("dVector3 * iVector3 -> {}", dvecr3_3.ToString()));
	dVector3 dvecr4_3 = dvec1_3 / ivec2_3;
	Print(std::format("dVector3 / iVector3 -> {}", dvecr4_3.ToString()));

	Print(breakStr);

	dVector3 dvec1_4(1.4, 2.3, 3.5);
	Print(std::format("dVector3 -> {}", dvec1_4.ToString()));
	dVector3 dvec2_4(5.6, 7.3, 9.7);
	Print(std::format("dVector3 -> {}", dvec2_4.ToString()));
	dVector3 dvecr1_4 = dvec1_4 + dvec2_4;
	Print(std::format("dVector3 + dVectro3 -> {}", dvecr1_4.ToString()));
	dVector3 dvecr2_4 = dvec1_4 - dvec2_4;
	Print(std::format("dVector3 - dVector3 -> {}", dvecr2_4.ToString()));
	dVector3 dvecr3_4 = dvec1_4 * dvec2_4;
	Print(std::format("dVector3 * dVector3 -> {}", dvecr3_4.ToString()));
	dVector3 dvecr4_4 = dvec1_4 / dvec2_4;
	Print(std::format("dVector3 / dVector3 -> {}", dvecr4_4.ToString()));

}

void CalculateVector2() {
	iVector2 ivec1_1(1, 2);
	Print(std::format("iVector2 -> {}", ivec1_1.ToString()));
	iVector2 ivec2_1(5, 7);
	Print(std::format("iVector2 -> {}", ivec2_1.ToString()));
	iVector2 ivecr1_1 = ivec1_1 + ivec2_1;
	Print(std::format("iVector2 + iVector2 -> {}", ivecr1_1.ToString()));
	iVector2 ivecr2_1 = ivec1_1 - ivec2_1;
	Print(std::format("iVector2 - iVector2 -> {}", ivecr2_1.ToString()));
	iVector2 ivecr3_1 = ivec1_1 * ivec2_1;
	Print(std::format("iVector2 * iVector2 -> {}", ivecr3_1.ToString()));
	dVector2 ivecr4_1 = ivec1_1 / ivec2_1;
	Print(std::format("iVector2 / iVector2 -> {}", ivecr4_1.ToString()));

	Print(breakStr);

	iVector2 ivec1_2(1, 2);
	Print(std::format("iVector2 -> {}", ivec1_2.ToString()));
	dVector2 dvec2_2(5.6, 7.3);
	Print(std::format("dVector2 -> {}", dvec2_2.ToString()));
	dVector2 dvecr1_2 = ivec1_2 + dvec2_2;
	Print(std::format("iVector2 + dVectro2 -> {}", dvecr1_2.ToString()));
	dVector2 dvecr2_2 = ivec1_2 - dvec2_2;
	Print(std::format("iVector2 - dVector2 -> {}", dvecr2_2.ToString()));
	dVector2 dvecr3_2 = ivec1_2 * dvec2_2;
	Print(std::format("iVector2 * dVector2 -> {}", dvecr3_2.ToString()));
	dVector2 dvecr4_2 = ivec1_2 / dvec2_2;
	Print(std::format("iVector2 / dVector2 -> {}", dvecr4_2.ToString()));

	Print(breakStr);

	dVector2 dvec1_3(1.4, 2.3);
	Print(std::format("dVector2 -> {}", dvec1_3.ToString()));
	iVector2 ivec2_3(5, 7);
	Print(std::format("iVector2 -> {}", ivec2_3.ToString()));
	dVector2 dvecr1_3 = dvec1_3 + ivec2_3;
	Print(std::format("dVector2 + iVectro2 -> {}", dvecr1_3.ToString()));
	dVector2 dvecr2_3 = dvec1_3 - ivec2_3;
	Print(std::format("dVector2 - iVector2 -> {}", dvecr2_3.ToString()));
	dVector2 dvecr3_3 = dvec1_3 * ivec2_3;
	Print(std::format("dVector2 * iVector2 -> {}", dvecr3_3.ToString()));
	dVector2 dvecr4_3 = dvec1_3 / ivec2_3;
	Print(std::format("dVector2 / iVector2 -> {}", dvecr4_3.ToString()));

	Print(breakStr);

	dVector2 dvec1_4(1.4, 2.3);
	Print(std::format("dVector2 -> {}", dvec1_4.ToString()));
	dVector2 dvec2_4(5.6, 7.3);
	Print(std::format("dVector2 -> {}", dvec2_4.ToString()));
	dVector2 dvecr1_4 = dvec1_4 + dvec2_4;
	Print(std::format("dVector2 + dVectro2 -> {}", dvecr1_4.ToString()));
	dVector2 dvecr2_4 = dvec1_4 - dvec2_4;
	Print(std::format("dVector2 - dVector2 -> {}", dvecr2_4.ToString()));
	dVector2 dvecr3_4 = dvec1_4 * dvec2_4;
	Print(std::format("dVector2 * dVector2 -> {}", dvecr3_4.ToString()));
	dVector2 dvecr4_4 = dvec1_4 / dvec2_4;
	Print(std::format("dVector2 / dVector2 -> {}", dvecr4_4.ToString()));

}

void SingleCalculateVector() {
	dVector3 dvec3(3.7, 5.4, 7.9);
	Print(std::format("dVector3 -> {}", dvec3.ToString()));
	dVector3 dvec3_1 = dvec3 * 3;
	Print(std::format("dVector3 * int -> {}", dvec3_1.ToString()));
	dVector3 dvec3_2 = dvec3 * 3.7;
	Print(std::format("dVector3 * double -> {}", dvec3_2.ToString()));
	dVector3 dvec3_3 = dvec3 / 3;
	Print(std::format("dVector3 / int -> {}", dvec3_3.ToString()));
	dVector3 dvec3_4 = dvec3 / 3.7;
	Print(std::format("dVector3 / double -> {}", dvec3_4.ToString()));

	Print(breakStr);

	iVector3 ivec3(3, 5, 7);
	Print(std::format("iVector3 -> {}", ivec3.ToString()));
	iVector3 ivec3_1 = ivec3 * 3;
	Print(std::format("iVector3 * int -> {}", ivec3_1.ToString()));
	dVector3 ivec3_2 = ivec3 * 3.7;
	Print(std::format("iVector3 * double -> {}", ivec3_2.ToString()));
	dVector3 ivec3_3 = ivec3 / 3;
	Print(std::format("iVector3 / int -> {}", ivec3_3.ToString()));
	dVector3 ivec3_4 = ivec3 / 3.7;
	Print(std::format("iVector3 / double -> {}", ivec3_4.ToString()));

	Print(breakStr);

	dVector2 dvec2(3.7, 5.4);
	Print(std::format("dVector2 -> {}", dvec2.ToString()));
	dVector2 dvec2_1 = dvec2 * 3;
	Print(std::format("dVector2 * int -> {}", dvec2_1.ToString()));
	dVector2 dvec2_2 = dvec2 * 3.7;
	Print(std::format("dVector2 * double -> {}", dvec2_2.ToString()));
	dVector2 dvec2_3 = dvec2 / 3;
	Print(std::format("dVector2 / int -> {}", dvec2_3.ToString()));
	dVector2 dvec2_4 = dvec2 / 3.7;
	Print(std::format("dVector2 / double -> {}", dvec2_4.ToString()));

	Print(breakStr);

	iVector2 ivec2(3, 5);
	Print(std::format("iVector2 -> {}", ivec2.ToString()));
	iVector2 ivec2_1 = ivec2 * 3;
	Print(std::format("iVector2 * int -> {}", ivec2_1.ToString()));
	dVector2 ivec2_2 = ivec2 * 3.7;
	Print(std::format("iVector2 * double -> {}", ivec2_2.ToString()));
	dVector2 ivec2_3 = ivec2 / 3;
	Print(std::format("iVector2 / int -> {}", ivec2_3.ToString()));
	dVector2 ivec2_4 = ivec2 / 3.7;
	Print(std::format("iVector2 / double -> {}", ivec2_4.ToString()));
}

int main() {
	CalculateVector2();
	Print(breakStr);
	Print(breakStr);
	CalculateVector3();
	Print(breakStr);
	Print(breakStr);
	SingleCalculateVector();
}
