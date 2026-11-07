#pragma once
#include "Pair.h"

class Rational : public Pair {
private:
    void normalizeSign();

public:
    Rational();
    Rational(int num, int den);
    Rational(const Rational& r);

    void setNumerator(int num);
    void setDenominator(int den);
    int getNumerator() const;
    int getDenominator() const;

    Rational& operator=(const Rational& r);
    operator string() const override;

    friend ostream& operator<<(ostream& out, const Rational& r);
    friend istream& operator>>(istream& in, Rational& r);

    friend bool operator==(const Rational& r1, const Rational& r2);
    friend bool operator!=(const Rational& r1, const Rational& r2);
    friend bool operator>(const Rational& r1, const Rational& r2);
    friend bool operator<(const Rational& r1, const Rational& r2);
    friend bool operator>=(const Rational& r1, const Rational& r2);
    friend bool operator<=(const Rational& r1, const Rational& r2);
};