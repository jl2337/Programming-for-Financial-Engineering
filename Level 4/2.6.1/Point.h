#ifndef    POINT_H
#define    POINT_H
#include <string>
#include <iostream>
#include "Liu.h"
class Liu::CAD::Point{
public:
    Point();
    Point(double, double);
    Point(const Point&);
    ~Point();
    double X() const {
        return m_x;
    }
    double Y() const {
        return m_y;
    }
    void X(double x) {
        m_x = x;
    }
    void Y(double y) {
        m_y = y;
    }
    std::string ToString();
    double Distance() const;
    double Distance(const Point &p) const;


    Point operator - () const;
    Point operator * (double) const;
    Point operator + (const Point&) const;
    bool operator == (const Point&) const;
    Point& operator = (const Point&);
    Point& operator *= (double);

    /*friend function which is a global function, overload << operator to output the information of Point
     *the friend function can access the private member of the class
     *
     */
    friend std::ostream& operator << (std::ostream&, const Point&); 
private:
    double m_x;
    double m_y;

};

#endif     
