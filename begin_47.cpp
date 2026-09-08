#include <iostream>
using namespace std;

// begin 47
int main()
{
    // декларація змінних
    double price, cost_half, cost_large;

    // введення змінних
    cout << "введіть ціну 1 кг яблук: ";
    cin >> price;

    // розрахунок результату
    cost_half = price * 0.5;
    cost_large = price * 2.3;

    // результат
    cout << "вартість 0.5 кг: " << cost_half << endl;
    cout << "вартість 2.3 кг: " << cost_large << endl;

    return 0;
}