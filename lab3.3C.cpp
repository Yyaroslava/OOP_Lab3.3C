// lab3.3C.cpp
#include <iostream>
#include "LongLong.h"

int main() {
    LongLong A, B;

    cout << "Enter the first numbers" << endl;
    cin >> A;
    cout << "Number of class LongLong elements: " << Object::Count() << endl;

    cout << "Enter the second numbers" << endl;
    cin >> B;
    cout << "Number of class LongLong elements: " << Object::Count() << endl;

    cout << "A + B: " << endl;
    cout << A + B << endl;
    cout << "Number of class LongLong elements: " << Object::Count() << endl;

    cout << "A * C:" << endl;
    cout << A * B << endl;
    cout << "Number of class LongLong elements: " << Object::Count() << endl;

    cout << "A > B " << endl;
    if (A > B) {
        cout << " Yes " << endl;
    }
    else cout << " No " << endl;

    cout << "A < B " << endl;
    if (A < B) {
        cout << " Yes " << endl;
    }
    else cout << " No " << endl;

    cout << "A == B " << endl;
    if (A == B) {
        cout << " Yes " << endl;
    }
    else cout << " No " << endl;

    cout << "A++ " << endl; cout << A++ << endl;
    cout << "A-- " << endl; cout << A-- << endl;
    cout << "++A " << endl; cout << ++A << endl;
    cout << "--A " << endl; cout << --A << endl;
    cout << "Number of class LongLong elements: " << Object::Count() << endl;

    return 0;
}
