//
//  point.hpp
//  2.3 Ex2
//
//  Created by 刘佳杰 on 2/20/19.
//  Copyright © 2019 刘佳杰. All rights reserved.
//

#ifndef point_hpp
#define point_hpp

#include <stdio.h>
#include <iostream>
#include <sstream>
#include <cmath>
using namespace std;
class point{
public:
    point(double,double);
    point(const point&);
    ~point();
    double get_x() const;
    double get_y() const;
    void set_x(double);
    void set_y(double);
    string ToString();
    double DistanceOrigion();
    double Distance(const point&);
    static int get_cons();
    static int get_des();
private:
    double x,y;
    static int number_of_cons;
    static int number_of_des;
};
#endif /* point_hpp */
