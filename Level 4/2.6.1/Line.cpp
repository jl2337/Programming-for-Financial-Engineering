#include "Line.h"
#include <iostream>
#include <sstream>
using namespace std;
using namespace Liu::CAD;

Line::Line() {

    p1.X(0);
    p2.Y(0);
}

Line::Line(const Point& _p1, const Point& _p2):p1(_p1), p2(_p2) {}

Line::Line(const Line& line) {
    
    p1 = line.p1;
    p2 = line.p2;
}

Line::~Line() {
    cout << "Line deconstructor" <<endl;
}

Point Line::P1() const {
    return p1;
}

Point Line::P2() const{
    return p2;
}

void Line::P1(const Point& p) {
    p1 = p;
}
void Line::P2(const Point& p) {
    p2 = p;
}
string Line::ToString() const{
    
}

double Line::Length() const{
    return p1.Distance(p2);
}
Line& Line::operator = (const Line& src) {
    if(&src == this)
        return *this;
    p1 = src.p1;
    p2 = src.p2;
    return *this;
}

ostream& Liu::CAD::operator<<(ostream& os, const Line& l) {
    os << "Point1:" << l.p1 <<endl;
    os << "Point2:" << l.p2 <<endl;
    return os;
}
