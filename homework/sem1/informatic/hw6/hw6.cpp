// Отсортировать массив из 7 чисел с помощью метода обмена (пузырька)
#include <iostream>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a[7] = { 12, -22, 1, 1145, 435, -11, 9 };
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < (6 - i); j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    cout << "Отсортированный массив: ";
    for (int i = 0; i < 7; i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}