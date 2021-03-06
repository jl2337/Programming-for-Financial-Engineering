//
//  point.hpp
//  3.4 ex2
//
//  Created by 刘佳杰 on 3/11/19.
//  Copyright © 2019 刘佳杰. All rights reserved.
//

#ifndef point_hpp
#define point_hpp

#include <stdio.h>
#include "shape.hpp"
using namespace std;
class point: public shape{
public:
    point(double,double);
    point(const point&);
    ~point();
    double X() const;
    double Y() const;
    void X(double);
    void Y(double);
    string ToString() const;
    double Distance() const;
    double Distance(const point&) const;
    static int get_cons();
    static int get_des();
    
    // operator overloading
    point operator-();
    point operator*(double) const;
    point operator+(const point&) const;
    bool operator==(const point&) const;
    point& operator=(const point&);
    point& operator*=(double);
    
private:
    double x,y;
    static int number_of_cons;
    static int number_of_des;
};
#endif /* point_hpp */
