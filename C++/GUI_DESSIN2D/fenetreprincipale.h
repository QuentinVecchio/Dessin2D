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
#include <vector>
//Mes objets
#include "gui_point.h"
#include "vuegraphique.h"
#include "formsegment.h"
#include "formcarre.h"
#include "formtriangle.h"
#include "formcercle.h"
#include "formelippse.h"
#include "presentationobjet.h"
#include "bu.h"
namespace Ui {
class fenetrePrincipale;
}
using namespace std;
class fenetrePrincipale : public QMainWindow
{
    Q_OBJECT
public:
    explicit fenetrePrincipale(QWidget *parent = 0);
    ~fenetrePrincipale();
    //Mes fonctions
        void afficheFormNvObj();
        void traceRec();
        void traceSeg();
        void traceCercle();
        void traceTri();
        void traceElippse();
        void traceMultiSeg();
private slots:
    //Slots personnels
        void annuleNouveauObjet();
        void nouveauObjet();
        void rafraichir();
        void couleurT();
        void couleurF();
    //Slots pour les btns de dessin
        void on_btnSegment_clicked();
        void on_btnCarre_clicked();
        void on_btnMultiSegment_clicked();
        void on_btnTriangle_clicked();
        void on_btnCercle_clicked();
        void on_btnEllipse_clicked();
    //Slots pour les actions du menus
        void on_actionImprimer_triggered();
        void on_actionQuitter_3_triggered();
        void on_actionPlein_cran_triggered();
        void on_actionTutoriels_triggered();
        void on_actionD_veloppeur_triggered();
        void on_actionZoom_triggered();
        void on_actionZoom_2_triggered();
        void on_actionVue_ensemble_triggered();
        void on_actionCalculette_triggered();
        void on_actionMath_matique_triggered();
        void on_actionPr_c_dent_triggered();
        void on_actionSuivant_triggered();
private:
    //Variables
        Ui::fenetrePrincipale *ui;
        Objet obj;
        QColor colorF;
        QColor colorT;
    //Fonctions privées
        void changePosCurseur(int x,int y);
    //Formulaire Objets
        formSegment *formSeg;
        formCarre *formCar;
        formTriangle *formTri;
        formCercle *formCer;
        formElippse *formEli;
    //Dessin technique
        vector<QDessin> dessin;
};

#endif // FENETREPRINCIPALE_H
