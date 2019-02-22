#ifndef  ARRAY_H
#define  ARRAY_H
#include "Point.h"
#include "Liu.h"
using namespace Liu::CAD;
class Liu::Containers::Array{
public:
    Array();             //default construtor
    Array(int size);     //constructor
    Array(const Array&); // copy constructor
    ~Array();            //deconstructor to free the memory of m_data
    Array& operator=(const Array&); //overloaded the operator =
    int Size() const;                   
    void SetElement(int pos, Point);        
    Point& GetElement(int pos) const;               
    const Point& operator [] (const int n) const ;  //overloaded the operator[] to get the element
    Point& operator [] (const int n);  //overloaded the operator[] to change the element


private:
    int m_size;
    Point* m_data;

};
#endif
