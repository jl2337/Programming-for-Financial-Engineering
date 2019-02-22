//
//  array.hpp
//  2.5 Ex3
//
//  Created by 刘佳杰 on 2/21/19.
//  Copyright © 2019 刘佳杰. All rights reserved.
//

#ifndef array_hpp
#define array_hpp

#include <stdio.h>
#include "point.hpp"

class my_array{
public:
    my_array();
    my_array(int);
    my_array(const my_array&);
    ~my_array();
    my_array& operator =(const my_array&);
    int get_size() const;
    void SetElement(int, point);
    point& GetElement(int) const;
    point& operator[](int n);
    
private:
    point* m_data;
    int size;
};
#endif /* array_hpp */
