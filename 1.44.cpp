#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b;

    cout << "Введите длину первой стороны: ";
    cin >> a;
    cout << "Введите длину второй стороны: ";
    cin >> b;

    if (a <= 0 || b <= 0) {
        cout << "Ошибка, стороны должны быть положительными" << endl;
        return 1; 
    }

    double perimeter = 2 * (a + b);

    double diagonal = sqrt(a * a + b * b);

    cout << "Периметр прямоугольника: " << perimeter << endl;
    cout << "Длина диагонали прямоугольника: " << diagonal << endl;

    return 0;
}
