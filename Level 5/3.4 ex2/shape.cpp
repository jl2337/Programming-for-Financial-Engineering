//
//  shape.cpp
//  3.4 ex2
//
//  Created by 刘佳杰 on 3/11/19.
//  Copyright © 2019 刘佳杰. All rights reserved.
//

#include "shape.hpp"

shape::shape():m_id(rand()){};

shape::shape(const shape& s):m_id(s.m_id){};

shape::~shape(){
    //cout << "Shape Destructor called\n";
}

string shape::ToString(){
    string res = "ID: ",temp;
    stringstream ss;
    ss << m_id;
    ss >> temp;
    res += temp;
    return res;
}

int shape::ID(){
    return m_id;
}

shape shape::operator=(const shape& s){
    if(this == &s){
        return *this;
    }
    else{
        m_id = s.m_id;
        return *this;
    }
}
