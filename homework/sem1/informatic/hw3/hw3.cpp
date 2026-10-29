//найти в двумерном массиве max и его индексы
#include <iostream>
#include <clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	const int rows = 2;
	const int cols = 3;
	int a[rows][cols] = {
	{32, -213, 22},
	{1, 8932, 0}
	};
	int max = a[0][0];
	int index_i = 0;
	int index_j = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (a[i][j] > max)
			{
				max = a[i][j];
				index_i = i;
				index_j = j;
			}
		}
	}
	cout << "Максимальный элемент массива = " << max << endl;
	cout << "Индекс i = " << index_i << endl;
	cout << "Индекс j = " << index_j << endl;
	return 0;
}