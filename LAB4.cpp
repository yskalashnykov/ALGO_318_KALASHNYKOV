#include <iostream>
#include <cmath>
using namespace std;

// --- ПРОТОТИПИ ФУНКЦІЙ ---

// завдання 1.1 (Proc4)
void TrianglePS(double a, double &P, double &S);
void process_proc4();

// завдання 1.2 (Proc44)
double TriangleAreaByPoints(double x1, double y1, double x2, double y2, double x3, double y3);
void process_proc44();

// завдання 2 (Integer42)
bool in_Integer42(int &P, int &N);
void calc_Integer42(int P, int N, int &count, int &rem);
void out_Integer42(int count, int rem);
void process_integer42();

// --- ГОЛОВНА ФУНКЦІЯ ---
int main() 
{
    int choice;
    do {
        cout << "\n================ МЕНЮ ================" << endl;
        cout << "1. Завдання 1.1 (Proc4)" << endl;
        cout << "2. Завдання 1.2 (Proc44)" << endl;
        cout << "3. Завдання 2 (Integer42)" << endl;
        cout << "0. Вихід" << endl;
        cout << "Виберіть пункт: ";
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(32767, '\n');
            cout << "Помилка введення!" << endl;
            continue;
        }

        switch (choice) {
            case 1:
                process_proc4();
                break;
            case 2:
                process_proc44();
                break;
            case 3:
                process_integer42();
                break;
            case 0:
                cout << "Вихід з програми..." << endl;
                break;
            default:
                cout << "Невірний пункт меню!" << endl;
                break;
        }
    } while (choice != 0);

    return 0;
}

// --- ВИЗНАЧЕННЯ ФУНКЦІЙ ---

// // завдання 1.1 (Proc4)
void TrianglePS(double a, double &P, double &S) {
    P = 3.0 * a;
    S = (a * a * sqrt(3.0)) / 4.0;
}

void process_proc4() {
    cout << "\n// proc 4" << endl;
    double a, P, S;
    cout << "введіть сторону рівностороннього трикутника a (0 < a <= 100): ";
    cin >> a;

    if (cin.fail() || a <= 0 || a > 100) {
        cin.clear();
        cin.ignore(32767, '\n');
        cout << "помилка: сторона має бути в межах (0, 100]!" << endl;
        return;
    }

    TrianglePS(a, P, S);
    cout << "периметр P = " << P << endl;
    cout << "площа S = " << S << endl << endl;
}

// // завдання 1.2 (Proc44)
double TriangleAreaByPoints(double x1, double y1, double x2, double y2, double x3, double y3) {
    return 0.5 * fabs((x2 - x1) * (y3 - y1) - (x3 - x1) * (y2 - y1));
}

void process_proc44() {
    cout << "\n// proc 44" << endl;
    double x1, y1, x2, y2, x3, y3;
    cout << "введіть координати трьох вершин (x1 y1 x2 y2 x3 y3) в межах [-100, 100]: ";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    if (cin.fail() || x1 < -100 || x1 > 100 || y1 < -100 || y1 > 100 ||
        x2 < -100 || x2 > 100 || y2 < -100 || y2 > 100 ||
        x3 < -100 || x3 > 100 || y3 < -100 || y3 > 100) {
        cin.clear();
        cin.ignore(32767, '\n');
        cout << "помилка: координати поза діапазоном [-100, 100]!" << endl;
        return;
    }

    double S = TriangleAreaByPoints(x1, y1, x2, y2, x3, y3);
    cout << "площа трикутника за координатами S = " << S << endl << endl;
}

// // завдання 2 (Integer42)
bool in_Integer42(int &P, int &N) {
    cout << "введіть ціну товару P (ціле, 0 < P <= 100): ";
    cin >> P;
    if (cin.fail()) { 
        cin.clear(); 
        cin.ignore(32767, '\n'); 
        return true; 
    }

    cout << "введіть суму грошей N (ціле, P < N <= 100): ";
    cin >> N;
    if (cin.fail()) { 
        cin.clear(); 
        cin.ignore(32767, '\n'); 
        return true; 
    }

    if (P < -100 || P > 100 || N < -100 || N > 100 || P <= 0 || N <= P) {
        return true;
    }
    return false;
}

void calc_Integer42(int P, int N, int &count, int &rem) {
    count = N / P; // кількість товарів
    rem = N % P;   // залишок грошей
}

void out_Integer42(int count, int rem) {
    cout << "кількість товарів, яку можна купити: " << count << endl;
    cout << "залишок грошей у гаманці: " << rem << endl << endl;
}

void process_integer42() {
    cout << "\n// integer 42" << endl;
    int P, N, count, rem;
    
    if (in_Integer42(P, N)) {
        cout << "помилка: некоректні вхідні дані!" << endl;
    } else {
        calc_Integer42(P, N, count, rem);
        out_Integer42(count, rem);
    }
}