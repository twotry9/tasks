#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Введите целое число N: ";
    cin >> N;

    // а)
    if ((N % 5 == 0) || (N % 7 == 0)) {
        cout << "N кратно 5 или 7" << endl;
    }
    else {
        cout << "N НЕ кратно ни 5, ни 7" << endl;
    }

    // б)
    if ((N % 4 == 0) && (N % 10 != 0)) {
        cout << "N кратно 4 и не оканчивается на 0" << endl;
    }
    else {
        cout << "Условие не выполнено" << endl;
    }

    return 0;
}