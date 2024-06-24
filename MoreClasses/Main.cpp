#include <iostream>
#include <string>
#include "Number.hpp"

class Point {
public:
	double x;
	double y;

	Point() : Point(0., 0.) {}; //конструктор по умолчанию
	Point(double oX, double oY) : x(oX), y(oY) {}; //параметрический конструктор
	Point(double oC) : Point(oC, oC) {};//параметрический конструктор вызывает параметрический конструктор для передачи одного числа и в Х и в У.
	//Конструктор копирования
	Point(const Point& other) {
		std::cout << "Copy\n";
		this->x = other.x;
		this->y = other.y;
	};

	void print() {
		std::cout << '(' << x << "; " << y << ")\n";
	}

	double distanceTo(const Point other) {
		return sqrt(
		pow(other.x - x, 2) +
		pow(other.y - y, 2)
		);
	};

	void printMemory() {
		std::cout << this << std::endl;
	}

	void setPos(double x, double y) {
		this->x = x;
		this->y = y;
	}
};

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	//Класс Point
	
	Point p1(5.5, 7.7);
	Point p2(10.0);
	Point p3;

	p1.print();
	p2.print();
	p3.print();

	Point p4 = p2;
	p4.print();

	std::cout << p4.distanceTo(p1) << std::endl;

	std::cout << "\n\n*********************************\n\n";

	std::cout << &p1 << std::endl;
	p1.printMemory();
	
	p4.setPos(7., 15.);
	p4.print();

	//Задача 1. Класс Number

	Number n1(7), n2(15);

	Number n3 = n1.sum(n2);
	std::cout << n3.getValue() << std::endl;

	Number n4 = n1.diff(n2);
	std::cout << n4.getValue() << std::endl;

	Number n5 = n1.mult(n2);
	std::cout << n5.getValue() << std::endl;

	Number n6 = n1.div(n2);
	std::cout << n6.getValue() << std::endl;
	
	std::cout << n1.diff(Number(7)).mult(Number(7)).diff(Number(7)).getValue() << std::endl;

	return 0;
}