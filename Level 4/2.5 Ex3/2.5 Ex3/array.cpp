//
//  array.cpp
//  2.5 Ex3
//
//  Created by 刘佳杰 on 2/21/19.
//  Copyright © 2019 刘佳杰. All rights reserved.
//

#include "array.hpp"

my_array::my_array(){
    size = 10;
    m_data = new point[size];
}

my_array::my_array(int n){
    size = n;
    m_data = new point[size];
}

my_array::my_array(const my_array &obj){
    size = obj.size;
    m_data = new point[size];
    for(int i=0;i<size;i++){
        m_data[i] = (obj.m_data)[i];
    }
}

my_array::~my_array(){
    delete [] m_data;
}

my_array& my_array::operator=(const my_array &obj){
    if(this!=&obj){
        this->size = obj.size;
        delete [] m_data;   // dont forget delete or will memory leak
        m_data = new point[size];
        for(int i=0;i<size;i++){
            (this->m_data)[i] = (obj.m_data)[i];
        }
        return *this;
    }
    return *this;
}

int my_array::get_size() const{
    return size;
}

void my_array::SetElement(int n, point p){
    if(n>=0&&n<size){
        m_data[n] = p;
    }
}

point& my_array::GetElement(int n) const{
    if(n>=0&&n<size){
        return m_data[n];
    }
    else{
        return m_data[0];
    }
}

point& my_array::operator[](int n){
    if(n>=0&&n<size){
        return m_data[n];
    }
    else{
        return m_data[0];
    }
}
