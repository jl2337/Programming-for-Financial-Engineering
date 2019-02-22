//
//  point.cpp
//  2.4 Ex1
//
//  Created by 刘佳杰 on 2/21/19.
//  Copyright © 2019 刘佳杰. All rights reserved.
//

#include "point.hpp"
int point::number_of_cons = 0;
int point::number_of_des = 0;

point::point(double my_x,double my_y):x(my_x),y(my_y){
    //cout << "Constructor called\n";
    number_of_cons++;
    
};

point::point(const point &p1):x(p1.x),y(p1.y){
    //cout << "Copy constructor called\n";
    number_of_cons++;
};

point::~point(){
    //cout << "Destructor called\n";
    number_of_des++;
};

double point::X() const{
    return x;
}

double point::Y() const{
    return y;
}

void point::X(double my_x){
    x = my_x;
}

void point::Y(double my_y){
    y = my_y;
}

string point::ToString() const{
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

double point::Distance() const{
    return sqrt(x*x+y*y);
}

double point::Distance(const point &p1) const{
    return sqrt((x-p1.x)*(x-p1.x)+(y-p1.y)*(y-p1.y));
}

int point::get_cons(){
    return number_of_cons;
}

int point::get_des(){
    return number_of_des;
}

point point::operator-(){
    double new_x = -x;
    double new_y = -y;
    return point(new_x, new_y);
}

point point::operator*(double a) const{
    double new_x = x * a;
    double new_y = y * a;
    return point(new_x, new_y);
}

point point::operator+(const point &p1) const{
    double new_x = x + p1.x;
    double new_y = y + p1.y;
    return point(new_x, new_y);
}

bool point::operator==(const point &p1) const{
    return x == p1.x && y == p1.y;
}

point& point::operator=(const point &p1){
    if(this == &p1){
        return *this;
    }
    this->x = p1.x;
    this->y = p1.y;
    return *this;
}

point& point::operator*=(double a){
    this->x *= a;
    this->y *= a;
    return *this;
}
