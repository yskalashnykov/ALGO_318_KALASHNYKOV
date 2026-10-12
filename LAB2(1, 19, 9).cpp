#include <iostream>
#include <cmath>
using namespace std;

int main() 
{

//  integer 1

    cout << "integer 1" << endl;
    int L, meters;
    cout << "введи відстань в сантиметрах (L): ";
    cin >> L;
    meters = L / 100;
    
    cout << "кількість повних метрів: " << meters << endl << endl;

//  bool 19

    cout << "boolean 19" << endl;
    int A, B, C;
    cout << "введи три цілих числа A B C: ";
    cin >> A >> B >> C;
    
    // провірка наявності пари взаємно протилежних чисел.
    bool has_opposite = (A == -B) || (B == -C) || (A == -C);
    
    cout << "серед трьох чисел є мінімум одна пара взаємно протилежних: " 
         << boolalpha << has_opposite << endl << endl;

//  математичний вираз 9

    cout << "вираз 9" << endl;
    double x, y;
    
    cout << "введи аргумент x для виразу 9: ";
    cin >> x;

    const double PI = 3.14159265358979323846;

    double sin_x = sin(x);
    double sin2_x = sin_x * sin_x;
    double term1 = pow(0.5, x * sin2_x); // 0.5 у (x*sin^2(x)) степені
    // 64 градуси в радіани: 64 * pi/180
    double sin64 = sin((x + 64.0) * PI / 180.0);
    // логарифм з основою 3 через натуральний логарифм: log_3(a)=ln(a)/ln(3)
    double log3_abs_x = log(fabs(x)) / log(3.0);
    // корінь 4-го ступеня (або піднесенню до 0.25 степеню)
    double root4 = pow(fabs(sin64 * log3_abs_x), 0.25);
    double numerator = term1 * root4; // Загальний чисельник

    // обчислення
    double tg_x = tan(x);
    double sin_x3 = sin(x * x * x);
    double denominator = tg_x * (sin_x3 * sin_x3); // tg(x) * sin^2(x^3)

    y = numerator / denominator;
    cout << "результат виразу: y = " << y << endl;

    return 0;
}