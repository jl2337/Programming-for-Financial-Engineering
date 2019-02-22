#ifndef  LINE_H
#define  LINE_H
#include "Point.h"
#include "Liu.h"
#include <iostream>
using namespace Liu::CAD;
class Liu::CAD::Line{
public:
    Line();
    Line(const Point&, const Point&);
    Line(const Line&);
    ~Line();
    Point P1() const;
    void P1(const Point&);
    Point P2() const;
    void P2(const Point&);
    std::string ToString() const;
    double Length() const;

    Line& operator = (const Line& );
    friend std::ostream& operator << (std::ostream&, const Line&);
private:
    Point p1;
    Point p2;

};

#endif
