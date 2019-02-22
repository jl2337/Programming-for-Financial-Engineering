//
//  point.cpp
//  2.2 Ex1
//
//  Created by 刘佳杰 on 2/20/19.
//  Copyright © 2019 刘佳杰. All rights reserved.
//

#include "point.hpp"

point::point(double my_x,double my_y):x(my_x),y(my_y){};

double point::get_x(){
    return x;
}

double point::get_y(){
    return y;
}

void point::set_x(double my_x){
    x = my_x;
}

void point::set_y(double my_y){
    y = my_y;
}

string point::ToString(){
    stringstream ss;
    string s = "Point(", temp;
    ss << x;
    ss >> temp;
    s+=temp + " , ";
    ss << y;
    ss >> temp;
    s+=temp + ")";
    return s;
}
