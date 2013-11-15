#ifndef FENETREPRINCIPALE_H
#define FENETREPRINCIPALE_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QLabel>
#include <QSpinBox>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QString>
#include <QMouseEvent>
#include <QGraphicsSceneMouseEvent>
#include "gui_point.h"
#include "vuegraphique.h"
#include "formsegment.h"
#include "formcarre.h"
#define TAILLE 100

namespace Ui {
class fenetrePrincipale;
}
enum Objet{SEGMENT, CARRE, TRIANGLE, CERCLE, MULTISEG, ELLIPSE, POLYGONE};//Enumeration des figures
using namespace std;
class fenetrePrincipale : public QMainWindow
{
    Q_OBJECT
public:
    explicit fenetrePrincipale(QWidget *parent = 0);
    ~fenetrePrincipale();
    //Mes fonctions
        void afficheFormNvObj(int nb);
        void traceRec();
        void traceSeg();
        void traceCercle();
        void traceTri();
        void traceMultiSeg();
private slots:
    //Slots personnels
        void annuleNouveauObjet();
        void nouveauObjet();
    //Slots pour les btns de dessin
        void on_btnSegment_clicked();
        void on_btnCarre_clicked();
        void on_btnMultiSegment_clicked();
        void on_btnTriangle_clicked();
    //Slots pour les actions du menus
private:
    //Variables
        Ui::fenetrePrincipale *ui;
        Objet obj;
        QPen *pen1;
        QPen *pen2;
    //Fonctions privées
        void changePosCurseur(int x,int y);
    //Formulaire Objets
        formSegment *formSeg;
        formCarre *formCar;
};

#endif // FENETREPRINCIPALE_H
