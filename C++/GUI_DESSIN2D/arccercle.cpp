/**
*       @Author Clin Matthieu
*       @Author Vecchio Quentin
*
*       @version 1.0.0.0 on 2013-11-15
*/
#include "arcCercle.h"

    // :Cercle(cercle),angle(angle),pointDepart(pointDepart){}
        ArcCercle::ArcCercle(Cercle cercle, float angle ,Point2D pointDepart){}

        float ArcCercle::getAngle(){
        return this->angle;
    }

        Point2D ArcCercle::getPointDepart(){
        return this->pointDepart;
    }

        void ArcCercle::setAngle(float angleA){
        this->angle = angleA;
    }

        void ArcCercle::setPointDepart(Point2D pointDepart){
        this->pointDepart = pointDepart;
    }

