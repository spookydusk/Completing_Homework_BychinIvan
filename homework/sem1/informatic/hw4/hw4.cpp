// Отсортировать массив из 7 чисел с помощью метода вставки
#include <iostream>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a[7] = { 12, -22, 1, 1145, 435, -11, 9 };
    for (int i = 1; i < 7; i++)
    {
        int y = a[i]; 
        int j = i - 1;
        bool f = false;
        while (j >= 0 && !f)
        {
            if (a[j] > y)
            {
                a[j + 1] = a[j];
                j--;
            }
            else
            {
                f = true;
            }
        }
        a[j + 1] = y;
    }
    cout << "Отсортированный массив: ";
    for (int i = 0; i < 7; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}