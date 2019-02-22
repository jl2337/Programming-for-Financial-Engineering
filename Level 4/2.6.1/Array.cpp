#include "Array.h"
using namespace std;
using namespace Liu::Containers;

Array::Array() {
    m_size = 10;
    m_data = new Point[m_size];
}

Array::Array(int size):m_size(size) {
    m_data = new Point[m_size];
}

Array::Array(const Array& arr) {

    m_size = arr.Size();
    m_data = new Point[m_size];
    for(int i=0; i< m_size; i++) {
        m_data[i] = arr[i];
    }
    
}
Array::~Array() {
    delete[] m_data;
}

Array& Array::operator = (const Array& arr) {
    delete[] m_data;
    m_size = arr.m_size;
    m_data = new Point[m_size];
    for(int i=0; i< m_size; i++) {
       m_data[i] = arr[i];
    }
    
}
int Array::Size()const {
    return m_size;
}
void Array::SetElement(int pos, Point p) {
    if(pos < m_size) {
        m_data[pos] = p;
    }
}

Point& Array::GetElement(int pos) const {
    if(pos >= m_size)
        return m_data[0];
    else 
        return m_data[pos];
}
const Point& Array::operator [] (const int n) const {
    if(n >= m_size)
        return m_data[0];
    else 
        return m_data[n];
}

Point& Array::operator [] (const int n) {
    if(n >= m_size)
        return m_data[0];
    else 
        return m_data[n];
}
