//
//  line.hpp
//  2.4 Ex2
//
//  Created by 刘佳杰 on 2/21/19.
//  Copyright © 2019 刘佳杰. All rights reserved.
//

#ifndef line_hpp
#define line_hpp

#include <stdio.h>
#include "point.hpp"
class line{
public:
    line();
    line(point,point);
    line(const line&);
    ~line();
    double line_length() const;
    string ToString() const;
    point get_point1() const;
    point get_point2() const;
    void set_point1(point);
    void set_point2(point);
private:
    point point1,point2;
};
#endif /* line_hpp */
