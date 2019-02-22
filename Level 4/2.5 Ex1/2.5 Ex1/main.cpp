//
//  main.cpp
//  2.5 Ex1
//
//  Created by 刘佳杰 on 2/21/19.
//  Copyright © 2019 刘佳杰. All rights reserved.
//

#include <iostream>
#include "point.hpp"

ostream& operator <<(ostream& os, const point &p){
    os << "Point(" << p.X() << "," << p.Y() << ")";
    return os;
}

int main(int argc, const char * argv[]) {
    point* p1 = new point(1.5,3.5);
    cout << *p1 << endl;
    point* p2 = new point(*p1);
    cout << *p2 << endl;
    int n;
    cout << "Input\n";
    cin >> n;
    point* p = new point[n];
    for(int i=0;i<n;i++){
        cout << p[i] << endl;
    }
    delete p1;
    delete p2;
    delete [] p;
    return 0;
}
