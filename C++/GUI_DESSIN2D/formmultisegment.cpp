#include "formmultisegment.h"

formmultisegment::formmultisegment() : QWidget()
{
}

void formmultisegment::affiche(int n)
{
    int i;
    //Init Box le principale qui contient le formulaire
        this->boxPrincipale = new QVBoxLayout();
        this->pointLayout = new QVBoxLayout();
    //Init tous les points
        for(i=0;i<n;i++)
        {
            GuiPoint *p =  new GuiPoint();
            this->point.push_back(p);
        }
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
        this->nombrePoint = 0;
        for(i=0;i<n;i++)
        {
            GuiPoint *p = this->point[i];
            p->labelPoint->setText("Point :");
            p->reinit();
            this->pointLayout->addLayout(p->pointLayout);
            this->nombrePoint++;
        }
        this->boxPrincipale->addLayout(this->pointLayout);
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
        this->btnAjout = new QPushButton();
        this->btnValide->setIcon(QIcon(":/icones/logos/65.png"));
        this->btnAnnule->setIcon(QIcon(":/icones/logos/64.png"));
        this->btnAjout->setIcon(QIcon(":/icones/logos/plus-sign.png"));
        this->btnLayout->addWidget(btnAjout);
        this->btnLayout->addWidget(btnValide);
        this->btnLayout->addWidget(btnAnnule);
        this->boxPrincipale->addLayout(btnLayout);
        QObject::connect(this->btnAjout,SIGNAL(clicked()),this,SLOT(ajout()));
}

void formmultisegment::cache()
{
    int i;
    //Suppression points
        for(i = this->point.size()-1; i >= 0;i--)
        {
            GuiPoint *p = this->point[i];
            p->detruit();
            this->point.pop_back();
            this->nombrePoint--;
        }
        delete  this->pointLayout;
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
        delete this->btnAjout;
        delete this->btnValide;
        delete this->btnAnnule;
    //Suppresion de tout le box
        delete this->boxPrincipale;
}

int formmultisegment::Nombre()
{
    return this->nombrePoint;
}

void formmultisegment::ajout()
{
    GuiPoint *p =  new GuiPoint();
    this->point.push_back(p);
    p->labelPoint->setText("Point :");
    p->reinit();
    this->pointLayout->addLayout(p->pointLayout);
    this->nombrePoint++;
}
