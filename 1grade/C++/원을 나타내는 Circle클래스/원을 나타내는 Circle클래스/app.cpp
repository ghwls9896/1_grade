#include "sphere.h"

int main() {
	Circle circle_test(5.0);
	Sphere sphere_test(5.0);

	cout << "circle_test" << endl;
	cout << "�ѷ� : " << circle_test.getCircumference() << endl;
	cout << "���� : " << circle_test.getArea() << endl<< endl;

	cout << "sphere_test" << endl;
	cout << "�ѳ��� : " << sphere_test.getSurfaceArea() << endl;
	cout << "���� : " << sphere_test.getVolume() << endl << endl;

}