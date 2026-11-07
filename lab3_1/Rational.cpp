#include "Rational.h"
#include <sstream>
#include <cstdlib>

using namespace std;

void Rational::normalizeSign() {
    if (getSecond() < 0) {
        setFirst(-getFirst());
        setSecond(-getSecond());
    }
}

Rational::Rational() {
    setNumerator(0);
    setDenominator(1);
}

Rational::Rational(int num, int den) {
    setNumerator(num);
    setDenominator(den); 
}

Rational::Rational(const Rational& r) {
    setNumerator(r.getNumerator());
    setDenominator(r.getDenominator());
}

void Rational::setNumerator(int num) {
    setFirst(num);
}
void Rational::setDenominator(int den) {
    if (den == 0) {
        cerr << "Помилка: Знаменник не може дорівнювати нулю!" << endl;
        exit(1); 
    }
    setSecond(den);
    normalizeSign();
}

int Rational::getNumerator() const { return getFirst(); }
int Rational::getDenominator() const { return getSecond(); }

Rational& Rational::operator=(const Rational& r) {
    if (this != &r) {
        Pair::operator=(r);
    }
    return *this;
}

Rational::operator string() const {
    stringstream ss;
    ss << getNumerator() << "/" << getDenominator();
    return ss.str();
}

ostream& operator<<(ostream& out, const Rational& r) {
    out << static_cast<string>(r);
    return out;
}

istream& operator>>(istream& in, Rational& r) {
    int num, den;
    cout << "Введіть чисельник: ";
    in >> num;
    cout << "Введіть знаменник: ";
    in >> den;

    r.setNumerator(num);
    r.setDenominator(den); 

    return in;
}

bool operator==(const Rational& r1, const Rational& r2) {
    return (r1.getNumerator() * r2.getDenominator()) == (r2.getNumerator() * r1.getDenominator());
}
bool operator!=(const Rational& r1, const Rational& r2) {
    return !(r1 == r2);
}
bool operator>(const Rational& r1, const Rational& r2) {
    return (r1.getNumerator() * r2.getDenominator()) > (r2.getNumerator() * r1.getDenominator());
}
bool operator<(const Rational& r1, const Rational& r2) {
    return r2 > r1;
}
bool operator>=(const Rational& r1, const Rational& r2) {
    return (r1 > r2) || (r1 == r2);
}
bool operator<=(const Rational& r1, const Rational& r2) {
    return (r1 < r2) || (r1 == r2);
}