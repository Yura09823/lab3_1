#include "Pair.h"
#include <sstream>

using namespace std;

Pair::Pair() {
    setFirst(0);
    setSecond(0);
}

Pair::Pair(int f, int s) {
    setFirst(f);
    setSecond(s);
}

Pair::Pair(const Pair& p) {
    setFirst(p.first);
    setSecond(p.second);
}

void Pair::setFirst(int f) { first = f; }
void Pair::setSecond(int s) { second = s; }
int Pair::getFirst() const { return first; }
int Pair::getSecond() const { return second; }

Pair& Pair::operator=(const Pair& p) {
    if (this != &p) {
        first = p.first;
        second = p.second;
    }
    return *this;
}

Pair::operator string() const {
    stringstream ss;
    ss << "(" << first << ", " << second << ")";
    return ss.str();
}

ostream& operator<<(ostream& out, const Pair& p) {
    out << static_cast<string>(p);
    return out;
}

istream& operator>>(istream& in, Pair& p) {
    cout << "¬вед≥ть перше число: ";
    in >> p.first;
    cout << "¬вед≥ть друге число: ";
    in >> p.second;
    return in;
}

bool operator>(const Pair& p1, const Pair& p2) {
    return (p1.first > p2.first) || ((p1.first == p2.first) && (p1.second > p2.second));
}