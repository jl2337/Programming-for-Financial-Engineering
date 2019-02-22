//
//  main.cpp
//  2.4 Ex3
//
//  Created by 刘佳杰 on 2/21/19.
//  Copyright © 2019 刘佳杰. All rights reserved.
//  Constructors as conversion operator

#include <iostream>
#include "point.hpp"

int main(int argc, const char * argv[]) {
    point p1(1,1);
    if(p1 == 1){
        cout << "Equal\n";
    }
    else{
        cout << "Not equal\n";
    }
    cout << (static_cast<point>(1)).ToString() << endl; // casting type from int to point
    return 0;
}
