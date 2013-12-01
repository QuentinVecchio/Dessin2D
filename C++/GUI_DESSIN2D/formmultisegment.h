#ifndef FORMMULTISEGMENT_H
#define FORMMULTISEGMENT_H

#include <QtWidgets>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QString>
#include "gui_point.h"
#include <vector>
#include <QObject>
#include <QWidget>

using namespace std;
class formmultisegment : public QWidget
{
    Q_OBJECT
public:
    formmultisegment();
    void cache();
    void affiche(int n);
    int Nombre();
    int nombrePoint;
    QPushButton *btnValide;
    QPushButton *btnAnnule;
    QPushButton *btnAjout;
    QVBoxLayout *boxPrincipale;
    QLineEdit *lineNom;
    QPushButton *btnCTrait;
    vector<GuiPoint*> point;
private:
    QHBoxLayout * nomLayout;
    QHBoxLayout * CtraitLayout;
    QLabel * nomLabel;
    QLabel * nomCTrait;
    QVBoxLayout *pointLayout;
    QHBoxLayout *btnLayout;
private slots:
    void ajout();
};

#endif // FORMMULTISEGMENT_H
