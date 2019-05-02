//Программа работает исправно, выполняет задание 2, 2.1, 3.
//Используется простейшее выполнение в case 3, т.к. требований особенных не было
//Поиск минимума и максимума задействует 2 фора, возможно можно сделать программу используя один, но решил не испытывать судьбу
//Так же есть эти задания используя сортировку.
//
#include "pch.h" 
#include <iostream> 
#include <cmath> 
#include <malloc.h>
#include <iomanip> 
using namespace std;
int main(int argc, char* argv[])
{
	int f = 0, j = 0;
	int max, min;
	int i, summas = 0;
	int value, kolvo = 0;
	setlocale(LC_ALL, "Russian");
	cout << "Выберите заполнение массива\n1 - Рандомно\n2 - Самостоятельно\n3 - Массив из кода" << endl;
	cin >> value;
	switch (value)
	{
	case 1://Рандом 
	{
		cout << "Выберите количество чисел в массиве.\n" << endl;
		cin >> kolvo;
		int *massive = new int[kolvo];
		for (int i = 0; i < kolvo; i++)
		{
			massive[i] = rand();
		}
		int max = massive[0], min = massive[0];
		cout << "Массив = {";
		for (int i = 0; i < kolvo; i++)
		{
			int temp = massive[i];
			cout << massive[i] << " ";
			if (temp > max)
			{
				max = temp;
				f = i;
			}
		}
		for (int i = 0; i < kolvo; i++)
		{
			int temp = massive[i];
			if (temp < min)
			{
				min = temp;
				j = i;
			}
		}
		for (int i = 0; i < kolvo; i++)
			summas += massive[i];
		//ввывод результатов на экран
		cout << "}\nСумма = " << summas << endl;
		cout << "Минимальное значение = " << min << ", его индекс = " << j << endl;
		cout << "Максимальное значение = " << max << ", его индекс = " << f << endl;
		cout << "Среднее значение = " << (max - min) / 2 << endl;
		delete[] massive;
		break;
	}
	case 2://Самостоятельно 
	{
		cout << "Выберите количество чисел в массиве.\n" << endl;
		cin >> kolvo;
		int *massive = new int[kolvo]; // Выделение памяти для массива
		for (i = 0; i < kolvo; i++) cin >> massive[i];
		int max = massive[0], min = massive[0];
		cout << "Массив = {";
		for (int i = 0; i < kolvo; i++)
		{
			int temp = massive[i];
			cout << massive[i] << " ";
			//FindMaxMin(f, i, j, temp, max, min);
			if (temp > max)
			{
				max = temp;
				f = i;
			}
		}
		for (int i = 0; i < kolvo; i++)
		{
			int temp = massive[i];
			//FindMaxMin(f, i, j, temp, max, min);
			if (temp < min)
			{
				min = temp;
				j = i;
			}
		}
		for (int i = 0; i < kolvo; i++)
			summas += massive[i];
		//ввывод результатов на экран
		cout << "}\nСумма = " << summas << endl;
		cout << endl;
		cout << "Минимальное значение = " << min << ", его индекс = " << j << endl;
		cout << "Максимальное значение = " << max << ", его индекс = " << f << endl;
		cout << "Среднее значение = " << (max - min) / 2 << endl;
		delete[] massive;
		break;
	}
	case 3://Из кода 
	{
		int massive[16] = { 5, -12, -12, 9, 10, 0, -9, -12, -1, 23, 65, 64, 11, 43, 39, -15 };
		min = massive[0];
		max = massive[0];
		for (int i = 0; i < 16; i++)
		{
			if (massive[i] > max)
			{
				max = massive[i];
				f = i;
			}
			if (massive[i] < min)
			{
				min = massive[i];
				j = i;
			}
		}
		//ввывод результатов на экран
		cout << "Ваш массив = {";
		for (int counter = 0; counter < 16; counter++)
			cout << massive[counter] << " ";
		for (int counter = 0; counter < 16; counter++)
			summas += massive[counter];
		cout << "}\nСумма = " << summas << endl;
		cout << "Минимальное значение = " << min << ", его индекс = " << j << endl;
		cout << "Максимальное значение = " << max << ", его индекс = " << f << endl;
		cout << "Среднее значение = " << (max - min) / 2 << endl;
		break;
	}
	default:
		cout << "Ошибка. Программа закрывается." << endl;
		return 12;
	}
	cout << "\nКонец программы\n\n\n\n\n\n";
	return 0;
}