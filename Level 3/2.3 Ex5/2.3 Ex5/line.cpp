//
//  line.cpp
//  2.3 Ex5
//
//  Created by 刘佳杰 on 2/21/19.
//  Copyright © 2019 刘佳杰. All rights reserved.
//

#include "line.hpp"
line::line():point1(point(0,0)),point2(point(0,0)){};

line::line(point p1, point p2):point1(p1),point2(p2){};

line::line(const line &line1):point1(line1.point1),point2(line1.point2){};

line::~line(){};

double line::line_length() const{
    return point2.Distance(point1);
}

string line::ToString() const{
    stringstream ss;
    string res = "Point1(", temp;
    ss << point1.X();
    ss >> temp;
    res += temp + ",";
    ss.clear();
    ss << point1.Y();
    ss >> temp;
    res += temp + "), Point2(";
    ss.clear();
    ss << point2.X();
    ss >> temp;
    res += temp + ",";
    ss.clear();
    ss << point2.Y();
    ss >> temp;
    res += temp + ")\n";
    return res;
}

point line::get_point1() const{
    return point1;
}

point line::get_point2() const{
    return point2;
}

void line::set_point1(point p){
    point1 = p;
}

void line::set_point2(point p){
    point2 = p;
}
