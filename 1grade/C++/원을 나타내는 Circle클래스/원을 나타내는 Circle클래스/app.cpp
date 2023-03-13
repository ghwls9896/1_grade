#include "sphere.h"

int main() {
	Circle circle_test(5.0);
	Sphere sphere_test(5.0);

	cout << "circle_test" << endl;
	cout << "µÑ·¹ : " << circle_test.getCircumference() << endl;
	cout << "³ÐÀÌ : " << circle_test.getArea() << endl<< endl;

	cout << "sphere_test" << endl;
	cout << "°Ñ³ÐÀÌ : " << sphere_test.getSurfaceArea() << endl;
	cout << "ºÎÇÇ : " << sphere_test.getVolume() << endl << endl;

}