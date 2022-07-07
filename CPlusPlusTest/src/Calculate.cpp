//
// Purpur Tentakel
// 03.07.2022
//

#include "../hed/Helper.h"
#include "../hed/Calculate.h"
#include <string>
#include <format>
#include <cmath>

// Free
int Add(const int a, const int b) {
	return a + b;
}

int Multiply(const int a, const int b) {
	return a * b;
}
void MultiplyAndLog(const int a, const int b) {
	const int result = Multiply(a, b);
	Print(result);
}


// iVector3
iVector3::iVector3(const int X, const  int Y, const int Z)
	: x(X), y(Y), z(Z) {}

std::string iVector3::ToString() const {
	return std::format("x -> {} ; y -> {} ; z -> {}", x, y, z);
}
double iVector3::GetLength() const {
	return std::sqrt((x * x) + (y * y) + (z * z));
}
dVector3 iVector3::Normalize() const {
	double length = GetLength();
	return dVector3(x / length, y / length, z / length);
}

// dVector3
dVector3::dVector3(const double X, const double Y, const double Z)
	: x(X), y(Y), z(Z) {}

std::string dVector3::ToString() const {
	return std::format("x -> {} ; y -> {} ; z -> {}", x, y, z);
}
double dVector3::GetLength() const {
	return std::sqrt((x * x) + (y * y) + (z * z));
}
dVector3 dVector3::Normalize() const {
	double length = GetLength();
	return dVector3(x / length, y / length, z / length);
}



// iVector2
iVector2::iVector2(const int X, const int Y)
	: x(X), y(Y) {}

std::string iVector2::ToString() const {
	return std::format("x -> {} ; y -> {}", x, y);
}
double iVector2::GetLength() const {
	return std::sqrt((x * x) + (y * y));
}
dVector2 iVector2::Normalize() const {
	double length = GetLength();
	return dVector2(x / length, y / length);
}

// dVector2
dVector2::dVector2(const double X, const double Y)
	: x(X), y(Y) {}

std::string dVector2::ToString() const {
	return std::format("x -> {} ; y -> {}", x, y);
}
double dVector2::GetLength() const {
	return std::sqrt((x * x) + (y * y));
}
dVector2 dVector2::Normalize() const {
	double length = GetLength();
	return dVector2(x / length, y / length);
}