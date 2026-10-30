#include <iostream>
#include <cmath>

using namespace std;

// If2. дано ціле число. якщо воно є додатним, то відняти від нього 8; 
// в іншому випадку додати до нього 6. вивести отримане число.
void task_if2(); 

// If37. для заданого дійсного x знайти значення функції q(x)
void task_if37(); 

// Geom22. дано координати точки на площині (x, y). 
// визначити, чи потрапляє точка в зелену фігуру (варіант 22).
void task_geom22(); 

int main() {
    int menu;
    cout << "Task number (1 - If2, 2 - If37, 3 - Geom22): ";
    cin >> menu;

    // перемикання між завданнями
    switch (menu)
    {
    case 1: task_if2(); break;     // Завдання 1.1
    case 2: task_if37(); break;    // Завдання 1.2
    case 3: task_geom22(); break;  // Завдання 2
    default: cout << "Wrong task! (Only 1, 2, 3)" << endl; // повідомлення про помилку
    }

    // Пауза замість system("pause") для уникнення помилки sh: pause: not found
    cin.ignore();
    cin.get();
    return 0;
}

// завдання 1 реалізація (If2)
void task_if2()
{
    int num;
    cout << "************* If 2 *****************" << endl;
    cout << "Integer number: ";
    cin >> num;

    if (cin) { // умова якщо введено ціле
        if (num > 0) // додатне число
            num -= 8;
        else // від'ємне або нуль
            num += 6;

        cout << "After transformation: " << num << endl;
    }
    else // інакше – якщо не ціле
        cout << "Wrong integer!" << endl;
}

// завдання 2 реалізація (If37)
void task_if37()
{
    double x;
    cout << "************* If 37 *****************" << endl;
    cout << "real number x: ";
    cin >> x;

    if (cin) { // перевірка на числові дані
        double q;
        if (x<0) {
            q=-2*x;
        }
        else if (x<=2) {
            q=x*x+1;
        }
        else {
            q=5;
        }
        cout << "q(" << x << ") = " << q << endl;
    }
    else
        cout << "wrong real number..." << endl;
}

// завдання 3 (Geom22)
void task_geom22()
{
    double a, r; // сторона квадрата та радіус кола
    double x, y; // координати точки

    cout << "************* Geom 22 *****************" << endl;
    cout << "type a, r: ";
    cin >> a >> r;

    if (cin.fail() || a<=0 || r<=0)
    {
        cerr << "wrong data." << endl;
        return;
    }

    cout << "type out real coordinates (x, y): ";
    cin >> x >> y;

    if (!cin)
    {
        cout << "not a numeric coordinate..." << endl;
        return;
    }

    double dist_sq = x * x + y * y; // квадрат відстані до центру (0,0)
    double half_a = a/2.0;

    // 1: 1-а чверть, у квадраті, поза колом, нижче/на діагоналі y=x
    bool inRegion1 = x >= 0 && x <= half_a && y >= 0 && y <= half_a && dist_sq >= r * r && y <= x;

    // 2: 3-я чверть, у квадраті, нижче/на діагоналі y=x
    bool inRegion2 = x >= -half_a && x <= 0 && y >= -half_a && y <= 0 && y <= x;

    if (inRegion1 || inRegion2) {
        cout << "the point is located in the green area for variant 20-26." << endl;
    }
    else {
        cout << "the point is NOT located in the green area." << endl;
    }
    return;
}