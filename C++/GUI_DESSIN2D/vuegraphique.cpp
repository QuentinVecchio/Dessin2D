#include "vuegraphique.h"

VueGraphique::VueGraphique() : QGraphicsView()
{
    this->labelX = new QLabel();
    this->labelY = new QLabel();
    this->scene = new QGraphicsScene();
    this->setScene(this->scene);
    //Création de la grille
    int i = 0,j = 0;
    for (int i = 0; i < 1500; i += 30)
    {
        for (int j = 0; j < 900; j += 30)
        {
            this->scene->addRect(25,25,i,j,QPen(Qt::gray));
        }
    }
}

void VueGraphique::mouseMoveEvent ( QMouseEvent * event )
{
    this->labelX->setText(QString::number(event->x()));
    this->labelY->setText(QString::number(event->y()));
}
