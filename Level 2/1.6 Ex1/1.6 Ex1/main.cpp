//
//  main.cpp
//  1.6 Ex1
//
//  Created by 刘佳杰 on 2/20/19.
//  Copyright © 2019 刘佳杰. All rights reserved.
//

#include <iostream>
#include "my_max.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    double a,b,c;
    cout << "Input three doubles\n";
    cin >> a >> b >> c;
    cout << "Max is: " << my_max(a,b,c) << endl;
    return 0;
}
