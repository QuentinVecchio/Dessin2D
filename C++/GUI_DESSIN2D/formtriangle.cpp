#include "formtriangle.h"

formTriangle::formTriangle() : QWidget()
{
}

void formTriangle::affiche()
{
    //Init Box le principale qui contient le formulaire
        this->boxPrincipale = new QVBoxLayout();
    //Init tous les points
        this->pointA = new GuiPoint();
        this->pointB = new GuiPoint();
        this->pointC = new GuiPoint();
        this->pointA->labelPoint->setText("Point A :");
        this->pointB->labelPoint->setText("Point B :");
        this->pointC->labelPoint->setText("Point C :");
        this->pointA->reinit();
        this->pointB->reinit();
        this->pointC->reinit();
    //Init tous les box horizontales
        this->nomLayout = new QHBoxLayout();
        this->CFondLayout = new QHBoxLayout();
        this->CtraitLayout = new QHBoxLayout();
        this->btnLayout = new QHBoxLayout();
    //Init le nom
        this->nomLabel = new QLabel("Nom : ");
        this->lineNom = new QLineEdit();
        this->nomLayout->addWidget(this->nomLabel);
        this->nomLayout->addWidget(this->lineNom);
        this->boxPrincipale->addLayout(this->nomLayout);
        this->lineNom->clear();
    //Init les points
        this->boxPrincipale->addLayout(this->pointA->pointLayout);
        this->boxPrincipale->addLayout(this->pointB->pointLayout);
        this->boxPrincipale->addLayout(this->pointC->pointLayout);
    //Init la couleur du trait
        this->nomCTrait = new QLabel("Couleur du trait :");
        this->btnCTrait = new QPushButton();
        this->btnCTrait->setIcon(QIcon(":/icones/logos/water.png"));
        this->CtraitLayout->addWidget(this->nomCTrait);
        this->CtraitLayout->addWidget(this->btnCTrait);
        this->boxPrincipale->addLayout(this->CtraitLayout);
    //Init la couleur du fond
        this->nomCFond = new QLabel("Couleur du fond :");
        this->btnCFond = new QPushButton();
        this->btnCFond->setIcon(QIcon(":/icones/logos/water.png"));
        this->CFondLayout->addWidget(this->nomCFond);
        this->CFondLayout->addWidget(this->btnCFond);
        this->boxPrincipale->addLayout(this->CFondLayout);
    //Btn de validation
        this->btnValide = new QPushButton();
        this->btnAnnule = new QPushButton();
        this->btnValide->setIcon(QIcon(":/icones/logos/65.png"));
        this->btnAnnule->setIcon(QIcon(":/icones/logos/64.png"));
        this->btnLayout->addWidget(btnValide);
        this->btnLayout->addWidget(btnAnnule);
        this->boxPrincipale->addLayout(btnLayout);
}

void formTriangle::cache()
{
    //Suppression points
        this->pointA->detruit();
        this->pointB->detruit();
        this->pointC->detruit();
    //Suppression nom
        delete this->nomLabel;
        delete this->nomLayout;
        delete this->lineNom;
    //Suppresion couleur trait
        delete this->nomCTrait;
        delete this->btnCTrait;
        delete this->CtraitLayout;
    //Suppresion couleur trait
        delete this->nomCFond;
        delete this->btnCFond;
        delete this->CFondLayout;
    //Suppresion btn valide
        delete this->btnLayout;
        delete this->btnValide;
        delete this->btnAnnule;
    //Suppresion de tout le box
        delete this->boxPrincipale;
}

int formTriangle::X1()
{
    return this->pointA->ptx->value();
}

int formTriangle::X2()
{
    return this->pointB->ptx->value();
}

int formTriangle::Y1()
{
    return this->pointA->pty->value();
}

int formTriangle::Y2()
{
    return this->pointB->pty->value();
}

int formTriangle::X3()
{
    return this->pointC->ptx->value();
}

int formTriangle::Y3()
{
    return this->pointC->ptx->value();
}

