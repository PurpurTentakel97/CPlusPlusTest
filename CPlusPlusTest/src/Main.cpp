//
// Purpur Tentakel
// 02.07.2022
// C++ 20
//

#include "../hed/Helper.h"
#include "../hed/Vector2.h"
#include <format>

std::string breakStr = "---------------------------------------------------------------------------";

void Vector() {
	Vector3I ivec3_1(2, 4, 5);
	Print(ivec3_1.ToString());
	Print(ivec3_1.Length());
	Print(ivec3_1.Normalize().ToString());
	Print(ivec3_1.Normalize().Length());
	Print(((Vector3F)ivec3_1).ToString());
	Print(((Vector3D)ivec3_1).ToString());

	Print(breakStr);

	Vector3F fvec3_2(3.3f, 8.9f, 5.9f);
	Print(fvec3_2.ToString());
	Print(fvec3_2.Length());
	Print(fvec3_2.Normalize().ToString());
	Print(fvec3_2.Normalize().Length());
	Print(((Vector3I)fvec3_2).ToString());
	Print(((Vector3D)fvec3_2).ToString());

	Print(breakStr);

	Vector3D dvec3_3(6.8, 7.5, 4.3);
	Print(dvec3_3.ToString());
	Print(dvec3_3.Length());
	Print(dvec3_3.Normalize().ToString());
	Print(dvec3_3.Normalize().Length());
	Print(((Vector3I)dvec3_3).ToString());
	Print(((Vector3F)dvec3_3).ToString());
}

void CalculateVector3() {
	
}

void CalculateVector2() {
	
}

void SingleCalculateVector() {

	}

int main() {
	Vector();
	Print(breakStr);
	Print(breakStr);
}
