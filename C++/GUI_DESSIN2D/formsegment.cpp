#include "formsegment.h"

formSegment::formSegment() : QWidget()
{
}

void formSegment::affiche()
{
    //Init Box le principale qui contient le formulaire
        this->boxPrincipale = new QVBoxLayout();
    //Init tous les points
        this->pointA = new GuiPoint();
        this->pointB = new GuiPoint();
        this->pointA->labelPoint->setText("Point A :");
        this->pointB->labelPoint->setText("Point B :");
        this->pointA->reinit();
        this->pointB->reinit();
    //Init tous les box horizontales
        this->nomLayout = new QHBoxLayout();
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
    //Init la couleur du trait
        this->nomCTrait = new QLabel("Couleur du trait :");
        this->btnCTrait = new QPushButton();
        this->btnCTrait->setIcon(QIcon(":/icones/logos/water.png"));
        this->CtraitLayout->addWidget(this->nomCTrait);
        this->CtraitLayout->addWidget(this->btnCTrait);
        this->boxPrincipale->addLayout(this->CtraitLayout);
    //Btn de validation
        this->btnValide = new QPushButton();
        this->btnAnnule = new QPushButton();
        this->btnValide->setIcon(QIcon(":/icones/logos/65.png"));
        this->btnAnnule->setIcon(QIcon(":/icones/logos/64.png"));
        this->btnLayout->addWidget(btnValide);
        this->btnLayout->addWidget(btnAnnule);
        this->boxPrincipale->addLayout(btnLayout);
}

void formSegment::cache()
{
    //Suppression points
        this->pointA->detruit();
        this->pointB->detruit();
    //Suppression nom
        delete this->nomLabel;
        delete this->nomLayout;
        delete this->lineNom;
    //Suppresion couleur trait
        delete this->nomCTrait;
        delete this->btnCTrait;
        delete this->CtraitLayout;
    //Suppresion btn valide
        delete this->btnLayout;
        delete this->btnValide;
        delete this->btnAnnule;
    //Suppresion de tout le box
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
