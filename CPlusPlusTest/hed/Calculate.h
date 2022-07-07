//
// Purpur Tentakel
// 03.07.2022
//

#pragma once
#include <string>

int Add(int a, int b);

int Multiply(int a, int b);
void MultiplyAndLog(int a, int b);

struct iVector3;
struct dVector3;
struct iVentor2;
struct dVector2;

struct IVector {
	virtual std::string ToString() const = 0;
	virtual double GetLength() const = 0;
};
struct IVector3 :public IVector {
	virtual dVector3 Normalize() const = 0;
};
struct IVector2 : public IVector {
	virtual dVector2 Normalize() const = 0;
};


struct dVector3 : public IVector3 {
	double x, y, z;

	dVector3(double X, double Y, double Z);

	std::string ToString()const override;
	double GetLength()const override;
	dVector3 Normalize()const override;
	dVector3 operator+(dVector3& other)const;
	dVector3 operator+(iVector3& other)const;
	dVector3 operator-(dVector3& other)const;
	dVector3 operator-(iVector3& other)const;
	dVector3 operator*(dVector3& other)const;
	dVector3 operator*(iVector3& other)const;
	dVector3 operator/(dVector3& other)const;
	dVector3 operator/(iVector3& other)const;
};
struct iVector3 : public IVector3 {
	int x, y, z;

	iVector3(int X, int Y, int Z);

	std::string ToString()const override;
	double GetLength()const override ;
	dVector3 Normalize()const override;
	iVector3 operator+(iVector3& other)const;
	dVector3 operator+(dVector3& other)const;
	iVector3 operator-(iVector3& other)const;
	dVector3 operator-(dVector3& other)const;
	iVector3 operator*(iVector3& other)const;
	dVector3 operator*(dVector3& other)const;
	dVector3 operator/(dVector3& other)const;
	dVector3 operator/(iVector3& other)const;
};


struct dVector2 : public IVector2 {
	double x, y;

	dVector2(double X, double Y);

	std::string ToString()const override;
	double GetLength()const override;
	dVector2 Normalize()const override;
};
struct iVector2 : public IVector2 {
	int x, y;

	iVector2(int X, int Y);

	std::string ToString()const override;
	double GetLength()const override;
	dVector2 Normalize()const override;
};

