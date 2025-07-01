// Напечатать таблицу умножения на 7:
// 1 х 7 = 7
// 2 х 7 = 14
// ...
// 9 х 7 = 63
#include <iostream>
using namespace std;

int main() {
    cout << "Таблица умножения на 7:" << endl;
    for (int i = 1; i <= 9; i++) {
        cout << i << " x 7 = " << i * 7 << endl;
    }
    return 0;
}
