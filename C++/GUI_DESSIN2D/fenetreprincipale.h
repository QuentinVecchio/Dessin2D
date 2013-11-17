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
#include "gui_point.h"
#define TAILLE 100

namespace Ui {
class fenetrePrincipale;
}
enum Objet{SEGMENT, CARRE, TRIANGLE, CERCLE};
using namespace std;
class fenetrePrincipale : public QMainWindow
{
    Q_OBJECT

public:
    explicit fenetrePrincipale(QWidget *parent = 0);
    ~fenetrePrincipale();
    void afficheFormNvObj(int nb);
private slots:
    void on_btnSegment_clicked();
    void annuleNouveauObjet();
    void nouveauObjet();
    void on_btnCarre_clicked();

private:
    Ui::fenetrePrincipale *ui;
    QGraphicsScene *scene;
    Objet obj;
    //Formulaire Objets
        QWidget *conteneur;
        QVBoxLayout *boxPrincipale;
        GuiPoint *points[TAILLE];
        QHBoxLayout * nomLayout;
        QLabel * nomLabel;
        QLineEdit *lineNom;
        QHBoxLayout *btnLayout;
        QPushButton *btnValide;
        QPushButton *btnAnnule;
};

#endif // FENETREPRINCIPALE_H
