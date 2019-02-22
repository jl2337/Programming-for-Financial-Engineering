#ifndef   LIU_H
#define   LIU_H

namespace Liu{

    namespace CAD{
         
        class Point;
        std::ostream& operator << (std::ostream&, const Point&);

        class Line; 
        std::ostream& operator << (std::ostream&, const Line&);

        class Circle;

    };
    namespace Containers{
    
        
        class Array;
     
    
    };
};
#endif
