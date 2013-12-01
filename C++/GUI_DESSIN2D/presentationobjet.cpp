#include "presentationobjet.h"

//Constructeur de l'objet présenation de l'objet
presentationObjet::presentationObjet() : QWidget()
{
    this->formSeg = new formSegment();
    this->formCar = new formCarre();
    this->formCer = new formCercle();
    this->formEli = new formElippse();
    this->formTri = new formTriangle();
    this->formMultiSeg = new formmultisegment();
    this->f = new QFigure();
    this->box = new QVBoxLayout();
    this->nom = new QLabel(this->f->nom);
    this->layoutH = new QHBoxLayout();
    this->btnT = new QPushButton();
    this->btnR = new QPushButton();
    this->btnM = new QPushButton();
    this->btnS = new QPushButton();
    this->btnR->setIcon(QIcon(":/icones/logos/arrow-small-18.png"));
    this->btnT->setIcon(QIcon(":/icones/logos/arrow-big-11.png"));
    this->btnS->setIcon(QIcon(":/icones/logos/croix.png"));
    this->btnM->setIcon(QIcon(":/icones/logos/write.png"));
    this->btnS->setStatusTip("Supprimer");
    this->btnM->setStatusTip("Modifer");
    this->btnT->setStatusTip("Translation");
    this->btnR->setStatusTip("Rotation");
    this->layoutH->addWidget(this->nom);
    this->layoutH->addWidget(this->btnT);
    this->layoutH->addWidget(this->btnR);
    this->layoutH->addWidget(this->btnM);
    this->layoutH->addWidget(this->btnS);
    this->box->addLayout(this->layoutH);
    QObject::connect(this->btnT,SIGNAL(clicked()),this,SLOT(translation()));
    QObject::connect(this->btnR,SIGNAL(clicked()),this,SLOT(rotation()));
    QObject::connect(this->btnM,SIGNAL(clicked()),this,SLOT(modif()));
    QObject::connect(this->btnS,SIGNAL(clicked()),this,SLOT(supp()));
}

//Cache la présenation de l'objet
void presentationObjet::cache()
{
    delete this->nom;
    delete this->layoutH;
    delete this->btnT;
    delete this->btnR;
    delete this->btnM;
    delete this->btnS;
    delete this->box;
}

//Setters
void presentationObjet::setNom(QString s)
{
    this->nom->setText(s);
}

void presentationObjet::setFig(QFigure *f)
{
    this->f = f;
}

//Getters
QString presentationObjet::Nom()
{
    return this->nom->text();
}

//********************************************SLOT TRANSLATION******************************************
void presentationObjet::translation()
{
    //On supprime les btns existant
        delete this->btnT;
        delete this->btnR;
        delete this->btnM;
        delete this->btnS;
    //On crée les labels
        this->lX = new QLabel("x :");
        this->lY = new QLabel("y : ");
    //On crée les spinbox
        this->spinX = new QSpinBox();
        this->spinY = new QSpinBox();
        this->spinTps = new QSpinBox();
        this->spinX->setMaximum(999);
        this->spinX->setMinimum(-999);
        this->spinY->setMaximum(999);
        this->spinY->setMinimum(-999);
        this->spinTps->setMinimum(0);
        this->spinTps->setMaximum(10000);
    //On crée les btn
        this->btnV = new QPushButton();
        this->btnA = new QPushButton();
        this->btnV->setIcon(QIcon(":/icones/logos/65.png"));
        this->btnA->setIcon(QIcon(":/icones/logos/64.png"));
        this->layoutH->addWidget(this->lX);
        this->layoutH->addWidget(this->spinX);
        this->layoutH->addWidget(this->lY);
        this->layoutH->addWidget(this->spinY);
        this->layoutH->addWidget(this->spinTps);
        this->layoutH->addWidget(this->btnV);
        this->layoutH->addWidget(this->btnA);
        QObject::connect(this->btnV,SIGNAL(clicked()),this,SLOT(valideTrans()));
        QObject::connect(this->btnA,SIGNAL(clicked()),this,SLOT(annuleTrans()));
}

//Slot valide translation
void presentationObjet::valideTrans()
{
    Anim a;
    a.x = this->spinX->value();
    a.y = this->spinY->value();
    a.tps = this->spinTps->value();
    this->f->pileAnim.push_back(a);
    this->f->estAnim = true;
    this->btnA->click();
}

//Slot annule la translation
void presentationObjet::annuleTrans()
{
    delete this->btnA;
    delete this->btnV;
    delete this->lX;
    delete this->lY;
    delete this->spinX;
    delete this->spinY;
    delete this->spinTps;
    this->annule();
}

//********************************************SLOT ROTATION******************************************
void presentationObjet::rotation()
{
    //On supprime les btns existant
        delete this->btnT;
        delete this->btnR;
        delete this->btnM;
        delete this->btnS;
    //On crée les labels
        this->lX = new QLabel("Angle :");
    //On crée les spinbox
        this->spinX = new QSpinBox();
        this->spinY = new QSpinBox();
        this->spinX->setMaximum(360);
        this->spinX->setMinimum(0);
    //On crée les btn
        this->btnV = new QPushButton();
        this->btnA = new QPushButton();
        this->btnV->setIcon(QIcon(":/icones/logos/65.png"));
        this->btnA->setIcon(QIcon(":/icones/logos/64.png"));
        this->layoutH->addWidget(this->lX);
        this->layoutH->addWidget(this->spinX);
        this->layoutH->addWidget(this->btnV);
        this->layoutH->addWidget(this->btnA);
        QObject::connect(this->btnV,SIGNAL(clicked()),this,SLOT(valideRot()));
        QObject::connect(this->btnA,SIGNAL(clicked()),this,SLOT(annuleRot()));
}

//Slot valide translation
void presentationObjet::valideRot()
{
    int x = this->spinX->value();
    int i;
    for(i=0;i<this->f->item.size();i++)
    {
        QGraphicsItem *item = this->f->item[i];
        item->setTransformOriginPoint(this->f->oX,this->f->oY);
        item->setRotation(x);
    }
    this->btnA->click();
}

//Slot annule la translation
void presentationObjet::annuleRot()
{
    delete this->btnA;
    delete this->btnV;
    delete this->lX;
    delete this->spinX;
    this->annule();
}

//********************************************SLOT MODIFCATION******************************************
void presentationObjet::modif()
{
    //On supprime les btns existant
        delete this->btnT;
        delete this->btnR;
        delete this->btnM;
        delete this->btnS;
    switch (this->f->o)
    {
        case SEGMENT:
            this->formSeg = new formSegment();
            this->formSeg->affiche();
            QObject::connect(this->formSeg->btnValide, SIGNAL(clicked()), this, SLOT(valideModifSeg()));
            QObject::connect(this->formSeg->btnAnnule, SIGNAL(clicked()), this, SLOT(annuleModifSeg()));
            this->formSeg->lineNom->setText(this->f->nom);
            this->box->addLayout(this->formSeg->boxPrincipale);
            break;
        case CERCLE:
            this->formCer = new formCercle();
            this->formCer->affiche();
            QObject::connect(this->formCer->btnValide, SIGNAL(clicked()), this, SLOT(valideModifCer()));
            QObject::connect(this->formCer->btnAnnule, SIGNAL(clicked()), this, SLOT(annuleModifCer()));
            this->box->addLayout(this->formCer->boxPrincipale);
            break;
        case ELLIPSE:
            this->formEli = new formElippse();
            this->formEli->affiche();
            QObject::connect(this->formEli->btnValide, SIGNAL(clicked()), this, SLOT(valideModifEli()));
            QObject::connect(this->formEli->btnAnnule, SIGNAL(clicked()), this, SLOT(annuleModifELi()));
            this->box->addLayout(this->formEli->boxPrincipale);
            break;
        case TRIANGLE:
            this->formTri = new formTriangle();
            this->formTri->affiche();
            QObject::connect(this->formTri->btnValide, SIGNAL(clicked()), this, SLOT(valideModifTri()));
            QObject::connect(this->formTri->btnAnnule, SIGNAL(clicked()), this, SLOT(annuleModifTri()));
            this->box->addLayout(this->formTri->boxPrincipale);
            break;
        case CARRE:
            this->formCar = new formCarre();
            this->formCar->affiche();
            QObject::connect(this->formCar->btnValide, SIGNAL(clicked()), this, SLOT(valideModifCar()));
            QObject::connect(this->formCar->btnAnnule, SIGNAL(clicked()), this, SLOT(annuleModifCar()));
            this->box->addLayout(this->formCar->boxPrincipale);
            break;
        case MULTISEG :
            this->formMultiSeg = new formmultisegment();
            this->formMultiSeg->nombrePoint = this->f->item.size();
            this->formMultiSeg->affiche(this->f->item.size()+1);
            QObject::connect(this->formMultiSeg->btnValide, SIGNAL(clicked()), this, SLOT(valideModifMultiSeg()));
            QObject::connect(this->formMultiSeg->btnAnnule, SIGNAL(clicked()), this, SLOT(annuleModifMultiSeg()));
            this->box->addLayout(this->formMultiSeg->boxPrincipale);
            break;
        default:
            break;
    }
}
void presentationObjet::valideModifSeg()
{
    //On récupère les nouvelles coordonnées
        int x1 = this->formSeg->X1();
        int y1 = this->formSeg->Y1();
        int x2 = this->formSeg->X2();
        int y2 = this->formSeg->Y2();
    //On crée un nouvelle objet
        Segment s(Point2D(x1,y1),Point2D(x2,y2));
    //On réaffecte le nouvelle objet dans la structure
        this->f->f = s;
    //On crée un nouvelle item et on l'affecte

    //On change le nom
        this->f->nom = this->formSeg->lineNom->text();
        this->nom->setText(this->f->nom);
    //On cache le formulaire
        this->formSeg->btnAnnule->click();
}

void presentationObjet::valideModifCar()
{
    //On récupère les nouvelles coordonnées
        int x1 = this->formCar->X1();
        int y1 = this->formCar->Y1();
        int x2 = this->formCar->X2();
        int y2 = this->formCar->Y2();
        int x3 = this->formCar->X3();
        int y3 = this->formCar->Y3();
        int x4 = this->formCar->X4();
        int y4 = this->formCar->Y4();
    //On crée un nouvelle objet
        Rectangle r(Point2D(x1,y1),Point2D(x2,y2),Point2D(x3,y3),Point2D(x4,y4));
    //On réaffecte le nouvelle objet dans la structure
        this->f->f = r;
    //On crée un nouvelle item et on l'affecte
        QGraphicsRectItem *item = new QGraphicsRectItem();
        item->setRect(x1,y1,x2-x1,y3-y1);
    //On change le nom
        this->f->nom = this->formCar->lineNom->text();
        this->nom->setText(this->f->nom);
    //On cache le formulaire
        this->formCar->btnAnnule->click();
}

void presentationObjet::valideModifCer()
{
    //On récupère les nouvelles coordonnées
        int x1 = this->formCer->X1();
        int y1 = this->formCer->Y1();
        int r = this->formCer->ChangeRayon->value();
    //On crée un nouvelle objet
        Cercle c(Point2D(x1,y1),r);
    //On réaffecte le nouvelle objet dans la structure
         this->f->f = c;
    //On crée un nouvelle item et on l'affecte
        QGraphicsEllipseItem *item = new QGraphicsEllipseItem(x1,y1,r,r);
        this->f->item[0] = item;
    //On change le nom
        this->f->nom = this->formCer->lineNom->text();
        this->nom->setText(this->f->nom);
    //On cache le formulaire
        this->formCer->btnAnnule->click();
}

void presentationObjet::valideModifEli()
{
    //On récupère les nouvelles coordonnées
        int x1 = this->formEli->X1();
        int y1 = this->formEli->Y1();
        int x2 = this->formEli->X2();
        int y2 = this->formEli->Y2();
        int r = this->formEli->ChangeRayon->value();
    //On crée un nouvelle objet
        Elippse e(Point2D(x1,y1),Point2D(x2,y2),r);
    //On réaffecte le nouvelle objet dans la structure
         this->f->f = e;
    //On crée un nouvelle item et on l'affecte
        QGraphicsEllipseItem *item = new QGraphicsEllipseItem(x1,y1,r,r);
        this->f->item[0] = item;
    //On change le nom
        this->f->nom = this->formEli->lineNom->text();
        this->nom->setText(this->f->nom);
    //On cache le formulaire
        this->formEli->btnAnnule->click();

}

void presentationObjet::valideModifTri()
{
    //On récupère les nouvelles coordonnées
        int x1 = this->formTri->X1();
        int y1 = this->formTri->Y1();
        int x2 = this->formTri->X2();
        int y2 = this->formTri->Y2();
        int x3 = this->formTri->X3();
        int y3 = this->formTri->Y3();
    //On crée un nouvelle objet
        Triangle t(Point2D(x1,y1),Point2D(x2,y2),Point2D(x3,y3));
    //On réaffecte le nouvelle objet dans la structure
        this->f->f = t;
    //On crée un nouvelle item et on l'affecte
        QGraphicsLineItem *item = new QGraphicsLineItem(x1,y1,x2,y2);
        this->f->item[0] = item;
        item = new QGraphicsLineItem(x2,y2,x3,y3);
        this->f->item[1] = item;
        item = new QGraphicsLineItem(x3,y3,x1,y1);
        this->f->item[2] = item;
    //On change le nom
        this->f->nom = this->formTri->lineNom->text();
        this->nom->setText(this->f->nom);
    //On cache le formulaire
        this->formTri->btnAnnule->click();
}

void presentationObjet::valideModifMultiSeg()
{
        int i;
        GuiPoint *p1 = this->formMultiSeg->point[0];
        for(i=1;i<this->formMultiSeg->Nombre();i++)
        {
            GuiPoint *p2 = this->formMultiSeg->point[i];
            //Traçage de la figure dans le QGraphicsScene
            //QGraphicsItem *item = ui->view->scene->addLine(p1->ptx->value(),p1->pty->value(),p2->ptx->value(),p2->pty->value(),QPen(this->colorT));
            //Ajout du pointeur sur le tracé de la figure
            //fig->item.push_back(item);
            p1 = this->formMultiSeg->point[i];
        }
    //On change le nom
        this->f->nom = this->formMultiSeg->lineNom->text();
        this->nom->setText(this->f->nom);
        this->formMultiSeg->btnAnnule->click();

}

void presentationObjet::annuleModifSeg()
{
    this->formSeg->cache();
    this->annule();
}

void presentationObjet::annuleModifCar()
{
    this->formCar->cache();
    this->annule();
}
void presentationObjet::annuleModifCer()
{
    this->formCer->cache();
    this->annule();
}
void presentationObjet::annuleModifEli()
{
    this->formEli->cache();
    this->annule();
}
void presentationObjet::annuleModifTri()
{
    this->formTri->cache();
    this->annule();
}
void presentationObjet::annuleModifMultiSeg()
{
    this->formMultiSeg->cache();
    this->annule();
}

//********************************************SLOT SUPPRIME******************************************
void presentationObjet::supp()
{
    int i;
    for(i=0;i<this->f->item.size();i++)
    {
        QGraphicsItem *item = this->f->item[i];
        item->setVisible(false);
    }
    this->f->etat = false;
    this->cache();
}

//Fonctions
void presentationObjet::annule()
{
    this->btnT = new QPushButton();
    this->btnM = new QPushButton();
    this->btnS = new QPushButton();
    this->btnR = new QPushButton();
    this->btnR->setIcon(QIcon(":/icones/logos/arrow-small-18.png"));
    this->btnT->setIcon(QIcon(":/icones/logos/arrow-big-11.png"));
    this->btnS->setIcon(QIcon(":/icones/logos/croix.png"));
    this->btnM->setIcon(QIcon(":/icones/logos/write.png"));
    this->btnR->setStatusTip("Rotation");
    this->btnS->setStatusTip("Supprimer");
    this->btnM->setStatusTip("Modifer");
    this->btnT->setStatusTip("Translation");
    this->layoutH->addWidget(this->btnT);
    this->layoutH->addWidget(this->btnR);
    this->layoutH->addWidget(this->btnM);
    this->layoutH->addWidget(this->btnS);
    QObject::connect(this->btnT,SIGNAL(clicked()),this,SLOT(translation()));
    QObject::connect(this->btnR,SIGNAL(clicked()),this,SLOT(rotation()));
    QObject::connect(this->btnM,SIGNAL(clicked()),this,SLOT(modif()));
    QObject::connect(this->btnS,SIGNAL(clicked()),this,SLOT(supp()));
}

