//
// Purpur Tentakel
// 08.07.2022
//

#include "../hed/Vector2.h"
#include <string>
#include <format>
#include <cmath>

// Vector3I
Vector3I::Vector3I(const int x, const  int y, const  int z)
	: x(x), y(y),z(z) {}
Vector3I::Vector3I(const Vector3F& other)
	: x(static_cast<int>(other.x)),y(static_cast<int>(other.y)),z(static_cast<int>(other.z)) {}
Vector3I::Vector3I(const Vector3D& other)
	: x(static_cast<int>(other.x)), y(static_cast<int>(other.y)), z(static_cast<int>(other.z)) {}

std::string Vector3I::ToString() const {
	return std::format("Vector3I -> X:{} / Y:{} / Z:{}", x, y, z);
}
double Vector3I::Length() const {
	return std::sqrt((x * x) + (y * y) + (z * z));
}
Vector3D Vector3I::Normalize() const {
	double length = Length();
	return Vector3D(static_cast<double>(x) / length, static_cast<double>(y) / length, static_cast<double>(z) / length);
}
const bool Vector3I::HasZero() const {
	if (x == 0 or y == 0 or z == 0) {
		return true;
	}
	return false;
}

// Vector3F
Vector3F::Vector3F(const float x ,const float y, const float z)
	: x(x), y(y), z(z) {}
Vector3F::Vector3F(const Vector3I& other)
	: x(static_cast<float>(other.x)), y(static_cast<float>(other.y)), z(static_cast<float>(other.z)) {}
Vector3F::Vector3F(const Vector3D& other)
	: x(static_cast<float>(other.x)), y(static_cast<float>(other.y)), z(static_cast<float>(other.z)) {}

std::string Vector3F::ToString() const {
	return std::format("Vector3F -> X:{} / Y:{} / Z:{}", x, y, z);
}
double Vector3F::Length() const {
	return std::sqrt((x * x) + (y * y) + (z * z));
}
Vector3D Vector3F::Normalize() const {
	double length = Length();
	return Vector3D(static_cast<double>(x) / length, static_cast<double>(y) / length, static_cast<double>(z) / length);
}
const bool Vector3F::HasZero() const {
	if (x == 0.0f or y == 0.0f or z == 0.0f) {
		return true;
	}
	return false;
}

// Vector3D
Vector3D::Vector3D(const double x, const double y, const double z)
	: x(x), y(y), z(z) {}
Vector3D::Vector3D(const Vector3I& other)
	: x(static_cast<double>(other.x)),y(static_cast<double>(other.y)),z(static_cast<double>(other.z)) {}
Vector3D::Vector3D(const Vector3F& other)
	: x(static_cast<double>(other.x)), y(static_cast<double>(other.y)), z(static_cast<double>(other.z)) {}

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

Vector3I operator* (const Vector3I& vector, int i) {
	return Vector3I(vector.x * i, vector.y * i, vector.z * i);
}
Vector3F operator* (const Vector3F& vector, float f) {
	return Vector3F(vector.x * f, vector.y * f, vector.z * f);
}
Vector3D operator* (const Vector3D& vector, double d) {
	return Vector3D(vector.x * d, vector.y * d, vector.z * d);
}

Vector3I operator* (int i, const Vector3I& vector) {
	return vector * i;
}
Vector3F operator* (float f, const Vector3F& vector) {
	return vector * f;
}
Vector3D operator* (double d, const Vector3D& vector) {
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

Vector3I operator/ (const Vector3I& vector, int i) {
	if (i == 0) {
		throw std::invalid_argument("Devide by Zero");
	}
	return Vector3I(vector.x / i, vector.y / i, vector.z / i);
}
Vector3F operator/ (const Vector3F& vector, float f) {
	if (f == 0.0f) {
		throw std::invalid_argument("Devide by Zero");
	}
	return Vector3F(vector.x / f, vector.y / f, vector.z / f);
}
Vector3D operator/ (const Vector3D& vector, double d) {
	if (d == 0.0) {
		throw std::invalid_argument("Devide by Zero");
	}
	return Vector3D(vector.x / d, vector.y / d, vector.z / d);
}

Vector3I operator/ (int i, const Vector3I& vector) {
	if (vector.HasZero()) {
		throw std::invalid_argument("Devide by Zero");
	}
	return Vector3I(i / vector.x, i / vector.y, i / vector.z);
}
Vector3F operator/ (float f, const Vector3F& vector) {
	if (vector.HasZero()) {
		throw std::invalid_argument("Devide by Zero");
	}
	return Vector3F(f / vector.x, f / vector.y, f / vector.z);
}
Vector3D operator/ (double d, const Vector3D& vector) {
	if (vector.HasZero()) {
		throw std::invalid_argument("Devide by Zero");
	}
	return Vector3D(d / vector.x, d / vector.y, d / vector.z);
}
