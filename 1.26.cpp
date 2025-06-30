#include <iostream>
using namespace std;

int main() {
    double radius;

    // Ввод радиуса
    cout << "Введите радиус окружности: ";
    cin >> radius;

    // Вычисление диаметра (D = 2 * R)
    double diameter = 2 * radius;

    // Вывод результата
    cout << "Диаметр окружности: " << diameter << endl;

    return 0;
}