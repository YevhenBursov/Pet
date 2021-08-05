#include <iostream>
#include <string.h>

//Создать базовый класс «Домашнее животное»
//и производные классы «Собака», «Кошка», «Попугай».
//С помощью конструктора установить имя каждого животного и его характеристики.

//Create a base class "Pet"
//and derived classes "Dog", "Cat", "Parrot".
//Using the constructor, set the name of each animaland its characteristics.

using namespace std;

class Pet {
protected:
	string name;
	int age;
	string breed;
public:
	Pet(string name, int age, string breed)
		:name{name}, age{age}, breed{breed}
	{}
	virtual void Show() = 0;
};

class Dog : public Pet {
private: 
	double weight;
	double length;
public:
	Dog(string name, int age, string breed, double weight, double length)
		:Pet(name, age, breed), weight{ weight }, length{ length }
	{}
	void Show() {
		cout << "Имя: " << name<<endl;
		cout << "Возраст: " << age<<endl;
		cout << "Порода: " << breed<<endl;
		cout << "Вес: " << weight<<endl;
		cout << "Длинна: " << length<<endl;
	}
};

class Cat : public Pet {
private:
	double lengthOfHair ;
	double lengthOfTail;
public:
	Cat(string name, int age, string breed, double lengthOfHair, double lengthOfTail)
		:Pet(name, age, breed), lengthOfHair{ lengthOfHair }, lengthOfTail{ lengthOfTail }
	{}
	void Show() {
		cout << "Имя: " << name << endl;
		cout << "Возраст: " << age << endl;
		cout << "Порода: " << breed << endl;
		cout << "Длинна шерсти: " << lengthOfHair << endl;
		cout << "Длинна хвостa: " << lengthOfTail << endl;
	}
};

class Parrot : public Pet {
private:
	int vocabulary;
	string color;
public:
	Parrot(string name, int age, string breed, int vocabulary, string color)
		:Pet(name, age, breed), vocabulary{ vocabulary }, color { color }
	{}
	void Show() {
		cout << "Имя: " << name << endl;
		cout << "Возраст: " << age << endl;
		cout << "Порода: " << breed << endl;
		cout << "Словарный запас: " << vocabulary << endl;
		cout << "Цвет перьев: " << color << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	Dog Sharik ("Шарик", 4, "Дворняжка", 15, 60);
	Sharik.Show();
	cout << endl;
	Cat Shanya("Шаня", 1, "Британский вислоухий", 3, 25);
	Shanya.Show();
	cout << endl;
	Parrot Chirik("Чирик", 3, "Розелла", 10, "Радуга");
	Chirik.Show();
}

