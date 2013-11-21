#include "fenetreprincipale.h"
#include "ui_fenetreprincipale.h"
#define N 26
fenetrePrincipale::fenetrePrincipale(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::fenetrePrincipale)
{
    //Définition de la fenetre;
        ui->setupUi(this);
    //Definition gestion souris
        ui->view->setMouseTracking(true);
    //Définition des formulaires
        this->formSeg = new formSegment();
        this->formCar = new formCarre();
        this->formTri = new formTriangle();
        this->formCer = new formCercle();
        this->formEli = new formElippse();
    //label
        ui->view->labelX = ui->labelX;
        ui->view->labelY = ui->labelY;
}

fenetrePrincipale::~fenetrePrincipale()
{
    delete ui;
}
//******************************************************************************************************************************************************************************//
//                                                                   Déclaration des fonctions                                                                                  //
//******************************************************************************************************************************************************************************//
    void fenetrePrincipale::afficheFormNvObj()
    {
        //Création du formulaire
            ui->btnCarre->setEnabled(false);
            ui->btnCercle->setEnabled(false);
            ui->btnEllipse->setEnabled(false);
            ui->btnMultiSegment->setEnabled(false);
            ui->btnSegment->setEnabled(false);
            ui->btnTriangle->setEnabled(false);
            switch (this->obj)
            {
                case SEGMENT:
                    this->formSeg->affiche();
                    QObject::connect(this->formSeg->btnValide, SIGNAL(clicked()), this, SLOT(nouveauObjet()));
                    QObject::connect(this->formSeg->btnAnnule, SIGNAL(clicked()), this, SLOT(annuleNouveauObjet()));
                    QObject::connect(this->formSeg->btnCTrait, SIGNAL(clicked()), this, SLOT(couleurT()));
                    ui->layoutDroit->addLayout(this->formSeg->boxPrincipale);
                    break;
                case CERCLE:
                    this->formCer->affiche();
                    QObject::connect(this->formCer->btnValide, SIGNAL(clicked()), this, SLOT(nouveauObjet()));
                    QObject::connect(this->formCer->btnAnnule, SIGNAL(clicked()), this, SLOT(annuleNouveauObjet()));
                    QObject::connect(this->formCer->btnCFond, SIGNAL(clicked()), this, SLOT(couleurF()));
                    QObject::connect(this->formCer->btnCTrait, SIGNAL(clicked()), this, SLOT(couleurT()));
                    ui->layoutDroit->addLayout(this->formCer->boxPrincipale);
                    break;
                case ELLIPSE:
                    this->formEli->affiche();
                    QObject::connect(this->formEli->btnValide, SIGNAL(clicked()), this, SLOT(nouveauObjet()));
                    QObject::connect(this->formEli->btnAnnule, SIGNAL(clicked()), this, SLOT(annuleNouveauObjet()));
                    QObject::connect(this->formEli->btnCFond, SIGNAL(clicked()), this, SLOT(couleurF()));
                    QObject::connect(this->formEli->btnCTrait, SIGNAL(clicked()), this, SLOT(couleurT()));
                    ui->layoutDroit->addLayout(this->formEli->boxPrincipale);
                    break;
                case TRIANGLE:
                    this->formTri->affiche();
                    QObject::connect(this->formTri->btnValide, SIGNAL(clicked()), this, SLOT(nouveauObjet()));
                    QObject::connect(this->formTri->btnAnnule, SIGNAL(clicked()), this, SLOT(annuleNouveauObjet()));
                    QObject::connect(this->formTri->btnCFond, SIGNAL(clicked()), this, SLOT(couleurF()));
                    QObject::connect(this->formTri->btnCTrait, SIGNAL(clicked()), this, SLOT(couleurT()));
                    ui->layoutDroit->addLayout(this->formTri->boxPrincipale);
                    break;
                case CARRE:
                    this->formCar->affiche();
                    QObject::connect(this->formCar->btnValide, SIGNAL(clicked()), this, SLOT(nouveauObjet()));
                    QObject::connect(this->formCar->btnAnnule, SIGNAL(clicked()), this, SLOT(annuleNouveauObjet()));
                    QObject::connect(this->formCar->btnCFond, SIGNAL(clicked()), this, SLOT(couleurF()));
                    QObject::connect(this->formCar->btnCTrait, SIGNAL(clicked()), this, SLOT(couleurT()));
                    ui->layoutDroit->addLayout(this->formCar->boxPrincipale);
                    break;
                default:
                    break;
            }
    }
//******************************************************************************************************************************************************************************//
//                                                                   Déclaration des slots                                                                                      //
//******************************************************************************************************************************************************************************//
    //*************************** SLOT MENUS ***********************************
    void fenetrePrincipale::on_actionImprimer_triggered()
    {
        QMessageBox::about(this, "Info","Cette fonctionnalité sera développée prochainement\n");
    }

    void fenetrePrincipale::on_actionQuitter_3_triggered()
    {
        this->close();
    }

    void fenetrePrincipale::on_actionPlein_cran_triggered()
    {
        this->setWindowState(this->windowState() ^ Qt::WindowFullScreen);
    }

    void fenetrePrincipale::on_actionTutoriels_triggered()
    {
        QMessageBox::about(this, "Info","Cette fonctionnalité sera développée prochainement\n");
    }

    void fenetrePrincipale::on_actionD_veloppeur_triggered()
    {
        QMessageBox::about(this, "Développeurs",
                    "Cette application a été développé par :\n" \
                    "Matthieu Clin\n" \
                    "Quentin Vecchio\n");
    }

    void fenetrePrincipale::on_actionZoom_triggered()
    {
        ui->view->scale(2,2);
    }

    void fenetrePrincipale::on_actionZoom_2_triggered()
    {
        ui->view->scale(0.5,0.5);
    }

    void fenetrePrincipale::on_actionVue_ensemble_triggered()
    {
        ui->view->scale(0.5,0.5);
    }

    void fenetrePrincipale::on_actionCalculette_triggered()
    {
         QMessageBox::about(this, "Info","Cette fonctionnalité sera développée prochainement\n");
    }

    void fenetrePrincipale::on_actionMath_matique_triggered()
    {
        QMessageBox::about(this, "Info","Cette fonctionnalité sera développée prochainement\n");
    }

    void fenetrePrincipale::on_actionPr_c_dent_triggered()
    {
        QMessageBox::about(this, "Info","Cette fonctionnalité sera développée prochainement\n");
    }

    void fenetrePrincipale::on_actionSuivant_triggered()
    {
         QMessageBox::about(this, "Info","Cette fonctionnalité sera développée prochainement\n");
    }
    //*************************** SLOT BTNS DESSINER ***********************************
    void fenetrePrincipale::on_btnSegment_clicked()
    {
        this->obj = SEGMENT;
        afficheFormNvObj();
    }
    void fenetrePrincipale::on_btnCercle_clicked()
    {
        this->obj = CERCLE;
        afficheFormNvObj();
    }
    void fenetrePrincipale::on_btnEllipse_clicked()
    {
        this->obj = ELLIPSE;
        afficheFormNvObj();
    }
    void fenetrePrincipale::on_btnCarre_clicked()
    {
        this->obj = CARRE;
        afficheFormNvObj();
    }
    void fenetrePrincipale::on_btnMultiSegment_clicked()
    {
        this->obj = MULTISEG;
        afficheFormNvObj();
    }
    void fenetrePrincipale::on_btnTriangle_clicked()
    {
        this->obj = TRIANGLE;
        afficheFormNvObj();
    }
    //*************************** AUTRES SLOTS ***********************************
    void fenetrePrincipale::annuleNouveauObjet()
    {
        ui->btnCarre->setEnabled(true);
        ui->btnCercle->setEnabled(true);
        ui->btnEllipse->setEnabled(true);
        ui->btnMultiSegment->setEnabled(true);
        ui->btnSegment->setEnabled(true);
        ui->btnTriangle->setEnabled(true);
        switch (this->obj)
        {
            case SEGMENT:
                this->formSeg->cache();
                break;
            case CARRE:
                this->formCar->cache();
                break;
            case TRIANGLE:
                this->formTri->cache();
                break;
            case CERCLE :
                this->formCer->cache();
                break;
            case ELLIPSE :
                this->formEli->cache();
                break;
            case MULTISEG :
                this->traceMultiSeg();
                break;
            default:
                break;
        }
    }
    void fenetrePrincipale::nouveauObjet()
    {
        ui->btnCarre->setEnabled(true);
        ui->btnCercle->setEnabled(true);
        ui->btnEllipse->setEnabled(true);
        ui->btnMultiSegment->setEnabled(true);
        ui->btnSegment->setEnabled(true);
        ui->btnTriangle->setEnabled(true);
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
            case ELLIPSE :
                this->traceElippse();
                break;
            case MULTISEG :
                this->traceMultiSeg();
                break;
            default:
                break;
        }
    }

    void fenetrePrincipale::rafraichir()
    {
    }

    void fenetrePrincipale::couleurF()
    {
        this->colorF = QColorDialog::getColor("Couleur du fond");
    }

    void fenetrePrincipale::couleurT()
    {
        this->colorT = QColorDialog::getColor("Couleur du trait");
    }

//******************************************************************************************************************************************************************************//
//                                                                   Déclaration des méthodes                                                                                   //
//******************************************************************************************************************************************************************************//
    void fenetrePrincipale::traceRec()
    {
        //Création de la structure figure
            QFigure *fig;
        //Création d'un dessin
            QDessin d;
        //Initialisation d'un nouveau panel de gestion d'objet
            presentationObjet *pre = new presentationObjet();
        //On récupère les valeurs
            int x1 = this->formCar->X1();
            int y1 = this->formCar->Y1();
            int x2 = this->formCar->X2();
            int y2 = this->formCar->Y2();
            int x3 = this->formCar->X3();
            int y3 = this->formCar->Y3();
            int x4 = this->formCar->X4();
            int y4 = this->formCar->Y4();
            fig->nom = this->formCar->lineNom->text();
        //Création de la figure rectangle
            Rectangle r(Point2D(x1,y1),Point2D(x2,y2),Point2D(x3,y3),Point2D(x4,y4));
        //on met le rectangle dans la structure figure
            fig->f = r;
        //Définiton de la couleur du fond de l'objet
            QPalette cpalette = palette();
            QBrush brush(this->colorF);
            brush.setStyle(Qt::SolidPattern);
            cpalette.setBrush(QPalette::Active, QPalette::Window, brush);
        //Traçage de la figure dans le QGraphicsScene
            QGraphicsItem *item = ui->view->scene->addRect(x1,y1,x2-x1,y3-y1,QPen(this->colorT),brush);
        //Ajout du pointeur sur le tracé de la figure
            fig->item.push_back(item);
        //Ajout de la figure au dessin
            d.f = fig;
            d.id = this->dessin.size() + 1;
        //ajout du type dessin dans le dessin technique
            this->dessin.push_back(d);
        //Affichage et configuration du nv panel
            pre->setFig(fig);
            pre->setNom(fig->nom);
            ui->zoneControleObj->addLayout(pre->layoutH,this->dessin.size(),1,1,3);
        //On supprime le formulaire
            this->formCar->cache();
    }
    void fenetrePrincipale::traceSeg()
    {
        //Création de la structure figure
            QFigure *fig;
        //Création d'un dessin
            QDessin d;
        //Initialisation d'un nouveau panel de gestion d'objet
            presentationObjet *pre = new presentationObjet();
        //On récupère les valeurs
            int x1 = this->formSeg->X1();
            int y1 = this->formSeg->Y1();
            int x2 = this->formSeg->X2();
            int y2 = this->formSeg->Y2();
            fig->nom = this->formSeg->lineNom->text();
        //Création de la figure segment
            Segment s(Point2D(x1,y1),Point2D(x2,y2));
        //on met le segment dans la structure figure
            fig->f = s;
        //Traçage de la figure dans le QGraphicsScene
            QGraphicsItem *item = ui->view->scene->addLine(x1,y1,x2,y2,QPen(this->colorT));
        //Ajout du pointeur sur le tracé de la figure
            fig->item.push_back(item);
        //Ajout de la figure au dessin
            d.f = fig;
            d.id = this->dessin.size() + 1;
        //ajout du type dessin dans le dessin technique
            this->dessin.push_back(d);
        //Affichage et configuration du nv panel
            pre->setFig(fig);
            pre->setNom(fig->nom);
            ui->zoneControleObj->addLayout(pre->layoutH,this->dessin.size(),1,1,3);
        //On supprime le formulaire
            this->formSeg->cache();
    }

    void fenetrePrincipale::traceCercle()
    {
        //Création de la structure figure
            QFigure *fig;
       //Création d'un dessin
            QDessin d;
        //Initialisation d'un nouveau panel de gestion d'objet
            presentationObjet *pre = new presentationObjet();
        //On récupère les valeurs
            int x1 = this->formCer->X1();
            int y1 = this->formCer->Y1();
            int r = this->formCer->ChangeRayon->value();
            fig->nom = this->formCer->lineNom->text();
        //Création de la figure segment
            Cercle c(Point2D(x1,y1),r);
        //on met le segment dans la structure figure
            fig->f = c;
        //Définiton de la couleur du fond de l'objet
            QPalette cpalette = palette();
            QBrush brush(this->colorF);
            brush.setStyle(Qt::SolidPattern);
            cpalette.setBrush(QPalette::Active, QPalette::Window, brush);
        //Traçage de la figure dans le QGraphicsScene
            QGraphicsItem *item = ui->view->scene->addEllipse(x1,y1,r,r,QPen(this->colorT),brush);
        //Ajout du pointeur sur le tracé de la figure
            fig->item.push_back(item);
        //Ajout de la figure au dessin
            d.f = fig;
            d.id = this->dessin.size() + 1;
        //ajout du type dessin dans le dessin technique
                this->dessin.push_back(d);
        //Affichage et configuration du nv panel
            pre->setFig(fig);
            pre->setNom(fig->nom);
            ui->zoneControleObj->addLayout(pre->layoutH,this->dessin.size(),1,1,3);
        //On supprime le formulaire
            this->formCer->cache();
    }

    void fenetrePrincipale::traceTri()
    {
        //Création de la structure figure
            QFigure *fig;
       //Création d'un dessin
            QDessin d;
        //Initialisation d'un nouveau panel de gestion d'objet
            presentationObjet *pre = new presentationObjet();
        //On récupère les valeurs
            int x1 = this->formTri->X1();
            int x2 = this->formTri->X2();
            int y1 = this->formTri->Y1();
            int y2 = this->formTri->Y2();
            int x3 = this->formTri->X3();
            int y3 = this->formTri->Y3();
            fig->nom = this->formTri->lineNom->text();
        //Création de la figure rectangle
            Triangle t(Point2D(x1,y1),Point2D(x2,y2),Point2D(x3,y3));
        //on met le rectangle dans la structure figure
            fig->f = t;
        //Définiton de la couleur du fond de l'objet
            QPalette cpalette = palette();
            QBrush brush(this->colorF);
            brush.setStyle(Qt::SolidPattern);
            cpalette.setBrush(QPalette::Active, QPalette::Window, brush);
        //Traçage de la figure dans le QGraphicsScene
            QGraphicsItem *item = ui->view->scene->addLine(x1,y1,x2,y2,QPen(this->colorT));
            fig->item.push_back(item);
            item = ui->view->scene->addLine(x2,y2,x3,y3,QPen(this->colorT));
            fig->item.push_back(item);
            item = ui->view->scene->addLine(x1,y1,x3,y3,QPen(this->colorT));
            fig->item.push_back(item);
        //Ajout de la figure au dessin
            d.f = fig;
            d.id = this->dessin.size() + 1;
        //ajout du type dessin dans le dessin technique
                this->dessin.push_back(d);
        //Affichage et configuration du nv panel
            pre->setFig(fig);
            pre->setNom(fig->nom);
            ui->zoneControleObj->addLayout(pre->layoutH,this->dessin.size(),1,1,3);
        //On supprime le formulaire
            this->formTri->cache();
    }

    void fenetrePrincipale::traceElippse()
    {

    }

    void fenetrePrincipale::traceMultiSeg()
    {

    }
