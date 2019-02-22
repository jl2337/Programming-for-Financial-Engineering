#include <iostream>
#include "Point.h"
#include "Line.h"
#include "Circle.h"
#include "Array.h"

using namespace std;


int main() {

    Liu::CAD::Point p(1.0, 2.3);
    cout << p <<endl;
    using namespace Liu::CAD;
    Line line(p, Point(0,0));
    cout << line <<endl;
    using namespace Liu::Containers;

    namespace cad = Liu::CAD;
    cad::Circle  circle(p, 1.0);


    return 0;
}
