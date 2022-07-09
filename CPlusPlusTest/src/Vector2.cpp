//
// Purpur Tentakel
// 08.07.2022
//

#include "../hed/Vector2.h"
#include <string>
#include <format>
#include <cmath>

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
const bool Vector3I::HasZero() const {
	if (x == 0 or y == 0 or z == 0) {
		return true;
	}
	return false;
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
const bool Vector3F::HasZero() const {
	if (x == 0.0f or y == 0.0f or z == 0.0f) {
		return true;
	}
	return false;
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
const bool Vector3D::HasZero() const {
	if (x == 0.0 or y == 0.0 or z == 0.0) {
		return true;
	}
	return false;
}


// operator
// +
Vector3I operator+ (const Vector3I& first, const Vector3I& second) {
	return Vector3I(first.x + second.x, first.y + second.y, first.z + second.z);
}
Vector3F operator+ (const Vector3F& first, const Vector3F& second) {
	return Vector3F(first.x + second.x, first.y + second.y, first.z + second.z);
}
Vector3D operator+ (const Vector3D& first, const Vector3D& second) {
	return Vector3D(first.x + second.x, first.y + second.y, first.z + second.z);
}

// -
Vector3I operator- (const Vector3I& first, const Vector3I& second) {
	return Vector3I(first.x - second.x, first.y - second.y, first.z - second.z);
}
Vector3F operator- (const Vector3F& first, const Vector3F& second) {
	return Vector3F(first.x - second.x, first.y - second.y, first.z - second.z);
}
Vector3D operator- (const Vector3D& first, const Vector3D& second) {
	return Vector3D(first.x - second.x, first.y - second.y, first.z - second.z);
}

// *
Vector3I operator* (const Vector3I& first, const Vector3I& second) {
	return Vector3I(first.x * second.x, first.y * second.y, first.z * second.z);
}
Vector3F operator* (const Vector3F& first, const Vector3F& second) {
	return Vector3F(first.x * second.x, first.y * second.y, first.z * second.z);
}
Vector3D operator* (const Vector3D& first, const Vector3D& second) {
	return Vector3D(first.x * second.x, first.y * second.y, first.z * second.z);
}

Vector3I operator* (const Vector3I& vector, const int i) {
	return Vector3I(vector.x * i, vector.y * i, vector.z * i);
}
Vector3F operator* (const Vector3F& vector, const float f) {
	return Vector3F(vector.x * f, vector.y * f, vector.z * f);
}
Vector3D operator* (const Vector3D& vector, const double d) {
	return Vector3D(vector.x * d, vector.y * d, vector.z * d);
}

Vector3I operator* (const int i, const Vector3I& vector) {
	return vector * i;
}
Vector3F operator* (const float f, const Vector3F& vector) {
	return vector * f;
}
Vector3D operator* (const double d, const Vector3D& vector) {
	return vector * d;
}

// /
Vector3I operator/ (const Vector3I& first, const Vector3I& second) {
	if (second.HasZero()) {
		throw std::invalid_argument("Devide by Zero");
	}
	return Vector3I(first.x / second.x, first.y / second.y, first.z / second.z);
}
Vector3F operator/ (const Vector3F& first, const Vector3F& second) {
	if (second.HasZero()) {
		throw std::invalid_argument("Devide by Zero");
	}
	return Vector3F(first.x / second.x, first.y / second.y, first.z / second.z);
}
Vector3D operator/ (const Vector3D& first, const Vector3D& second) {
	if (second.HasZero()) {
		throw std::invalid_argument("Devide by Zero");
	}
	return Vector3D(first.x / second.x, first.y / second.y, first.z / second.z);
}

Vector3I operator/ (const Vector3I& vector, const int i) {
	if (i == 0) {
		throw std::invalid_argument("Devide by Zero");
	}
	return Vector3I(vector.x / i, vector.y / i, vector.z / i);
}
Vector3F operator/ (const Vector3F& vector, const float f) {
	if (f == 0.0f) {
		throw std::invalid_argument("Devide by Zero");
	}
	return Vector3F(vector.x / f, vector.y / f, vector.z / f);
}
Vector3D operator/ (const Vector3D& vector, const double d) {
	if (d == 0.0) {
		throw std::invalid_argument("Devide by Zero");
	}
	return Vector3D(vector.x / d, vector.y / d, vector.z / d);
}

Vector3I operator/ (const int i, const Vector3I& vector) {
	if (vector.HasZero()) {
		throw std::invalid_argument("Devide by Zero");
	}
	return Vector3I(i / vector.x, i / vector.y, i / vector.z);
}
Vector3F operator/ (const float f, const Vector3F& vector) {
	if (vector.HasZero()) {
		throw std::invalid_argument("Devide by Zero");
	}
	return Vector3F(f / vector.x, f / vector.y, f / vector.z);
}
Vector3D operator/ (const double d, const Vector3D& vector) {
	if (vector.HasZero()) {
		throw std::invalid_argument("Devide by Zero");
	}
	return Vector3D(d / vector.x, d / vector.y, d / vector.z);
}
