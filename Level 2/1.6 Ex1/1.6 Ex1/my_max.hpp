//
//  max.hpp
//  1.6 Ex1
//
//  Created by 刘佳杰 on 2/20/19.
//  Copyright © 2019 刘佳杰. All rights reserved.
//

#ifndef my_max_hpp
#define my_max_hpp

#include <stdio.h>
double my_max(double a,double b){
    return (a<b)?b:a;
}
double my_max(double a,double b,double c){
    return my_max(my_max(a,b),c);
}
#endif /* max_hpp */
