#ifndef    CIRCLE_H
#define    CIRCLE_H
#include <string>
#include "Point.h"
#include "Liu.h"
using namespace Liu::CAD;
class Liu::CAD::Circle{
public:
    Circle();
    Circle(const Point&, double);
    ~Circle();
    Point CentrePoint() const;
    double Radius() const;
    double Diameter() const;
    double Area() const;
    double Circumference() const;
    std::string ToString() const;
    Circle& operator= (const Circle&);
private:
    double m_radius;
    Point m_p;
};
#endif
