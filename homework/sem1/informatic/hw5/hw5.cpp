// Отсортировать массив из 7 чисел с помощью метода выбора
#include <iostream>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a[7] = { 12, -22, 1, 1145, 435, -11, 9 };
    for (int i = 0; i < 6; i++)
    {
        int min_index = i;
        for (int j = i + 1; j < 7; j++)
        {
            if (a[j] < a[min_index])
                min_index = j;
        }
        int temp = a[i];    
        a[i] = a[min_index];
        a[min_index] = temp;
    }
    cout << "Отсортированный массив: ";
    for (int i = 0; i < 7; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}