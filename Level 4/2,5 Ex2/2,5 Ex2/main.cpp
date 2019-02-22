//
//  main.cpp
//  2,5 Ex2
//
//  Created by 刘佳杰 on 2/21/19.
//  Copyright © 2019 刘佳杰. All rights reserved.
//

#include <iostream>
#include "point.hpp"

ostream& operator <<(ostream &os, const point &p){
    os << "Point(" << p.X() << "," << p.Y() << ")";
    return os;
}

int main(int argc, const char * argv[]) {
    point** p = new point*[3];
    p[0] = new point(1,1);
    p[1] = new point(2,2);
    p[2] = new point(3,3);
    for(int i=0;i<3;i++){
        cout << *p[i] << endl;
    }
    for(int i=0;i<3;i++){
        delete p[i];
    }
    delete [] p;
    return 0;
}
