#include <iostream>
using namespace std;

int main()
{
    // декларація змінних
    double a, b, G2;
    // введення змінних
    cout << "Введіть два числа a та b  (пробіл): ";
    cin >> a >> b;
    // розрахунок результату
    G2 = a * b;
    // результат
    cout << "квадрат середнього G^2: " << G2 << endl;
    return 0;
}