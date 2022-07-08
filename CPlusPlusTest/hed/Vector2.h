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

	Vector3I(int X, int Y, int Z);
	explicit Vector3I(const Vector3F& other);
	explicit Vector3I(const Vector3D& other);

	std::string ToString() const;
	double Length() const;
	Vector3D Normalize() const;
};


struct Vector3F {
	float x, y, z;

	Vector3F(float X, float Y, float Z);
	Vector3F(const Vector3I& other);
	explicit Vector3F(const Vector3D& other);

	std::string ToString() const;
	double Length() const;
	Vector3D Normalize() const;
};

struct Vector3D {
	double x, y, z;

	Vector3D(double X, double Y, double Z);
	Vector3D(const Vector3I& other);
	Vector3D(const Vector3F& other);

	std::string ToString() const;
	double Length() const;
	Vector3D Normalize() const;
};
