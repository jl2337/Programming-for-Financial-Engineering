//
//  main.cpp
//  2.3 Ex3
//
//  Created by 刘佳杰 on 2/20/19.
//  Copyright © 2019 刘佳杰. All rights reserved.
//

#include <iostream>
#include "point.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    point p1(1.5,3.25);
    point p2(-4.75,8.69);
    cout << p1.X() << endl;
    cout << p1.Y() << endl;
    cout << p2.X() << endl;
    cout << p2.Y() << endl;
    cout << p1.Distance() << endl;
    cout << p1.Distance(p2) << endl;
    p1.X(7.75);
    p1.Y(-4.375);
    cout << p1.X() << endl;
    cout << p1.Y() << endl;
    cout << p1.Distance() << endl;
    cout << p2.Distance(p1) << endl;
    const point p3(1.5,2.5);
    cout << p3.X() << endl;
    cout << p3.Y() << endl;
    cout << p3.ToString() << endl;
    cout << p3.Distance() << endl;
    cout << p3.Distance(p2) << endl;
    return 0;
}
