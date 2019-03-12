//
//  main.cpp
//  3.4 ex2
//
//  Created by 刘佳杰 on 3/11/19.
//  Copyright © 2019 刘佳杰. All rights reserved.
//

#include <iostream>
#include "shape.hpp"
#include "point.hpp"
#include "line.hpp"
#include <ctime>

ostream& operator<<(ostream&os,const point& p){
    os << p.ToString() << endl;
    return os;
}

int main(int argc, const char * argv[]) {
    srand(static_cast<unsigned>(time(NULL)));
    shape s;
    point p(10,20);
    line l(point(1,2),point(3,4));
    cout << s.ToString() << endl;
    cout << p.ToString() << endl;
    cout << l.ToString() << endl;
    cout << "Shape ID is: " << s.ID() << endl;
    cout << "Point ID is: " << p.ID() << endl;
    cout << "Line ID is: " << l.ID() << endl;
    
    shape* sp = &p;
    cout << sp->ToString() << endl;
    point p2 = p;
    cout << p2 << p2.ID() << endl;
    return 0;
}
