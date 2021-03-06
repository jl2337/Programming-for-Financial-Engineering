//
//  point.cpp
//  2.3 Ex2
//
//  Created by 刘佳杰 on 2/20/19.
//  Copyright © 2019 刘佳杰. All rights reserved.
//

#include "point.hpp"
int point::number_of_cons = 0;
int point::number_of_des = 0;

point::point(double my_x,double my_y):x(my_x),y(my_y){
    cout << "Constructor called\n";
    number_of_cons++;
    
};

point::point(const point &p1):x(p1.x),y(p1.y){
    cout << "Copy constructor called\n";
    number_of_cons++;
};

point::~point(){
    cout << "Destructor called\n";
    number_of_des++;
};

double point::get_x() const{
    return x;
}

double point::get_y() const{
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
    ss.clear();
    ss << y;
    ss >> temp;
    s+=temp + ")";
    return s;
}

double point::DistanceOrigion(){
    return sqrt(x*x+y*y);
}

double point::Distance(const point &p1){
    return sqrt((x-p1.x)*(x-p1.x)+(y-p1.y)*(y-p1.y));
}

int point::get_cons(){
    return number_of_cons;
}

int point::get_des(){
    return number_of_des;
}
