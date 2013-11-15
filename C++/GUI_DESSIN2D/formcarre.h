#ifndef FORMCARRE_H
#define FORMCARRE_H

#include <QtWidgets>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QString>
#include "gui_point.h"

class formCarre
{
public:
    formCarre();
    void cache();
    void affiche();
    int X1();
    int X2();
    int Y1();
    int Y2();
    int X3();
    int Y3();
    int X4();
    int Y4();
    QPushButton *btnValide;
    QPushButton *btnAnnule;
    QVBoxLayout *boxPrincipale;
private:
    GuiPoint *pointA;
    GuiPoint *pointB;
    GuiPoint *pointC;
    GuiPoint *pointD;
    QHBoxLayout * nomLayout;
    QLabel * nomLabel;
    QLineEdit *lineNom;
    QHBoxLayout *btnLayout;
};

#endif // FORMCARRE_H
