#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Введите двузначное число: ";
    cin >> number;

    if (number < 10 || number > 99) {
        cout << "Ошибка, введено не двузначное число" << endl;
        return 1;
    }

    int tens = number / 10;  
    int units = number % 10; 

    int reversedNumber = units * 10 + tens;

    cout << "Число после перестановки цифр: " << reversedNumber << endl;

    return 0;
}