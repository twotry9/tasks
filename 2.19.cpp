#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Введите четырехзначное число: ";
    cin >> number;

    if (number < 1000 || number > 9999) {
        cout << "Ошибка: введено не четырехзначное число!" << endl;
        return 1;
    }

    int digit1 = number / 1000;        
    int digit2 = (number / 100) % 10;  
    int digit3 = (number / 10) % 10;   
    int digit4 = number % 10;         

    int sum = digit1 + digit2 + digit3 + digit4;

    int product = digit1 * digit2 * digit3 * digit4;

    cout << "Сумма цифр: " << sum << endl;
    cout << "Произведение цифр: " << product << endl;

    return 0;
}