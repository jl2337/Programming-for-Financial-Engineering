//
//  circle.hpp
//  2.4 Ex2
//
//  Created by 刘佳杰 on 2/21/19.
//  Copyright © 2019 刘佳杰. All rights reserved.
//

#ifndef circle_hpp
#define circle_hpp

#include <stdio.h>
#include "point.hpp"
class circle{
public:
    circle();
    circle(point,double);
    point get_center();
    double get_radius();
    double diameter();
    double area();
    double circumference();
    string ToString() const;
private:
    point center;
    double radius;
};
#endif /* circle_hpp */
