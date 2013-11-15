#include "vuegraphique.h"

VueGraphique::VueGraphique() : QGraphicsView()
{
    this->x = 0;
    this->y = 0;
    this->scene = new QGraphicsScene();
    this->setScene(this->scene);
    int i = 0,j = 0;
    //Création de la grille
    for (int i = 0; i < 1500; i += 30)
    {
        for (int j = 0; j < 900; j += 30)
        {
            this->scene->addRect(30,30,i,j,QPen(Qt::gray));
        }
    }
}

void VueGraphique::mouseMoveEvent ( QMouseEvent * event )
{
    this->x = event->x();
    this->y = event->y();
}
