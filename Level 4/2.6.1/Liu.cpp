#include "Liu.h"
#include <string>
#include <sstream>
#include <iostream>

using namespace std;
using namespace Liu::CAD;
using namespace Liu;
using namespace Liu::Containers;

Liu::CAD::Point::Point(){
}
Liu::CAD::Point::Point(double x, double y) {

    m_x = x;
    m_y = y;
}
Liu::CAD::Point::Point(const Point& p ) {
    
    m_x = p.X();
    m_y = p.Y();
}
Liu::CAD::Point::~Point(){
}


string Liu::CAD::Point::ToString() {
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
    double x = (m_x - p.X()) * (m_x - p.X());
    double y = (m_y - p.Y()) * (m_y - p.Y());
    return sqrt(x+y);
}

Point Liu::CAD::Point:: operator - () const{
    return Point(-m_x, -m_y);
}

Point Liu::CAD::Point:: operator * (double factor) const{
    return Point(m_x*factor, m_y*factor);
}

Point Liu::CAD::Point:: operator + (const Point& p) const {

    return Point(m_x+p.X(), m_y+p.Y() );
}

bool Liu::CAD::Point:: operator == (const Point& p ) const {
    if(m_x == p.X() && m_y == p.Y()) 
        return true;
    return false;
}
Point& Liu::CAD::Point::operator = (const Point& src) {
    if(this == &src)
        return *this;
    m_x = src.X();
    m_y = src.Y();
    return *this;
}
Point& Liu::CAD::Point::operator *= (double factor) {
    m_x *= factor;
    m_y *= factor;
    return *this;
}

 ostream& Liu::CAD::operator <<(ostream& os, const Point& p) {
    os << "x is " << p.X() << " y is " << p.Y() <<endl;
    return os;
}

Liu::CAD::Line::Line() {

    p1.X(0);
    p2.Y(0);
}

Liu::CAD::Line::Line(const Point& _p1, const Point& _p2):p1(_p1), p2(_p2) {}

Liu::CAD::Line::Line(const Line& line) {
    
    p1.X(line.P1().X());
    p1.Y(line.P1().Y());

    p2.X(line.P2().X());
    p2.Y(line.P2().Y());
}

Liu::CAD::Line::~Line() {
    cout << "Line deconstructor" <<endl;
}

Point Liu::CAD::Line::P1() const {
    return p1;
}

Point Liu::CAD::Line::P2() const{
    return p2;
}

void Liu::CAD::Line::P1(const Point& p) {
    p1.X(p.X());
    p1.Y(p.Y());
}
void Liu::CAD::Line::P2(const Point& p) {
    p2.Y(p.Y());
    p2.Y(p.Y());
}
string Liu::CAD::Line::ToString() const{
    
}

double Liu::CAD::Line::Length() const{
    return p1.Distance(p2);
}
Line& Liu::CAD::Line::operator = (const Line& src) {
    if(&src == this)
        return *this;
    p1 = src.P1();
    p2 = src.P2();
    return *this;
}

ostream& Liu::CAD::operator<<(ostream& os, const Line& l) {
    os << "Point1:" << l.P1() <<endl;
    os << "Point2:" << l.P2() <<endl;
    return os;
}
Liu::CAD::Circle::Circle() {
    m_p.X(0);
    m_p.Y(0);
    
}

Liu::CAD::Circle::Circle(const Point& _p, double r):m_p(_p), m_radius(r){}

Liu::CAD::Circle::~Circle() {
    cout << "The deconstructor has been called!" <<endl;
}

Point Liu::CAD::Circle::CentrePoint() const{
    return m_p;
}

double Circle::Radius() const {
    return m_radius;
}

double Circle::Diameter() const {
    return 2 * m_radius;
}

double Circle::Area() const {
    return 0.5 * M_PI * m_radius * m_radius;
}

double Circle::Circumference() const {
    return Diameter() * M_PI;
}

string Circle::ToString() const {
    string res("This is a Circle");
    return res;
}

Circle& Circle::operator = (const Circle& c) {
    if(&c == this)
        return *this;
    m_radius = c.Radius();
    m_p = c.CentrePoint();
}
Array::Array() {
    m_size = 10;
    m_data = new Point[m_size];
}

Array::Array(int size):m_size(size) {
    m_data = new Point[m_size];
}

Array::Array(const Array& arr) {

    if(&arr != this) {
        m_size = arr.Size();
        m_data = new Point[m_size];
    }
    
}
Array::~Array() {
    delete[] m_data;
}
int Array::Size()const {
    return m_size;
}
void Array::SetElement(int pos, Point p) {
    if(pos < m_size) {
        m_data[pos] = p;
    }
}

Point& Array::GetElement(int pos) const {
    if(pos >= m_size)
        return m_data[0];
    else 
        return m_data[pos];
}
const Point& Array::operator [] (const int n) const {
    if(n >= m_size)
        return m_data[0];
    else 
        return m_data[n];
}

Point& Array::operator [] (const int n) {
    if(n >= m_size)
        return m_data[0];
    else 
        return m_data[n];
}
