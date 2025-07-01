// Дано натуральное число.
// а) Верно ли, что оно заканчивается четной цифрой?
// б) Верно ли, что оно заканчивается нечетной цифрой?
#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Введите натуральное число: ";
    cin >> number;

    if (number <= 0) {
        cout << "Ошибка, число должно быть натуральным" << endl;
        return 1;
    }

    int lastDigit = number % 10;

    bool isEven = (lastDigit % 2 == 0);


    cout << "Число " << number << " заканчивается "
        << (isEven ? "четной" : "нечетной") << " цифрой (" << lastDigit << ")" << endl;
    return 0;
}
