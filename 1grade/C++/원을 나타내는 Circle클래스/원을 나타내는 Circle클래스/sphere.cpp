#include "sphere.h"

Sphere::Sphere(double rds) :
	Circle(rds) {
}

Sphere::~Sphere() {
}

double Sphere::getSurfaceArea() const {
	return 2 * Circle::getRadius() * Circle::getCircumference();
}

double Sphere::getVolume() const {
	return (4 / 3) * Circle::getRadius() * Circle::getArea();
}