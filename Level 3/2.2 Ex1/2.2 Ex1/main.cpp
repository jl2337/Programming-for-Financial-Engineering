//
//  main.cpp
//  2.2 Ex1
//
//  Created by 刘佳杰 on 2/20/19.
//  Copyright © 2019 刘佳杰. All rights reserved.
//

#include <iostream>
#include "point.hpp"

int main(int argc, const char * argv[]) {
    point obj(1.5,3.9);
    cout << obj.ToString() << endl;
    cout << "Point(" << obj.get_x() << " , " << obj.get_y() << ")" << endl;
    return 0;
}
