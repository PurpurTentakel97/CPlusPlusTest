//
// Purpur Tentakel
// 07.07.2022
//

#include "../hed/Vector.h"
#include <string>
#include <format>
#include <cmath>

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
dVector3 dVector3::operator+(const dVector3& other)const {
	return dVector3(x + other.x, y + other.y, z + other.z);
}
dVector3 dVector3::operator+(const iVector3& other)const {
	return dVector3(x + other.x, y + other.y, z + other.z);
}
dVector3 dVector3::operator-(const dVector3& other)const {
	return dVector3(x - other.x, y + other.y, z + other.z);
}
dVector3 dVector3::operator-(const iVector3& other)const {
	return dVector3(x - other.x, y + other.y, z + other.z);
}
dVector3 dVector3::operator*(const dVector3& other)const {
	return dVector3(x * other.x, y * other.y, z * other.z);
}
dVector3 dVector3::operator*(const iVector3& other)const {
	return dVector3(x * other.x, y * other.y, z * other.z);
}
dVector3 dVector3::operator/(const dVector3& other)const {
	return dVector3(x / other.x, y / other.y, z / other.z);
}
dVector3 dVector3::operator/(const iVector3& other)const {
	return dVector3(x / other.x, y / other.y, z / other.z);
}
dVector3 dVector3::operator*(const int i)const {
	return dVector3(x * i, y * i, z * i);
}
dVector3 dVector3::operator*(const double i)const {
	return dVector3(x * i, y * i, z * i);
}
dVector3 dVector3::operator/(const int i)const {
	return dVector3(x / i, y / i, z / i);
}
dVector3 dVector3::operator/(const double i)const {
	return dVector3(x / i, y / i, z / i);
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
iVector3 iVector3::operator+(const iVector3& other)const {
	return iVector3(x + other.x, y + other.y, z + other.z);
}
dVector3 iVector3::operator+(const dVector3& other)const {
	return dVector3(x + other.x, y + other.y, z + other.z);
}
iVector3 iVector3::operator-(const iVector3& other)const {
	return iVector3(x - other.x, y - other.y, z - other.z);
}
dVector3 iVector3::operator-(const dVector3& other)const {
	return dVector3(x - other.x, y - other.y, z - other.z);
}
iVector3 iVector3::operator*(const iVector3& other)const {
	return iVector3(x * other.x, y * other.y, z * other.z);
}
dVector3 iVector3::operator*(const dVector3& other)const {
	return dVector3(x * other.x, y * other.y, z * other.z);
}
dVector3 iVector3::operator/(const dVector3& other)const {
	return dVector3(x / other.x, y / other.y, z / other.z);
}
dVector3 iVector3::operator/(const iVector3& other)const {
	return dVector3((double)x / other.x, (double)y / other.y, (double)z / other.z);
}
iVector3 iVector3::operator*(const int i)const {
	return iVector3(x * i, y * i, z * i);
}
dVector3 iVector3::operator*(const double i)const {
	return dVector3(x * i, y * i, z * i);
}
dVector3 iVector3::operator/(const int i)const {
	const double j = (double)i;
	return dVector3(x / j, y / j, z / j);
}
dVector3 iVector3::operator/(const double i)const {
	return dVector3(x / i, y / i, z / i);
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
dVector2 dVector2::operator+(const iVector2& other)const {
	return dVector2(x + other.x, y + other.y);
}
dVector2 dVector2::operator+(const dVector2& other)const {
	return dVector2(x + other.x, y + other.y);
}
dVector2 dVector2::operator-(const iVector2& other)const {
	return dVector2(x - other.x, y - other.y);
}
dVector2 dVector2::operator-(const dVector2& other)const {
	return dVector2(x - other.x, y - other.y);
}
dVector2 dVector2::operator*(const iVector2& other)const {
	return dVector2(x * other.x, y * other.y);
}
dVector2 dVector2::operator*(const dVector2& other)const {
	return dVector2(x * other.x, y * other.y);
}
dVector2 dVector2::operator/(const iVector2& other)const {
	return dVector2(x / other.x, y / other.y);
}
dVector2 dVector2::operator/(const dVector2& other)const {
	return dVector2(x / other.x, y / other.y);
}
dVector2 dVector2::operator*(const int i)const {
	return dVector2(x * i, y * i);
}
dVector2 dVector2::operator*(const double i)const {
	return dVector2(x * i, y * i);
}
dVector2 dVector2::operator/(const int i)const {
	return dVector2(x / i, y / i);
}
dVector2 dVector2::operator/(const double i)const {
	return dVector2(x / i, y / i);
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
iVector2 iVector2::operator+(const iVector2& other)const {
	return iVector2(x + other.x, y + other.y);
}
dVector2 iVector2::operator+(const dVector2& other)const {
	return dVector2(x + other.x, y + other.y);
}
iVector2 iVector2::operator-(const iVector2& other)const {
	return iVector2(x - other.x, y - other.y);
}
dVector2 iVector2::operator-(const dVector2& other)const {
	return dVector2(x - other.x, y - other.y);
}
iVector2 iVector2::operator*(const iVector2& other)const {
	return iVector2(x * other.x, y * other.y);
}
dVector2 iVector2::operator*(const dVector2& other)const {
	return dVector2(x * other.x, y * other.y);
}
dVector2 iVector2::operator/(const iVector2& other)const {
	return dVector2((double)x / other.x, (double)y / other.y);
}
dVector2 iVector2::operator/(const dVector2& other)const {
	return dVector2(x / other.x, y / other.y);
}
iVector2 iVector2::operator*(const int i)const {
	return iVector2(x * i, y * i);
}
dVector2 iVector2::operator*(const double i)const {
	return dVector2(x * i, y * i);
}
dVector2 iVector2::operator/(const int i)const {
	const double j = (double)i;
	return dVector2(x / j, y / j);
}
dVector2 iVector2::operator/(const double i)const {
	return dVector2(x / i, y / i);
}
