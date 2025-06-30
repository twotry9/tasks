#include <iostream>
using namespace std;

int main() {
    double radius;

    cout << "Введите радиус окружности: ";
    cin >> radius;

    double diameter = 2 * radius;

    cout << "Диаметр окружности: " << diameter << endl;

    return 0;
}
