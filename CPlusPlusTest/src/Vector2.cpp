//
// Purpur Tentakel
// 08.07.2022
//

#include "../hed/Vector2.h"
#include <string>
#include <format>

// Vector3I
Vector3I::Vector3I(const int X, const  int Y, const  int Z)
	: x(X), y(Y),z(Z) {}
Vector3I::Vector3I(const Vector3F& other)
	: x((int)other.x),y((int)other.y),z((int)other.z) {}
Vector3I::Vector3I(const Vector3D& other)
	: x((int)other.x), y((int)other.y), z((int)other.z) {}

std::string Vector3I::ToString() const {
	return std::format("Vector3I -> X:{} / Y:{} / Z:{}", x, y, z);
}
double Vector3I::Length() const {
	return std::sqrt((x * x) + (y * y) + (z * z));
}
Vector3D Vector3I::Normalize() const {
	double length = Length();
	return Vector3D((double)x / length, (double)y / length, (double)z / length);
}

// Vector3F
Vector3F::Vector3F(const float X ,const float Y, const float Z)
	: x(X), y(Y), z(Z) {}
Vector3F::Vector3F(const Vector3I& other)
	: x((float)other.x), y((float)other.y), z((float)other.z) {}
Vector3F::Vector3F(const Vector3D& other)
	: x((float)other.x), y((float)other.y), z((float)other.z) {}

std::string Vector3F::ToString() const {
	return std::format("Vector3F -> X:{} / Y:{} / Z:{}", x, y, z);
}
double Vector3F::Length() const {
	return std::sqrt((x * x) + (y * y) + (z * z));
}
Vector3D Vector3F::Normalize() const {
	double length = Length();
	return Vector3D((double)x / length, (double)y / length, (double)z / length);
}

// Vector3D
Vector3D::Vector3D(const double X, const double Y, const double Z)
	: x(X), y(Y), z(Z) {}
Vector3D::Vector3D(const Vector3I& other)
	: x((double)other.x),y((double)other.y),z((double)other.z) {}
Vector3D::Vector3D(const Vector3F& other)
	: x((double)other.x), y((double)other.y), z((double)other.z) {}

std::string Vector3D::ToString() const {
	return std::format("Vector3D -> X:{} / Y:{} / Z:{}", x, y, z);
}
double Vector3D::Length() const {
	return std::sqrt((x * x) + (y * y) + (z * z));
}
Vector3D Vector3D::Normalize() const {
	double length = Length();
	return Vector3D(x / length, y / length, z / length);
}