//
//  main.cpp
//  2.3 Ex5
//
//  Created by 刘佳杰 on 2/21/19.
//  Copyright © 2019 刘佳杰. All rights reserved.
//

#include <iostream>
#include "point.hpp"
#include "line.hpp"

int main(int argc, const char * argv[]) {
    line line1(point(3.5,9.5),point(-4.25,7.88));
    line line2(line1);
    line line3;
    cout << line1.line_length() << endl;
    cout << line2.line_length() << endl;
    cout << line3.line_length() << endl;
    cout << line1.ToString() << endl;
    cout << line2.ToString() << endl;
    cout << line3.ToString() << endl;
    point p1 = line2.get_point1(), p2 = line2.get_point2();
    line line4(p1,p2);
    line4.set_point1(point(14.95,17.4));
    line4.set_point2(point(-13.75,12.75));
    cout << line4.ToString() << endl;
    cout << line4.line_length() << endl;
    return 0;
}
