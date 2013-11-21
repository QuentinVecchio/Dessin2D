#ifndef FORMCERCLE_H
#define FORMCERCLE_H

#include <QtWidgets>
#include <QLabel>
#include <QLineEdit>
#include <QSpinBox>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QString>
#include "gui_point.h"

class formCercle
{
public:
    formCercle();
    void cache();
    void affiche();
    int X1();
    int Y1();
    QPushButton *btnValide;
    QPushButton *btnAnnule;
    QVBoxLayout *boxPrincipale;
    QSpinBox *ChangeRayon;
    QLineEdit *lineNom;
    QPushButton *btnCTrait;
    QPushButton *btnCFond;
private:
    GuiPoint *pointA;
    QHBoxLayout * nomLayout;
    QHBoxLayout * rayonLayout;
    QHBoxLayout * CtraitLayout;
    QHBoxLayout * CFondLayout;
    QLabel * nomLabel;
    QLabel * rayonLabel;
    QLabel * nomCTrait;
    QLabel * nomCFond;
    QHBoxLayout *btnLayout;
};

#endif // FORMCERCLE_H
