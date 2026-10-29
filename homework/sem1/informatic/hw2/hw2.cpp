//Найти в массиве max, min. Вывести их, индексы первых max и min, а также кол-во max и min
#include <iostream>
#include <clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int a[] = {1, 123, -2, 1, -123, -500, 1000, 1000, 1000, 1000, 32};
	int max, min;
	int index_max, index_min;
	int count_max, count_min;
	max = a[0];
	min = a[0];
	count_max = 0;
	count_min = 0;
	index_max = 0;
	index_min = 0;
	for (int i = 0; i < 11; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			count_max = 1;
			index_max = i;
		}
		else if (a[i] == max)
		{
			count_max += 1;
		}
		if (a[i] < min)
		{
			min = a[i];
			count_min = 1;
			index_min = i;
		}
		else if (a[i] == min)
		{
			count_min += 1;
		}
	}
	cout << "Максимальный элемент массива = " << max << endl;
	cout << "Минимальный элемент массива = " << min << endl;
	cout << "Индекс максимального элемента = " << index_max << endl;
	cout << "Индекс минимального элемента = " << index_min << endl;
	cout << "Количество максимальных элементов = " << count_max << endl;
	cout << "Количество минимальных элементов = " << count_min << endl;
	return 0;
}