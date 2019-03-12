//
//  shape.hpp
//  3.4 ex2
//
//  Created by 刘佳杰 on 3/11/19.
//  Copyright © 2019 刘佳杰. All rights reserved.
//

#ifndef shape_hpp
#define shape_hpp

#include <stdio.h>
#include <iostream>
#include <sstream>
#include <stdio.h>
#include "cmath"
using namespace std;

class shape{
public:
    shape();
    ~shape();
    shape(const shape&);
    string ToString();
    int ID();
    shape operator=(const shape&);
private:
    int m_id;
};
#endif /* shape_hpp */
