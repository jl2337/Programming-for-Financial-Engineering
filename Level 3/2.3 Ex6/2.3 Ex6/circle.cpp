//
//  circle.cpp
//  2.3 Ex6
//
//  Created by 刘佳杰 on 2/21/19.
//  Copyright © 2019 刘佳杰. All rights reserved.
//

#include "circle.hpp"

circle::circle():center(point(0,0)),radius(1){};

circle::circle(point p,double r):center(p),radius(r){};

point circle::get_center(){
    return center;
}

double circle::get_radius(){
    return radius;
}

double circle::diameter(){
    return 2*radius;
}

double circle::area(){
    return M_PI*radius*radius;
}

double circle::circumference(){
    return 2*M_PI*radius;
}

string circle::ToString(){
    stringstream ss;
    string res = "Center is: (", temp;
    ss << center.X();
    ss >> temp;
    res += temp + ",";
    ss.clear();
    ss << center.Y();
    ss >> temp;
    res += temp + "). The radius is: ";
    ss.clear();
    ss << radius;
    ss >> temp;
    res += temp;
    return res;
}
