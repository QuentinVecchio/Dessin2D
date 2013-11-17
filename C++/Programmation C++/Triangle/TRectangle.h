#ifndef TRectangle_h
#define TRectangle_h

#include "../Base/Point2D.h"
#include "../Base/Segment.h"
#include "Triangle.h"

using namespace std;
class TRectangle : public Triangle {

 public:

    TRectangle(Point2D A, Point2D B, Point2D C);

    TRectangle(Segment base, Point2D point );

    bool estTRectangle();
};

#endif // TRectangle_h
