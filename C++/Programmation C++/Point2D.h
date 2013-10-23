#ifndef Point2D_h
#define Point2D_h

class Figure;

class Point2D {

 public:

    Point2D();

    Point2D(int x, int y);

    int getX();

    int getY();

    void setX(int x);

    void setY(int y);

    bool estIdentique();


 private:
    int x;
    int y;

 public:
 
    /**
     * @element-type Figure
     */
    Figure *utilise;
};

#endif // Point2D_h
