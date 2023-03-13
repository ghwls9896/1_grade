#ifndef  CIRCLE_H

#define CIRCLE_H
#define PI 3.141592
#include <iostream>
using namespace std;

class Circle {
	private:
		double radius;
	public:
		Circle(double radius);
		~Circle();
	public:
		double getRadius() const;
		double getCircumference() const;
		double getArea() const;
};

#endif
