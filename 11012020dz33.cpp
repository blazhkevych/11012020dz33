/*
* Пользователь 	вводит с клавиатуры расстояние в милях.Перевести его в метры.
*/
#include <iostream>
#include <Windows.h>;
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	cout << "Введите мили : \n";
	double a, b;
	cin >> a;
	b = a * 1.609;
	cout << "км. = " << b << endl;
	return 0;
}
