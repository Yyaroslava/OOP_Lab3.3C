//LongLong.cpp
#include "LongLong.h"

double LongLong::GetX() const { return x; }
double LongLong::GetY() const { return y; }
void LongLong::SetX(double value) { x = value; }
void LongLong::SetY(double value) { y = value; }
LongLong::LongLong() : Object() { x = 0, y = 0; }

LongLong::LongLong(double x = 0, double y = 0) : Object() {
	this->x = x;
	this->y = y;
}

LongLong::LongLong(const LongLong& A) : Object() {
	x = A.GetX();
	y = A.GetY();
}

LongLong& LongLong::operator = (const LongLong& A) {
	x = A.x;
	y = A.y;
	return *this;
}

ostream& operator << (ostream& out, const LongLong& A) {
	out << string(A);
	return out;
}

istream& operator >> (istream& in, LongLong& A) {
	cout << "Enter high digit:  "; in >> A.x;
	cout << "Enter low digit:  "; in >> A.y;
	return in;
}

LongLong::operator string() const {
	stringstream ss;
	ss << "High digit: " << x << endl;
	ss << "Low digit " << y << endl;
	return ss.str();
}

LongLong& LongLong::operator ++ () {
	x++;
	return *this;
}

LongLong& LongLong::operator -- () {
	x--;
	return *this;
}

LongLong LongLong::operator ++ (int) {
	LongLong t(*this);
	y++;
	return t;
}

LongLong LongLong::operator -- (int) {
	LongLong t(*this);
	y--;
	return t;
}

LongLong operator +(LongLong& A, LongLong& B){
	LongLong t(A.x + B.x, A.y + B.y);
	return t;
}

LongLong operator *(LongLong& A, LongLong& B) {
	LongLong t(A.x * B.x, A.y * B.y);
	return t;
}

bool operator > (LongLong& A, LongLong& B) {
	return ((A.x > B.x) || (A.x == B.x && A.y > B.y));
}

bool operator < (LongLong& A, LongLong& B) {
	return ((A.x < B.x) || (A.x == B.x && A.y < B.y));
}

bool operator == (LongLong& A, LongLong& B) {
	return (A.x == B.x && A.y == B.y);
}
