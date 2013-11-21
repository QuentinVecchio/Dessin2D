#ifndef FORMTRIANGLE_H
#define FORMTRIANGLE_H

#include <QtWidgets>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QString>
#include "gui_point.h"

class formTriangle
{
public:
    formTriangle();
    void cache();
    void affiche();
    int X1();
    int X2();
    int Y1();
    int Y2();
    int X3();
    int Y3();
    QPushButton *btnValide;
    QPushButton *btnAnnule;
    QVBoxLayout *boxPrincipale;
    QLineEdit *lineNom;
    QPushButton *btnCTrait;
    QPushButton *btnCFond;
private:
    GuiPoint *pointA;
    GuiPoint *pointB;
    GuiPoint *pointC;
    QHBoxLayout * nomLayout;
    QHBoxLayout * CtraitLayout;
    QHBoxLayout * CFondLayout;
    QLabel * nomLabel;
    QLabel * nomCTrait;
    QLabel * nomCFond;
    QHBoxLayout *btnLayout;
};

#endif // FORMTRIANGLE_H
