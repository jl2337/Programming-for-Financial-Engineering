//
//  main.cpp
//  2.4 Ex1
//
//  Created by 刘佳杰 on 2/21/19.
//  Copyright © 2019 刘佳杰. All rights reserved.
//

#include <iostream>
#include "point.hpp"

int main(int argc, const char * argv[]) {
    point p1(1.5,3.5);
    cout << p1.ToString() << endl;
    point p2 = -p1;
    cout << p2.ToString() << endl;
    point p3 = p1 * 2;
    cout << p3.ToString() << endl;
    point p4 = p1 + p3;
    cout << p4.ToString() << endl;
    cout << (p3 == p4) << endl;
    p3 = p2;
    cout << p3.ToString() << endl;
    p3 *= 4;
    cout << p3.ToString() << endl;
    return 0;
}
