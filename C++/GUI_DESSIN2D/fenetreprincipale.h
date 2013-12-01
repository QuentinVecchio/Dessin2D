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
#include <QDialog>
#include <QPrinter>
#include <QPrintDialog>
#include <QtXml/QDomDocument>
#include <QtXml/QDomElement>
#include <QtXml/QDomNode>
#include <QDebug>
//Mes objets
#include "threadanimation.h"
#include "gui_point.h"
#include "vuegraphique.h"
#include "formsegment.h"
#include "formcarre.h"
#include "formtriangle.h"
#include "formcercle.h"
#include "formelippse.h"
#include "formmultisegment.h"
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
        void suppression();
        void couleurT();
        void couleurF();
        void valideTrans();
        void annuleTrans();
        void valideRot();
        void annuleRot();
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
        void on_actionTranslation_3_triggered();
        void on_actionRotation_3_triggered();
        void on_actionLancer_Animation_2_triggered();
        void on_actionEnregistrer_triggered();
    //Fonction de sauvegarde
        void ecritureDOM();
        void ajoutDOM(QString *nomObjet,QFigure *fig, int id);
        void sauvegardeDOM();
        void on_actionOuvrir_triggered();
    //Fonction d'ouverture
        void lectureDOM();
        void lireDOM();
        void on_actionArreter_Animation_triggered();

        void on_actionExportation_triggered();

private:
    //Variables
        Ui::fenetrePrincipale *ui;
        Objet obj;
        QColor colorF;
        QColor colorT;
        int rot;
        int transX;
        int transY;
        QString *lienSauvegarde;
    //Fonctions privées
        void changePosCurseur(int x,int y);
    //Objets pour trans et rotation
        QHBoxLayout *boxTrans;
        QHBoxLayout *boxRot;
        QLabel *labelT;
        QLabel *labelR;
        QLabel *labelAngle;
        QLabel *labelX;
        QLabel *labelY;
        QLabel *labelTps;
        QSpinBox *spinX;
        QSpinBox *spinY;
        QSpinBox *spinTps;
        QPushButton *btnValide;
        QPushButton *btnAnnule;
        vector<Anim> pileAnim;
        vector<ThreadAnimation *> pileThread;
        bool cont;
    //Formulaire Objets
        formSegment *formSeg;
        formCarre *formCar;
        formTriangle *formTri;
        formCercle *formCer;
        formElippse *formEli;
        formmultisegment *formMultiSeg;
    //Dessin technique
        vector<QDessin> dessin;
    //Fichier pour la sauvegarde
        QDomDocument *doc;
        QDomElement *dessinX;
        QFile *file;
        QTextStream *out;
};

#endif // FENETREPRINCIPALE_H
