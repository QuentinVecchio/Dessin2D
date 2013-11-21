#include "presentationobjet.h"

presentationObjet::presentationObjet() : QWidget()
{
    this->nom = new QLabel();
    this->layoutH = new QHBoxLayout();
    this->btnM = new QPushButton();
    this->btnS = new QPushButton();
    this->btnS->setIcon(QIcon(":/icones/logos/minus-sign.png"));
    this->btnM->setIcon(QIcon(":/icones/logos/write.png"));
    this->layoutH->addWidget(this->nom);
    this->layoutH->addWidget(this->btnM);
    this->layoutH->addWidget(this->btnS);
    QObject::connect(this->btnM,SIGNAL(clicked()),this,SLOT(modif()));
    QObject::connect(this->btnS,SIGNAL(clicked()),this,SLOT(supp()));
}

void presentationObjet::cache()
{
    delete this->nom;
    delete this->layoutH;
    delete this->btnM;
    delete this->btnS;
}

void presentationObjet::setNom(QString s)
{
    this->nom->setText(s);
}

void presentationObjet::setFig(QFigure *f)
{
    this->f = f;
}

QString presentationObjet::Nom()
{
    return this->nom->text();
}

void presentationObjet::supp()
{
    int i;
    for(i=0;i<this->f->item.size();i++)
    {
        QMessageBox::about(this, "Info","Je rend invisible\n");
        QGraphicsItem *item = this->f->item[i];
        item->setVisible(false);
    }
    this->cache();
}

void presentationObjet::modif()
{

}
