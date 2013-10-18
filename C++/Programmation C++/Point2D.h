#ifndef Point2D_h
#define Point2D_h

class Figure;

class Point2D {

 public:

    virtual void Point2D();

    virtual void Point2D(Integer x, Integer y);

    virtual Integer getX();

    virtual Integer getY();

    virtual void setX(Integer x);

    virtual void setY(Integer y);

    virtual Boolean estIdentique();


 private:
    Integer x;
    Integer y;

 public:

    /**
     * @element-type Figure
     */
    Figure *utilise;
};

#endif // Point2D_h
