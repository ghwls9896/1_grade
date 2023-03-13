#ifndef SPHERE_H
#define SPHERE_H
#include "circle.h"

class Sphere : public Circle {
	public:
		Sphere(double radius);
		~Sphere();
	public:
		double getSurfaceArea() const; //���� �ѳ���
		double getVolume() const; //���� ����
};
#endif