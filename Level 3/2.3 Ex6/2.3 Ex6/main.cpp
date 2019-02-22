//
//  main.cpp
//  2.3 Ex6
//
//  Created by 刘佳杰 on 2/21/19.
//  Copyright © 2019 刘佳杰. All rights reserved.
//

#include <iostream>
#include "point.hpp"
#include "circle.hpp"

int main(int argc, const char * argv[]) {
    circle c1;
    circle c2(point(1,2),5);
    cout << (c2.get_center()).ToString() << endl;
    cout << c1.get_radius() << endl;
    cout << c1.diameter() << endl;
    cout << c1.circumference() << endl;
    cout << c1.area() << endl;
    cout << c2.ToString() << endl;
    return 0;
}
