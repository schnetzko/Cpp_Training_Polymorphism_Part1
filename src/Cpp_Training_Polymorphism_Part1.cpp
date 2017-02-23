//============================================================================
// Name        : Cpp_Training_Polymorphism_Part1.cpp
// Author      : Nico
// Version     :
// Copyright   : Your copyright notice
// Description : Testing Polymorphism in C++, Ansi-style
//============================================================================

// pointers to base class
#include <iostream>
using namespace std;

class Polygon {
	protected:
		int width, height;
	public:
		void set_values (int a, int b){
			width = a;
			height = b;
		}
};

class Rectangle: public Polygon {
	public:
		int area() {
			return width * height;
		}
};

class Triangle: public Polygon {
	public:
		int area() {
			return (width * height/2);
		}
};

int main() {
	Rectangle rect;
	Triangle trgl;

	Polygon* ppoly1 = &rect;
	Polygon* ppoly2 = &trgl;

	ppoly1->set_values(4,5);
	ppoly2->set_values(4,5);

	cout << rect.area() << "\n";
	cout << trgl.area() << "\n";

	return 0;
}
