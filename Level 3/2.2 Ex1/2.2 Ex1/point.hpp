//
//  point.hpp
//  2.2 Ex1
//
//  Created by 刘佳杰 on 2/20/19.
//  Copyright © 2019 刘佳杰. All rights reserved.
//

#ifndef point_hpp
#define point_hpp

#include <stdio.h>
#include <iostream>
#include <sstream>
using namespace std;
class point{
public:
    point(double,double);
    double get_x();
    double get_y();
    void set_x(double);
    void set_y(double);
    string ToString();
private:
    double x,y;
};
#endif /* point_hpp */
