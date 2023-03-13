#ifndef SPHERE_H
#define SPHERE_H
#include "circle.h"

class Sphere : public Circle {
	public:
		Sphere(double radius);
		~Sphere();
	public:
		double getSurfaceArea() const; //원의 겉넓이
		double getVolume() const; //원의 부피
};
#endif