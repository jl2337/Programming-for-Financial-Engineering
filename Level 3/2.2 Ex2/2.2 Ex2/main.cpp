//
//  main.cpp
//  2.2 Ex2
//
//  Created by 刘佳杰 on 2/20/19.
//  Copyright © 2019 刘佳杰. All rights reserved.
//

#include <iostream>
#include "point.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    point p1(2.5,4.5), p2(-3.8,7.75);
    cout << p2.DistanceOrigion() << endl;
    cout << p1.Distance(p2) << endl;
    return 0;
}
