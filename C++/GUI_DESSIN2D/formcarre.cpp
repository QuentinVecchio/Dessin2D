#include "formcarre.h"

formCarre::formCarre()
{
}

void formCarre::affiche()
{
    this->boxPrincipale = new QVBoxLayout();
    this->pointA = new GuiPoint();
    this->pointB = new GuiPoint();
    this->pointC = new GuiPoint();
    this->pointD = new GuiPoint();
    this->nomLayout = new QHBoxLayout();
    this->lineNom = new QLineEdit();
    this->btnLayout = new QHBoxLayout();
    this->btnValide = new QPushButton();
    this->btnAnnule = new QPushButton();
    this->pointA->labelPoint->setText("Point A :");
    this->pointB->labelPoint->setText("Point B :");
    this->pointC->labelPoint->setText("Point C :");
    this->pointD->labelPoint->setText("Point D :");
    this->pointA->reinit();
    this->pointB->reinit();
    this->pointC->reinit();
    this->pointD->reinit();
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
    this->boxPrincipale->addLayout(this->pointC->pointLayout);
    this->boxPrincipale->addLayout(this->pointD->pointLayout);
    this->boxPrincipale->addLayout(btnLayout);
}

void formCarre::cache()
{
    this->pointA->detruit();
    this->pointB->detruit();
    this->pointC->detruit();
    this->pointD->detruit();
    delete this->nomLabel;
    delete this->nomLayout;
    delete this->lineNom;
    delete this->btnLayout;
    delete this->btnValide;
    delete this->btnAnnule;
    delete this->boxPrincipale;
}

int formCarre::X1()
{
    return this->pointA->ptx->value();
}

int formCarre::X2()
{
    return this->pointB->ptx->value();
}

int formCarre::Y1()
{
    return this->pointA->pty->value();
}

int formCarre::Y2()
{
    return this->pointB->pty->value();
}

int formCarre::X3()
{
    return this->pointC->ptx->value();
}

int formCarre::Y3()
{
    return this->pointC->ptx->value();
}

int formCarre::X4()
{
    return this->pointD->pty->value();
}

int formCarre::Y4()
{
    return this->pointD->pty->value();
}
