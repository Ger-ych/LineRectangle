// C++
// LineRectangle - Простая программа, которая выводит линию или 
//				   прямоугольник из заданных символов,
//                 с заданными размерами.

// подключение необходимых библиотек
#include<iostream>

// подключение пространства имён
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus"); // локализация программы под русский язык

	// объявление необходимых переменных:
	int LType;
	char sim;
	int qu, index;
	index = 0;

	// приём данных от пользователя для построения линии
	cout << "Введите символ: ";
	cin >> sim;


	cout << "Введите кол-во символов в линии: ";
	cin >> qu;


	if (qu < 0)
	{
		cout << "Некорректое кол-во символов в линии!" << endl;
		return -1;
	}
	else


		cout << "Выбирете тип линии: \n1 - для вертикального; \n2 - для горизонтального;" << endl;
	cin >> LType;


	if (LType != 1 && LType != 2)
	{
		cout << "Некорректый тип линии!" << endl;
		return -1;
	}
	else

		cout << endl << endl << "Результат: " << endl << endl;

	// вывод результата:
	if (LType == 1)
	{
		while (index < qu)
		{
			cout << sim << endl;
			index++;
		}
	}
	else
	{
		while (index < qu)
		{
			cout << sim;
			index++;
		}
	}


	cout << endl << endl;


	int index2 = 0, index3 = 0;
	int sh, v;
	char sim2;


	cout << "Введите символ для построения прямоугольника: ";
	cin >> sim2;


	cout << "Введите ширину прямоугольника: ";
	cin >> sh;


	if (sh < 1)
	{
		cout << "Некорректная ширина!" << endl;
		return -1;
	}
	else


		cout << "Введите высоту прямоугольника: ";
	cin >> v;

	if (v < 1)
	{
		cout << "Некорректная высота!" << endl;
		return -1;
	}

	cout << endl;

	cout << "Результат: " << endl;

	// вывод результата:
	while (index2 < v)
	{
		while (index3 < sh)
		{
			cout << sim2;
			index3++;
		}

		index3 = 0;
		cout << endl;
		index2++;
	}

	cout << endl << endl;

	// корректное завершение программы
	system("pause");
	return 0;
}