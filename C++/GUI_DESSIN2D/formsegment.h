#ifndef FORMSEGMENT_H
#define FORMSEGMENT_H

#include <QtWidgets>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QString>
#include "gui_point.h"


class formSegment
{
public:
    formSegment();
    void cache();
    void affiche();
    int X1();
    int X2();
    int Y1();
    int Y2();
    QPushButton *btnValide;
    QPushButton *btnAnnule;
    QVBoxLayout *boxPrincipale;
    QLineEdit *lineNom;
    QPushButton *btnCTrait;
    QPushButton *btnCFond;
private:
    GuiPoint *pointA;
    GuiPoint *pointB;
    QHBoxLayout * nomLayout;
    QHBoxLayout * CtraitLayout;
    QLabel * nomLabel;
    QLabel * nomCTrait;
    QHBoxLayout *btnLayout;
};

#endif // FORMSEGMENT_H
