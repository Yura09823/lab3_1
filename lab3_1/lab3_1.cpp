#include <iostream>
#include <Windows.h>
#include "Rational.h"

using namespace std;

Pair processPair(Pair p) {
    cout << "  [Функція processPair] Отримано об'єкт: " << static_cast<string>(p) << endl;
    p.setFirst(p.getFirst() * 2);
    return p;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Pair p1(5, 10);
    Pair p2(5, 5);
    cout << "Пара 1: " << p1 << endl;
    cout << "Пара 2: " << p2 << endl;
    cout << "Чи пара 1 більша за пару 2? " << (p1 > p2 ? "Так" : "Ні") << endl;

    Rational r1(3, 4);
    Rational r2;
    cout << "Створення r2 через введення з клавіатури:" << endl;
    cin >> r2; 

    cout << "Дріб 1: " << string(r1) << endl;
    cout << "Дріб 2: " << string(r2) << endl;

    cout << "\nПорівняння дробів:" << endl;
    cout << r1 << " > " << r2 << " : " << (r1 > r2 ? "Так" : "Ні") << endl;
    cout << r1 << " == " << r2 << " : " << (r1 == r2 ? "Так" : "Ні") << endl;

    Pair returnedPair = processPair(r1);
    cout << "Повернено базовий об'єкт: " << returnedPair << endl;

    Rational fractions[3] = {
        Rational(1, 2),
        Rational(-3, 5),
        Rational(7, 8)
    };

    for (int i = 0; i < 3; i++) {
        cout << "Масив дробів [" << i << "]: " << fractions[i] << endl;
    }

    return 0;
}