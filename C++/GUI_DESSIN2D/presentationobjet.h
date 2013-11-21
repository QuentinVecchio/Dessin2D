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
#include <vector>
#include <QObject>
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
    QPushButton *btnM;
    QPushButton *btnS;
    QHBoxLayout * layoutH;
private:
    QFigure *f;
    QLabel * nom;
private slots:
    void modif();
    void supp();
};
#endif // PRESENTATIONOBJET_H
