//
//  main.cpp
//  1.7 Ex1
//
//  Created by 刘佳杰 on 2/20/19.
//  Copyright © 2019 刘佳杰. All rights reserved.
//

#include <iostream>
using namespace std;

void my_swap(double *p1,double *p2){
    double temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
int main(int argc, const char * argv[]) {
    double a = 123, b = 456;
    my_swap(&a, &b);
    cout << a << ' ' << b << endl;
    return 0;
}
