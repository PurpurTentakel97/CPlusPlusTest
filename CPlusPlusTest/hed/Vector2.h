//
// Purpur Tentakel
// 03.07.2022
//

#pragma once
#include <string>

struct Vector3I;
struct Vector3F;
struct Vector3D;


struct Vector3I {
	int x, y, z;

	Vector3I(int x, int y, int z);
	explicit Vector3I(const Vector3F& other);
	explicit Vector3I(const Vector3D& other);

	std::string ToString() const;
	double Length() const;
	Vector3D Normalize() const;
	const bool HasZero() const;
};


struct Vector3F {
	float x, y, z;

	Vector3F(float x, float y, float z);
	Vector3F(const Vector3I& other);
	explicit Vector3F(const Vector3D& other);

	std::string ToString() const;
	double Length() const;
	Vector3D Normalize() const;
	const bool HasZero() const;
};

struct Vector3D {
	double x, y, z;

	Vector3D(double x, double y, double z);
	Vector3D(const Vector3I& other);
	Vector3D(const Vector3F& other);

	std::string ToString() const;
	double Length() const;
	Vector3D Normalize() const;
	const bool HasZero() const;
};



// operator
// +
Vector3I operator+ (const Vector3I& first, const Vector3I& second);
Vector3F operator+ (const Vector3F& first, const Vector3F& second);
Vector3D operator+ (const Vector3D& first, const Vector3D& second);

// -
Vector3I operator- (const Vector3I& first, const Vector3I& second);
Vector3F operator- (const Vector3F& first, const Vector3F& second);
Vector3D operator- (const Vector3D& first, const Vector3D& second);

// *
Vector3I operator* (const Vector3I& first, const Vector3I& second);
Vector3F operator* (const Vector3F& first, const Vector3F& second);
Vector3D operator* (const Vector3D& first, const Vector3D& second);

Vector3I operator* (const Vector3I& vector, int i);
Vector3F operator* (const Vector3F& vector, float f);
Vector3D operator* (const Vector3D& vector, double d);

Vector3I operator* (int i, const Vector3I& vector);
Vector3F operator* (float f, const Vector3F& vector);
Vector3D operator* (double d, const Vector3D& vector);

// /
Vector3I operator/ (const Vector3I& first, const Vector3I& second);
Vector3F operator/ (const Vector3F& first, const Vector3F& second);
Vector3D operator/ (const Vector3D& first, const Vector3D& second);

Vector3I operator/ (const Vector3I& vector, int i);
Vector3F operator/ (const Vector3F& vector, float f);
Vector3D operator/ (const Vector3D& vector, double d);

Vector3I operator/ (int i, const Vector3I& vector);
Vector3F operator/ (float f, const Vector3F& vector);
Vector3D operator/ (double d, const Vector3D& vector);
