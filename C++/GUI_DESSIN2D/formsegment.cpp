#include "formsegment.h"

formSegment::formSegment()
{

}

void formSegment::affiche()
{
    this->boxPrincipale = new QVBoxLayout();
    this->pointA = new GuiPoint();
    this->pointB = new GuiPoint();
    this->nomLayout = new QHBoxLayout();
    this->lineNom = new QLineEdit();
    this->btnLayout = new QHBoxLayout();
    this->btnValide = new QPushButton();
    this->btnAnnule = new QPushButton();
    this->pointA->labelPoint->setText("Point A :");
    this->pointB->labelPoint->setText("Point B :");
    this->pointA->reinit();
    this->pointB->reinit();
    this->nomLabel = new QLabel("Nom : ");
    this->lineNom->clear();
    this->btnValide->setIcon(QIcon(":/icones/logos/65.png"));
    this->btnAnnule->setIcon(QIcon(":/icones/logos/64.png"));
    this->nomLayout->addWidget(this->nomLabel);
    this->nomLayout->addWidget(this->lineNom);
    this->btnLayout->addWidget(btnValide);
    this->btnLayout->addWidget(btnAnnule);
    this->boxPrincipale->addLayout(this->nomLayout);
    this->boxPrincipale->addLayout(this->pointA->pointLayout);
    this->boxPrincipale->addLayout(this->pointB->pointLayout);
    this->boxPrincipale->addLayout(btnLayout);
}

void formSegment::cache()
{
    this->pointA->detruit();
    this->pointB->detruit();
    delete this->nomLabel;
    delete this->nomLayout;
    delete this->lineNom;
    delete this->btnLayout;
    delete this->btnValide;
    delete this->btnAnnule;
    delete this->boxPrincipale;
}

int formSegment::X1()
{
    return this->pointA->ptx->value();
}

int formSegment::X2()
{
    return this->pointB->ptx->value();
}

int formSegment::Y1()
{
    return this->pointA->pty->value();
}

int formSegment::Y2()
{
    return this->pointB->pty->value();
}
