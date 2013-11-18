#include "fenetreprincipale.h"
#include "ui_fenetreprincipale.h"
#define N 26
fenetrePrincipale::fenetrePrincipale(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::fenetrePrincipale)
{
    //Définition de la fenetre;
    ui->setupUi(this);
    //Definition du stylo
        this->pen1 = new QPen(Qt::red);
        this->pen2 = new QPen(Qt::white);
    //Definition gestion souris
        ui->view->setMouseTracking(true);
    //Définition des formulaires
        this->formSeg = new formSegment();
        this->formCar = new formCarre();
}

fenetrePrincipale::~fenetrePrincipale()
{
    delete ui;
}
//******************************************************************************************************************************************************************************//
//                                                                   Déclaration des fonctions                                                                                  //
//******************************************************************************************************************************************************************************//
    void fenetrePrincipale::afficheFormNvObj(int nb)
    {
        //Création du formulaire
            ui->zoneBtnObjet->setEnabled(false);
            switch (nb)
            {
                case 2:
                    this->formSeg->affiche();
                    QObject::connect(this->formSeg->btnValide, SIGNAL(clicked()), this, SLOT(nouveauObjet()));
                    QObject::connect(this->formSeg->btnAnnule, SIGNAL(clicked()), this, SLOT(annuleNouveauObjet()));
                    ui->layoutDroit->addLayout(this->formSeg->boxPrincipale);
                    break;
                case 4:
                    this->formCar->affiche();
                    QObject::connect(this->formCar->btnValide, SIGNAL(clicked()), this, SLOT(nouveauObjet()));
                    QObject::connect(this->formCar->btnAnnule, SIGNAL(clicked()), this, SLOT(annuleNouveauObjet()));
                    ui->layoutDroit->addLayout(this->formCar->boxPrincipale);
                    break;
                default:
                    break;
            }
    }
//******************************************************************************************************************************************************************************//
//                                                                   Déclaration des slots                                                                                      //
//******************************************************************************************************************************************************************************//
    //*************************** SLOT BTNS DESSINER ***********************************
    void fenetrePrincipale::on_btnSegment_clicked()
    {
        this->obj = SEGMENT;
        afficheFormNvObj(2);
    }

    void fenetrePrincipale::on_btnCarre_clicked()
    {
        this->obj = CARRE;
        afficheFormNvObj(4);
    }
    void fenetrePrincipale::on_btnMultiSegment_clicked()
    {

    }
    void fenetrePrincipale::on_btnTriangle_clicked()
    {
        this->obj = TRIANGLE;
        afficheFormNvObj(3);
    }
    //*************************** AUTRES SLOTS ***********************************
    void fenetrePrincipale::annuleNouveauObjet()
    {
        ui->zoneBtnObjet->setEnabled(true);
        switch (this->obj)
        {
            case SEGMENT:
                this->formSeg->cache();
                break;
            case CARRE:
                this->formCar->cache();
                break;
            default:
                break;
        }
    }
    void fenetrePrincipale::nouveauObjet()
    {
        switch (this->obj)
        {
            case SEGMENT:
                this->traceSeg();
                break;
            case CARRE:
               this->traceRec();
            break;
            case TRIANGLE :
                this->traceTri();
            break;
            case CERCLE :
                this->traceCercle();
            break;
            default:
                break;
        }
    }
    void fenetrePrincipale::traceRec()
    {
        int x1 = this->formCar->X1();
        int x2 = this->formCar->X2();
        int y1 = this->formCar->Y1();
        int y2 = this->formCar->Y2();
        int x3 = this->formCar->X3();
        int x4 = this->formCar->X4();
        int y3 = this->formCar->Y3();
        int y4 = this->formCar->Y4();
        ui->view->scene->addRect(x1,y1,x1+x2,y1+y3,QPen(*this->pen1));
        this->formCar->cache();
    }
    void fenetrePrincipale::traceSeg()
    {
        int x1 = this->formSeg->X1();
        int x2 = this->formSeg->X2();
        int y1 = this->formSeg->Y1();
        int y2 = this->formSeg->Y2();
        ui->view->scene->addLine(x1,y1,x2,y2,QPen(*this->pen1));
        this->formSeg->cache();
    }

    void fenetrePrincipale::traceCercle()
    {
        ui->view->scene->addEllipse(300,300,120,120,QPen(*this->pen1));
    }

    void fenetrePrincipale::traceTri()
    {
        ui->view->scene->addLine(5,5,10,10,QPen(*this->pen1));
        ui->view->scene->addLine(10,10,20,20,QPen(*this->pen1));
        ui->view->scene->addLine(20,20,5,5,QPen(*this->pen1));
    }

    void fenetrePrincipale::traceMultiSeg()
    {

    }
