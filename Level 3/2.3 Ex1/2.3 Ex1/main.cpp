//
//  main.cpp
//  2.3 Ex1
//
//  Created by 刘佳杰 on 2/20/19.
//  Copyright © 2019 刘佳杰. All rights reserved.
//

#include <iostream>
#include "point.hpp"
using namespace std;

double get_distance(point &p1, point &p2){
    double x = p1.get_x() - p2.get_x();
    double y = p1.get_y() - p2.get_y();
    return sqrt(x*x+y*y);
}
int main(int argc, const char * argv[]) {
    point p1(2.5,3.3);
    point p2(7.5,-6);
    point p3(p1);   // copy constructor
    point p4(p2);
    point p5 = p1;  // the other way to use copy constructor
    point p6 = p2;
    cout << get_distance(p1, p2) << endl;
    cout << get_distance(p3, p4) << endl;
    cout << get_distance(p5, p6) << endl;
    cout << p1.get_cons() << endl; // using object to call static function of class
    cout << point::get_des() << endl;   // using class to call static function
    return 0;
}
