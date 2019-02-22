#include "Circle.h"
#include <sstream>
#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>

using namespace std;
using namespace Liu::CAD;

Circle::Circle() {
    m_p.X(0);
    m_p.Y(0);
    
}

Circle::Circle(const Point& _p, double r):m_p(_p), m_radius(r){}

Circle::~Circle() {
    cout << "The deconstructor has been called!" <<endl;
}

Point Circle::CentrePoint() const{
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
    m_radius = c.m_radius;
    m_p = c.m_p;
}

