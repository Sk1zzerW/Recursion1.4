#include <iostream>
using namespace std;

int sumRange(int a, int b) {
    if (a > b) return 0;
    return a + sumRange(a + 1, b);
}

int main() {
    int a, b;
    cout << "a и b ";
    cin >> a >> b;
    cout << "cумма чисел от " << a << " до " << b << " = " << sumRange(a, b) << endl;
    return 0;
}
