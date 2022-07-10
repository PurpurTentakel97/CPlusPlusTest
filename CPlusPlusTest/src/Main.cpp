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
	Print((static_cast<Vector3F>(ivec3_1)).ToString());
	Print((static_cast<Vector3D>(ivec3_1)).ToString());

	Print(breakStr);

	Vector3F fvec3_2(3.3f, 8.9f, 5.9f);
	Print(fvec3_2.ToString());
	Print(fvec3_2.Length());
	Print(fvec3_2.Normalize().ToString());
	Print(fvec3_2.Normalize().Length());
	Print((static_cast<Vector3I>(fvec3_2)).ToString());
	Print((static_cast<Vector3D>(fvec3_2)).ToString());

	Print(breakStr);

	Vector3D dvec3_3(6.8, 7.5, 4.3);
	Print(dvec3_3.ToString());
	Print(dvec3_3.Length());
	Print(dvec3_3.Normalize().ToString());
	Print(dvec3_3.Normalize().Length());
	Print((static_cast<Vector3I>(dvec3_3)).ToString());
	Print((static_cast<Vector3D>(dvec3_3)).ToString());
}

void CalculateVector3() {
	Vector3I ivec3(1, 3, 4);
	Vector3F fvec3(1.6f, 3.4f, 4.6f);
	Vector3D dvec3(1.9, 3.2, 4.6);

	Print(ivec3.ToString());
	Print(fvec3.ToString());
	Print(dvec3.ToString());

	{
		Print(breakStr);
		Print("\tvec + vec");
		Print(breakStr);

		Print((ivec3 + ivec3).ToString());
		Print((ivec3 + fvec3).ToString());
		Print((ivec3 + dvec3).ToString());

		Print(breakStr);

		Print((fvec3 + ivec3).ToString());
		Print((fvec3 + fvec3).ToString());
		Print((fvec3 + dvec3).ToString());

		Print(breakStr);

		Print((dvec3 + ivec3).ToString());
		Print((dvec3 + fvec3).ToString());
		Print((dvec3 + dvec3).ToString());
	}
	{
		Print(breakStr);
		Print("\tvec - vec");
		Print(breakStr);

		Print((ivec3 - ivec3).ToString());
		Print((ivec3 - fvec3).ToString());
		Print((ivec3 - dvec3).ToString());

		Print(breakStr);

		Print((fvec3 - ivec3).ToString());
		Print((fvec3 - fvec3).ToString());
		Print((fvec3 - dvec3).ToString());

		Print(breakStr);

		Print((dvec3 - ivec3).ToString());
		Print((dvec3 - fvec3).ToString());
		Print((dvec3 - dvec3).ToString());
	}
	{
		Print(breakStr);
		Print("\tvec * vec");
		Print(breakStr);

		Print((ivec3 * ivec3).ToString());
		Print((ivec3 * fvec3).ToString());
		Print((ivec3 * dvec3).ToString());

		Print(breakStr);

		Print((fvec3 * ivec3).ToString());
		Print((fvec3 * fvec3).ToString());
		Print((fvec3 * dvec3).ToString());

		Print(breakStr);

		Print((dvec3 * ivec3).ToString());
		Print((dvec3 * fvec3).ToString());
		Print((dvec3 * dvec3).ToString());
	}
	{
		Print(breakStr);
		Print("\tvec / vec");
		Print(breakStr);

		Print((ivec3 / ivec3).ToString());
		Print((ivec3 / fvec3).ToString());
		Print((ivec3 / dvec3).ToString());

		Print(breakStr);

		Print((fvec3 / ivec3).ToString());
		Print((fvec3 / fvec3).ToString());
		Print((fvec3 / dvec3).ToString());

		Print(breakStr);

		Print((dvec3 / ivec3).ToString());
		Print((dvec3 / fvec3).ToString());
		Print((dvec3 / dvec3).ToString());
	}
}

void SingleCalculateVector() {
	Vector3I ivec3(1, 3, 4);
	Vector3F fvec3(1.6f, 3.4f, 4.6f);
	Vector3D dvec3(1.9, 3.2, 4.6);

	Print(ivec3.ToString());
	Print(fvec3.ToString());
	Print(dvec3.ToString());

	{
		Print(breakStr);
		Print("\tvec * number");
		Print(breakStr);

		Print((ivec3 * 3).ToString());
		Print((static_cast<Vector3F>(ivec3) * 3.7f).ToString());
		Print((static_cast<Vector3D>(ivec3) * 3.6).ToString());

		Print(breakStr);

		Print((fvec3 * 3).ToString());
		Print((fvec3 * 3.7f).ToString());
		Print((static_cast<Vector3D>(fvec3) * 3.6).ToString());

		Print(breakStr);

		Print((dvec3 * 3).ToString());
		Print((dvec3 * 3.7f).ToString());
		Print((dvec3 * 3.6).ToString());
	}
	{
		Print(breakStr);
		Print("\tnumber * vec");
		Print(breakStr);

		Print((3 * ivec3).ToString());
		Print((3.7f * static_cast<Vector3F>(ivec3)).ToString());
		Print((3.6 * static_cast<Vector3D>(ivec3)).ToString());

		Print(breakStr);

		Print((3 * fvec3).ToString());
		Print((3.7f * fvec3).ToString());
		Print((3.6 * static_cast<Vector3D>(fvec3)).ToString());

		Print(breakStr);

		Print((3 * dvec3).ToString());
		Print((3.7f * dvec3).ToString());
		Print((3.6 * dvec3).ToString());
	}
	{
		Print(breakStr);
		Print("\tvec / number");
		Print(breakStr);

		Print((ivec3 / 3).ToString());
		Print((static_cast<Vector3F>(ivec3) / 3.7f).ToString());
		Print((static_cast<Vector3D>(ivec3) / 3.6).ToString());

		Print(breakStr);

		Print((fvec3 / 3).ToString());
		Print((fvec3 / 3.7f).ToString());
		Print((static_cast<Vector3D>(fvec3) / 3.6).ToString());

		Print(breakStr);

		Print((dvec3 / 3).ToString());
		Print((dvec3 / 3.7f).ToString());
		Print((dvec3 / 3.6).ToString());
	}
	{
		Print(breakStr);
		Print("\tnumber / vec");
		Print(breakStr);

		Print((3 / ivec3).ToString());
		Print((3.7f / static_cast<Vector3F>(ivec3)).ToString());
		Print((3.6 / static_cast<Vector3D>(ivec3)).ToString());

		Print(breakStr);

		Print((3 / fvec3).ToString());
		Print((3.7f / fvec3).ToString());
		Print((3.6 / static_cast<Vector3D>(fvec3)).ToString());

		Print(breakStr);

		Print((3 / dvec3).ToString());
		Print((3.7f / dvec3).ToString());
		Print((3.6 / dvec3).ToString());
	}
	}

void Error() {
	Vector3I ivec3(0, 3, 4);
	Vector3F fvec3(0.0f, 3.4f, 4.6f);
	Vector3D dvec3(0.0, 3.2, 4.6);

	Print(ivec3.ToString());
	Print(fvec3.ToString());
	Print(dvec3.ToString());

	{
		Print(breakStr);
		Print("\tivec / vec");
		Print(breakStr);
		try {
			Print((ivec3 / ivec3).ToString());
		}
		catch (std::invalid_argument e) {
			Print(std::format("ivec / ivec -> {}", e.what()));
		}
		try {
			Print((ivec3 / fvec3).ToString());
		}
		catch (std::invalid_argument e) {
			Print(std::format("ivec / fvec -> {}", e.what()));
		}
		try {
			Print((ivec3 / dvec3).ToString());
		}
		catch (std::invalid_argument e) {
			Print(std::format("ivec / dvec -> {}", e.what()));
		}
	}
	{
		Print(breakStr);
		Print("\tfvec * vec");
		Print(breakStr);
		try {
			Print((fvec3 / ivec3).ToString());
		}
		catch (std::invalid_argument e) {
			Print(std::format("fvec / ivec -> {}", e.what()));
		}
		try {
			Print((fvec3 / fvec3).ToString());
		}
		catch (std::invalid_argument e) {
			Print(std::format("fvec / fvec -> {}", e.what()));
		}
		try {
			Print((fvec3 / dvec3).ToString());
		}
		catch (std::invalid_argument e) {
			Print(std::format("fvec / dvec -> {}", e.what()));
		}
	}
	{
		Print(breakStr);
		Print("\tdvec / vec");
		Print(breakStr);
		try {
			Print((dvec3 / ivec3).ToString());
		}
		catch (std::invalid_argument e) {
			Print(std::format("dvec / ivec -> {}", e.what()));
		}
		try {
			Print((dvec3 / fvec3).ToString());
		}
		catch (std::invalid_argument e) {
			Print(std::format("dvec / fvec -> {}", e.what()));
		}
		try {
			Print((dvec3 / dvec3).ToString());
		}
		catch (std::invalid_argument e) {
			Print(std::format("dvec / fvec -> {}", e.what()));
		}
	}
	{
		Print(breakStr);
		Print("\tivec / number");
		Print(breakStr);
		try {
			Print((ivec3 / 0).ToString());
		}
		catch (std::invalid_argument e) {
			Print(std::format("ivec / int -> {}", e.what()));
		}
		try {
			Print((static_cast<Vector3F>(ivec3) / 0.0f).ToString());
		}
		catch (std::invalid_argument e) {
			Print(std::format("ivec / float -> {}", e.what()));
		}
		try {
			Print((static_cast<Vector3D>(ivec3) / 0.0).ToString());
		}
		catch (std::invalid_argument e) {
			Print(std::format("ivec / double -> {}", e.what()));
		}
	}
	{
		Print(breakStr);
		Print("\tfvec / number");
		Print(breakStr);
		try {
			Print((fvec3 / 0).ToString());
		}
		catch (std::invalid_argument e) {
			Print(std::format("fvec / int -> {}", e.what()));
		}
		try {
			Print((fvec3 / 0.0f).ToString());
		}
		catch (std::invalid_argument e) {
			Print(std::format("fvec / float -> {}", e.what()));
		}
		try {
			Print((static_cast<Vector3D>(fvec3) / 0.0).ToString());
		}
		catch (std::invalid_argument e) {
			Print(std::format("fvec / double -> {}", e.what()));
		}
	}
	{
		Print(breakStr);
		Print("\tdvec / number");
		Print(breakStr);
		try {
			Print((dvec3 / 0).ToString());
		}
		catch (std::invalid_argument e) {
			Print(std::format("dvec / int -> {}", e.what()));
		}
		try {
			Print((dvec3 / 0.0f).ToString());
		}
		catch (std::invalid_argument e) {
			Print(std::format("dvec / float -> {}", e.what()));
		}
		try {
			Print((dvec3 / 0.0).ToString());
		}
		catch (std::invalid_argument e) {
			Print(std::format("dvec / double -> {}", e.what()));
		}
	}
	{		
		Print(breakStr);
		Print("\tnumber / ivec");
		Print(breakStr);
		try {
			Print((0/ ivec3).ToString());
		}
		catch (std::invalid_argument e) {
			Print(std::format("int / ivec -> {}", e.what()));
		}
		try {
			Print((0.0f / static_cast<Vector3F>(ivec3)).ToString());
		}
		catch (std::invalid_argument e) {
			Print(std::format("float / ivec -> {}", e.what()));
		}
		try {
			Print((0.0 / static_cast<Vector3D>(ivec3)).ToString());
		}
		catch (std::invalid_argument e) {
			Print(std::format("double / ivec -> {}", e.what()));
		}
	}
	{
		Print(breakStr);
		Print("\tnumber / fvec");
		Print(breakStr);
		try {
			Print((0 / fvec3).ToString());
		}
		catch (std::invalid_argument e) {
			Print(std::format("int / fvec -> {}", e.what()));
		}
		try {
			Print((0.0f / fvec3).ToString());
		}
		catch (std::invalid_argument e) {
			Print(std::format("float / fvec -> {}", e.what()));
		}
		try {
			Print((0.0 / static_cast<Vector3D>(fvec3)).ToString());
		}
		catch (std::invalid_argument e) {
			Print(std::format("double / fvec -> {}", e.what()));
		}
	}
	{
		Print(breakStr);
		Print("\tnumber / dvec");
		Print(breakStr);
		try {
			Print((0 / dvec3).ToString());
		}
		catch (std::invalid_argument e) {
			Print(std::format("int / dvec -> {}", e.what()));
		}
		try {
			Print((0.0f / dvec3).ToString());
		}
		catch (std::invalid_argument e) {
			Print(std::format("float / dvec -> {}", e.what()));
		}
		try {
			Print((0.0 / dvec3).ToString());
		}
		catch (std::invalid_argument e) {
			Print(std::format("double / dvec -> {}", e.what()));
		}
	}
}

void Calulating() {
	Print(breakStr + "\n" + breakStr);
	Print("\t\t\tVector");
	Print(breakStr + "\n" + breakStr);
	Vector();

	Print("\n" + breakStr + "\n" + breakStr);
	Print("\t\t\tCalculate Vector");
	Print(breakStr + "\n" + breakStr);
	CalculateVector3();

	Print("\n" + breakStr + "\n" + breakStr);
	Print("\t\t\tCalculate Single Vector");
	Print(breakStr + "\n" + breakStr);
	SingleCalculateVector();

	Print("\n" + breakStr + "\n" + breakStr);
	Print("\t\t\tError");
	Print(breakStr + "\n" + breakStr);
	Error();
}


void Pointing() {
	Vector3I ivec3(2, 5, 4);
	Vector3I* ptr = &ivec3;

	Print((*ptr).ToString());
	Print(ptr->ToString());
}


int main() {
	Calulating();
	// Pointing();
}
