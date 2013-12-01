#ifndef PRESENTATIONOBJET_H
#define PRESENTATIONOBJET_H

#include <QtWidgets>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QString>
#include "bu.h"
#include "formcarre.h"
#include "formcercle.h"
#include "formelippse.h"
#include "formsegment.h"
#include "formtriangle.h"
#include "formmultisegment.h"
#include <vector>
#include <QObject>
#include <QPropertyAnimation>
#include <QWidget>

class presentationObjet : public QWidget
{
    Q_OBJECT
public:
    presentationObjet();
    void cache();
    void setNom(QString s);
    void setFig(QFigure *f);
    QString Nom();
    QPushButton *btnT;
    QPushButton *btnR;
    QPushButton *btnM;
    QPushButton *btnS;
    QPushButton *btnV;
    QPushButton *btnA;
    QHBoxLayout * layoutH;
    QVBoxLayout * box;
    formCarre *formCar;
    formCercle *formCer;
    formSegment *formSeg;
    formTriangle *formTri;
    formElippse *formEli;
    formmultisegment *formMultiSeg;
private:
    QFigure *f;
    QSpinBox *spinX;
    QSpinBox *spinY;
    QSpinBox *spinTps;
    QLabel *lX;
    QLabel *lY;
    QLabel *lTps;
    QLabel * nom;
    void annule();
private slots:
    void valideTrans();
    void valideRot();
    void valideModifSeg();
    void valideModifCar();
    void valideModifCer();
    void valideModifEli();
    void valideModifTri();
    void valideModifMultiSeg();
    void annuleTrans();
    void annuleRot();
    void annuleModifSeg();
    void annuleModifCar();
    void annuleModifCer();
    void annuleModifEli();
    void annuleModifTri();
    void annuleModifMultiSeg();
    void modif();
    void supp();
    void rotation();
    void translation();
};
#endif // PRESENTATIONOBJET_H
