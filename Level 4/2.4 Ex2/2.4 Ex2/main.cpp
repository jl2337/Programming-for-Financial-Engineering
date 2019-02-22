//
//  main.cpp
//  2.4 Ex2
//
//  Created by 刘佳杰 on 2/21/19.
//  Copyright © 2019 刘佳杰. All rights reserved.
//

#include <iostream>
#include "point.hpp"
#include "line.hpp"
#include "circle.hpp"

ostream& operator << (ostream &os, const point &p){
    //os << "Point(" << p.X() << "," << p.Y() << ")";
    os << p.ToString(); // using Tostring instead
    return os;
}

ostream& operator << (ostream &os, const line &my_line){
    os << my_line.ToString();
    return os;
}

ostream& operator <<(ostream& os, const circle &my_circle){
    os << my_circle.ToString();
    return os;
}
int main(int argc, const char * argv[]) {
    point p1(1.5,3.5), p2(12.35,18.95);
    cout << p1 << endl;
    line line1(p1,p2);
    cout << line1 << endl;
    circle circle1(p1,5);
    cout << circle1 << endl;
    return 0;
}
