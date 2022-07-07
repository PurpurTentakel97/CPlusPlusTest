//
// Purpur Tentakel
// 02.07.2022
// C++ 20
//

#include "../hed/Helper.h"
#include "../hed/Calculate.h"


void Vector() {
	std::string breakStr = "---------------------------------------------------------------------------";

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

int main() {
	Vector();
}
