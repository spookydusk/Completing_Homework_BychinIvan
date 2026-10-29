//найти сумму элементов массива0 который состоит из 2 строк
#include <iostream>
#include <clocale>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    const int rows = 2;
    const int cols = 3;

    int sum = 0;
    int a[rows][cols] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum += a[i][j];
        }
    }

    cout << "Сумма элементов массива = " << sum << endl;
    return 0;
}
