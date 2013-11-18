#ifndef VUEGRAPHIQUE_H
#define VUEGRAPHIQUE_H
#include <QtWidgets>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QString>
#include <QGraphicsTextItem>

class VueGraphique : public QGraphicsView
{
    public:
        VueGraphique();
        QGraphicsScene *scene;
    private :
        int x;
        int y;  
        void mouseMoveEvent ( QMouseEvent * event );
};

#endif // VUEGRAPHIQUE_H
