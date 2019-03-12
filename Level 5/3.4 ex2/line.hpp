//
//  line.hpp
//  3.4 ex2
//
//  Created by 刘佳杰 on 3/11/19.
//  Copyright © 2019 刘佳杰. All rights reserved.
//

#ifndef line_hpp
#define line_hpp

#include <stdio.h>
#include "point.hpp"
#include "shape.hpp"

class line: public shape{
public:
    line();
    line(const point&,const point&);
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
    static int number_of_cons,number_of_des;
};
#endif /* line_hpp */
