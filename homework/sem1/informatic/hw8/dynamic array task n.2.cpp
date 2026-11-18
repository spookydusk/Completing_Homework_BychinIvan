#include <iostream>
#include <clocale>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));
	setlocale(LC_ALL, "Russian");
	int size, sum = 0;
	cout << "Введите размер массива: ";
	cin >> size;
	if (size <= 0) {
		cout << "Размер массива должен быть больше нуля." << endl;
		return 1;
	}

	int* arr = new (nothrow) int[size];
	if (arr == nullptr) {
		cout << "Ошибка выделения памяти!" << endl;
		return 1;
	}
	cout << "Создан массив: ";
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 101;
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < size; i++)
		sum += arr[i];
	cout << "Сумма элементов: " << sum;
	delete[]arr;
	arr = nullptr;
	return 0;
}