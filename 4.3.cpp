#include <iostream>
using namespace std;

int main() {
    double x, y;

    cout << "Введите координату x: ";
    cin >> x;
    cout << "Введите координату y: ";
    cin >> y;

    if (y > 0 && y < 4) {
        cout << "Точка находится в области I" << endl;
    } else {
        cout << "Точка находится в области II" << endl;
    }

    return 0;
}
