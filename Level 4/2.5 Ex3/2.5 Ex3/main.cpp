//
//  main.cpp
//  2.5 Ex3
//
//  Created by 刘佳杰 on 2/21/19.
//  Copyright © 2019 刘佳杰. All rights reserved.
//

#include <iostream>
#include "array.hpp"

ostream& operator<<(ostream& os, const point &p){
    os << "Point(" << p.X() << "," << p.Y() << ")";
    return os;
}
int main(int argc, const char * argv[]) {
    my_array array1;
    my_array array2(5);
    my_array array3(array1);
    array3 = array2;
    cout << array1.get_size() << endl;
    cout << array2.get_size() << endl;
    cout << array3.get_size() << endl;
    array1.SetElement(2, point(1.5,4.25));
    cout << array2.GetElement(3) << endl;
    cout << array1.GetElement(2) << endl;
    cout << "********************" << endl;
    cout << array2[3] << endl;
    cout << array1[2] << endl;
    
    return 0;
}
