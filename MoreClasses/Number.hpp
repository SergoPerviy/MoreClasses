#ifndef _NUMBER_HPP_
#define _NUMBER_HPP_

class Number {
private:
	int value;
public:
	//Конструкторы (по умолчанию, параметрический, копирование)
	Number();
	Number(int value);
	Number(const Number& other);

	//Геттер и Сеттер
	int getValue();
	void setValue(int Value);

	//Метод класса возвращает сумму чисел
	Number sum(const Number other);
	Number diff(const Number other);
	Number mult(const Number other);
	Number div(const Number other);
	
};

#endif // _NUMBER_HPP_
