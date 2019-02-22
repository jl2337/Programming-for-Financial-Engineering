#include "Point.h"
#include <sstream>
#include <iostream>
#include <cmath>
using namespace std;
using namespace Liu::CAD;

Liu::CAD::Point::Point(){
}
Liu::CAD::Point::Point(double x, double y) {

    m_x = x;
    m_y = y;
}
Liu::CAD::Point::Point(const Point& p ) {
    
    m_x = p.m_x;
    m_y = p.m_y;
}
Liu::CAD::Point::~Point(){
}


string Point::ToString() {
    stringstream ss;
    string res("The x of the point is "), tmp;
    ss << m_x;
    ss >> tmp;
    res += tmp + " The y of the point is ";
    ss.clear();
    ss << m_y;
    ss >> tmp;
    res += tmp;

    return res;
}

double Liu::CAD::Point::Distance() const{
    return sqrt(m_x*m_x + m_y*m_y);
}


double Liu::CAD::Point::Distance(const Point &p) const  {
    double x = (m_x - p.m_x) * (m_x - p.m_x);
    double y = (m_y - p.m_y) * (m_y - p.m_y);
    return sqrt(x+y);
}

Point Liu::CAD::Point::operator - () const{
    return Point(-m_x, -m_y);
}

Point Liu::CAD::Point::operator * (double factor) const{
    return Point(m_x*factor, m_y*factor);
}

Point Point::operator + (const Point& p) const {

    return Point(m_x+p.m_x, m_y+p.m_y );
}

bool Liu::CAD::Point::operator == (const Point& p ) const {
    return m_x == p.m_x && m_y ==p.m_y;
}
Point& Liu::CAD::Point::operator = (const Point& src) {
    if(this == &src)
        return *this;
    m_x = src.m_x;
    m_y = src.m_y;
    return *this;
}
Point& Liu::CAD::Point::operator *= (double factor) {
    m_x *= factor;
    m_y *= factor;
    return *this;
}

/*friend function which is a global function, overload << operator to output the information of Point
 *the friend function can access the private member of the class
 *
 */
ostream& Liu::CAD::operator <<(ostream& os, const Point& p) {
    os << "x is " << p.m_x << " y is " << p.m_y <<endl;
    return os;
}
