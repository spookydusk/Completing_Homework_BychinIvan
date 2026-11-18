#include <iostream>
#include <clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int size;
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
		cin >> *(arr + i);
	if (*arr % 2 == 0)
		*arr = 0;
	for (int i = 1; i < size - 1; i++)
	{
		if (*(arr + i) % 2 == 0)
			*(arr + i) = *(arr + (i - 1)) + *(arr + (i + 1));
	}
	if (*(arr + (size - 1)) % 2 == 0)
		*(arr + (size - 1)) = 0;
	cout << "Массив после замены: ";
	for (int i = 0; i < size; i++)
		cout << *(arr + i) << " ";
	delete[]arr;
	arr = nullptr;

	return 0;
}