#include "fenetreprincipale.h"
#include "ui_fenetreprincipale.h"

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
        this->formMultiSeg = new formmultisegment();
    //label
        ui->view->labelX = ui->labelX;
        ui->view->labelY = ui->labelY;
    //Init les rot et trans
        this->rot = this->transX = this->transY = 0;
    //Init lien
        this->lienSauvegarde = new QString();
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
                case MULTISEG :
                    this->formMultiSeg->affiche(2);
                    QObject::connect(this->formMultiSeg->btnValide, SIGNAL(clicked()), this, SLOT(nouveauObjet()));
                    QObject::connect(this->formMultiSeg->btnAnnule, SIGNAL(clicked()), this, SLOT(annuleNouveauObjet()));
                    QObject::connect(this->formMultiSeg->btnCTrait, SIGNAL(clicked()), this, SLOT(couleurT()));
                    ui->layoutDroit->addLayout(this->formMultiSeg->boxPrincipale);
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
        QPrinter printer(QPrinter::HighResolution);
        QPrintDialog *dialog = new QPrintDialog(&printer, this);
        printer.setPaperSize(QPrinter::A4);
        dialog->setWindowTitle(tr("Impression du document"));
        dialog->addEnabledOption(QAbstractPrintDialog::PrintSelection);
        if (dialog->exec() != QDialog::Accepted)
        {
           return;
        }
        else
        {
            QPainter painter(&printer);
            ui->view->render(&painter);
        }
    }

    void fenetrePrincipale::on_actionExportation_triggered()
    {
        QImage img(1024,768,QImage::Format_ARGB32_Premultiplied);
        QPainter p(&img);
        ui->view->render(&p);
        p.end();
        QString lienFichier = QFileDialog::getSaveFileName(this, "Exportation Dessin", QString());
        img.save(lienFichier + ".png");
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

    void fenetrePrincipale::on_actionTranslation_3_triggered()
    {
        //Création du box
            this->boxTrans = new QHBoxLayout();
        //Création des labels
            this->labelT = new QLabel("Translation Dessin");
            this->labelX = new QLabel("x :");
            this->labelY = new QLabel("y :");
            this->labelTps = new QLabel("Temps en ms :");
        //Création des spinbox
            this->spinX = new QSpinBox();
            this->spinY = new QSpinBox();
            this->spinTps = new QSpinBox();
            this->spinX->setMaximum(999);
            this->spinY->setMaximum(999);
            this->spinX->setMinimum(-999);
            this->spinY->setMinimum(-999);
            this->spinTps->setMinimum(0);
            this->spinTps->setMaximum(10000);
        //Création des boutons
            this->btnValide = new QPushButton();
            this->btnAnnule = new QPushButton();
            this->btnValide->setIcon(QIcon(":/icones/logos/65.png"));
            this->btnAnnule->setIcon(QIcon(":/icones/logos/64.png"));
            QObject::connect(this->btnValide,SIGNAL(clicked()),this,SLOT(valideTrans()));
            QObject::connect(this->btnAnnule,SIGNAL(clicked()),this,SLOT(annuleTrans()));
        //Ajout des widgets dans le box
            this->boxTrans->addWidget(this->labelT);
            this->boxTrans->addWidget(this->labelX);
            this->boxTrans->addWidget(this->spinX);
            this->boxTrans->addWidget(this->labelY);
            this->boxTrans->addWidget(this->spinY);
            this->boxTrans->addWidget(this->labelTps);
            this->boxTrans->addWidget(this->spinTps);
            this->boxTrans->addWidget(this->btnValide);
            this->boxTrans->addWidget(this->btnAnnule);
        //Ajout du tout dans la fenetre
            ui->layoutAnim->addLayout(this->boxTrans);
    }

    void fenetrePrincipale::valideTrans()
    {
        Anim a;
        a.x = this->spinX->value();
        a.y = this->spinY->value();
        a.tps = this->spinTps->value();
        this->pileAnim.push_back(a);
        this->btnAnnule->click();
    }

    void fenetrePrincipale::annuleTrans()
    {
        delete this->boxTrans;
        delete this->labelT;
        delete this->labelX;
        delete this->labelY;
        delete this->labelTps;
        delete this->spinX;
        delete this->spinY;
        delete this->spinTps;
        delete this->btnAnnule;
        delete this->btnValide;
    }

    void fenetrePrincipale::on_actionRotation_3_triggered()
    {
         //Création du box
             this->boxRot = new QHBoxLayout();
         //Création des labels
             this->labelR = new QLabel("Rotation Dessin");
             this->labelAngle = new QLabel("Angle :");
         //Création des spinbox
             this->spinX = new QSpinBox();
             this->spinX->setMaximum(360);
             this->spinX->setMinimum(1);
         //Création des boutons
             this->btnValide = new QPushButton();
             this->btnAnnule = new QPushButton();
             this->btnValide->setIcon(QIcon(":/icones/logos/65.png"));
             this->btnAnnule->setIcon(QIcon(":/icones/logos/64.png"));
             QObject::connect(this->btnValide,SIGNAL(clicked()),this,SLOT(valideRot()));
             QObject::connect(this->btnAnnule,SIGNAL(clicked()),this,SLOT(annuleRot()));
         //Ajout des widgets dans le box
             this->boxRot->addWidget(this->labelR);
             this->boxRot->addWidget(this->labelAngle);
             this->boxRot->addWidget(this->spinX);
             this->boxRot->addWidget(this->btnValide);
             this->boxRot->addWidget(this->btnAnnule);
         //Ajout du tout dans la fenetre
             ui->layoutAnim->addLayout(this->boxRot);
    }

    void fenetrePrincipale::valideRot()
    {
        this->rot = this->spinX->value();
        this->btnAnnule->click();
    }

    void fenetrePrincipale::annuleRot()
    {
        delete this->boxRot;
        delete this->labelR;
        delete this->labelAngle;
        delete this->spinX;
        delete this->btnAnnule;
        delete this->btnValide;
    }
    void fenetrePrincipale::on_actionLancer_Animation_2_triggered()
    {
        int i,z,w;
        for(i=0;i<this->dessin.size();i++)
            {
                QDessin des;
                QFigure *fig = new QFigure();
                des = this->dessin[i];
                fig = des.f;
                if(fig->estAnim == false)
                {
                    for(w=0;w<this->pileAnim.size();w++)
                    {
                        Anim a = this->pileAnim[w];
                        for(z=0;z<fig->item.size();z++)
                        {
                            QGraphicsItem *item = fig->item[z];
                            item->moveBy(a.x,a.y);
                        }
                    }
                }
                else
                {
                    for(w = 0;w<fig->pileAnim.size();w++)
                    {
                        Anim a = fig->pileAnim[w];
                        for(z=0;z<fig->item.size();z++)
                        {
                            QGraphicsItem *item = fig->item[z];
                            item->moveBy(a.x,a.y);
                        }
                    }
                }
            }
    }

    void fenetrePrincipale::on_actionArreter_Animation_triggered()
    {
         int i, limit = this->pileAnim.size();
         for(i=0;i<limit;i++)
         {
             this->pileAnim.pop_back();
         }
    }

    void fenetrePrincipale::on_actionEnregistrer_triggered()
    {
        QString lienFichier = QFileDialog::getSaveFileName(this, "Enregistrer un Dessin", QString(), "Dessin2D (*.xml)");
        *(this->lienSauvegarde) = lienFichier;
        this->ecritureDOM();
    }

    void fenetrePrincipale::on_actionOuvrir_triggered()
    {
        QString lienFichier = QFileDialog::getOpenFileName(this, "Ouvrir un Dessin", QString(), "Dessin2D (*.xml)");
        *(this->lienSauvegarde) = lienFichier;
        lectureDOM();
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
                this->formMultiSeg->cache();
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

        QMessageBox::about(this, "Info","Rafraichir\n");
    }

    void fenetrePrincipale::suppression()
    {
        QMessageBox::about(this, "Info","Supprime");
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
    //*******************************************************************************************************************************************************//
    //                                                                   Déclaration des méthodes ouverture                                                  //
    //*******************************************************************************************************************************************************//
     void fenetrePrincipale::lectureDOM()
    {
        QFile file(*(this->lienSauvegarde));
        QDomDocument doc;
        if(!file.open(QIODevice::ReadOnly))
            return;
        if (!doc.setContent(&file))
        {
            *(this->doc) = doc;
            lireDOM();
            file.close(); // établit le document XML à partir des données du fichier (hiérarchie, etc.)
            return;
        }
        *(this->doc) = doc;
        lireDOM();
        file.close();
    }

    void fenetrePrincipale::lireDOM()
    {
            QDomNodeList tab;
            QDomNodeList tabP;
            QDomNodeList tabCT;
            QDomNodeList tabCF;
            QDomNodeList tabR;
            QDomElement objet;
            QDomElement point;
            QDomElement rayon;
            QDomElement couleurF;
            QDomElement couleurT;
            QDomNode n;
            QDomElement racine = doc->documentElement(); // renvoie la balise racine
            QDomNode noeud = racine.firstChild(); // renvoie la première balise « mesure »
            while(!noeud.isNull())
            {
                QFigure *f = new QFigure();
                // convertit le nœud en élément pour utiliser les
                // méthodes tagName() et attribute()
                objet = noeud.toElement();
                // vérifie la présence de la balise
                QDessin des;
                //Nom de la figure
                    tab = objet.childNodes();//Stocke les premiers rang
                    n = tab.item(0);
                    f->nom = QString(n.firstChild().toText().data());
                //Options
                    f->etat = true;
                    QDomNode noeud1 = objet.firstChild();
                    noeud1 = noeud1.nextSibling();
                    point =  noeud1.toElement();
                    tabP = point.childNodes();
                    int x1, y1, x2, y2, r;
                if(objet.tagName() != "MultiSeg")
                {
                    //Point 1
                        n = tabP.item(0);
                        x1 = QString(n.firstChild().toText().data()).toInt();
                        n = tabP.item(1);
                        y1 = QString(n.firstChild().toText().data()).toInt();
                        Point2D p1(x1,y1);
                        f->points.push_back(p1);
                    if(objet.tagName() != "Cercle")
                    {
                        //Point 2
                        noeud1 = noeud1.nextSibling();
                        point = noeud1.toElement();
                        tabP = point.childNodes();
                        n = tabP.item(0);
                        x2 = QString(n.firstChild().toText().data()).toInt();
                        n = tabP.item(1);
                        y2 = QString(n.firstChild().toText().data()).toInt();
                        Point2D p2(x2,y2);
                        f->points.push_back(p2);
                    }
                    if(objet.tagName() == "Cercle")
                    {
                        //Rayon
                        n = tab.item(2);
                        r = QString(n.firstChild().toText().data()).toInt();
                    }
                    if(objet.tagName() == "Elippse")
                    {
                        //Rayon
                        n = tab.item(3);
                        r = QString(n.firstChild().toText().data()).toInt();
                    }
                }
                if(objet.tagName() == "Segment")
                {
                        f->o = SEGMENT;
                        //Definiton de l'objet segment
                        Segment s(Point2D(x1,y1),Point2D(x2,y2));
                        //Ajout du segment dans l'objet
                        f->f = s;
                        //Tracage de la figure
                        //Gestion Couleurs
                            noeud1 = noeud1.nextSibling();
                            couleurT = noeud1.toElement();
                            tabCT = couleurT.childNodes();
                            n = tabCT.item(0);
                            f->cR = QString(n.firstChild().toText().data()).toInt();
                            n = tabCT.item(1);
                            f->cG = QString(n.firstChild().toText().data()).toInt();
                            n = tabCT.item(2);
                            f->cB = QString(n.firstChild().toText().data()).toInt();
                            this->colorT.setRgb(f->cR,f->cG,f->cB);
                        QGraphicsItem *item = ui->view->scene->addLine(x1,y1,x2,y2,QPen(this->colorT));
                         f->item.push_back(item);

                }
                else if(objet.tagName() == "Carre")
                {
                        f->o = CARRE;
                        //Point 3
                        noeud1 = noeud1.nextSibling();
                        point = noeud1.toElement();
                        tabP = point.childNodes();
                        n = tabP.item(0);
                        int x3 = QString(n.firstChild().toText().data()).toInt();
                        n = tabP.item(1);
                        int y3 = QString(n.firstChild().toText().data()).toInt();
                        Point2D p3(x3,y3);
                        f->points.push_back(p3);
                        //Point 4
                        noeud1 = noeud1.nextSibling();
                        point = noeud1.toElement();
                        tabP = point.childNodes();
                        n = tabP.item(0);
                        int x4 = QString(n.firstChild().toText().data()).toInt();
                        n = tabP.item(1);
                        int y4 = QString(n.firstChild().toText().data()).toInt();
                        Point2D p4(x4,y4);
                        f->points.push_back(p4);
                        //Definiton de l'objet segment
                        Rectangle r(Point2D(x1,y1),Point2D(x2,y2),Point2D(x3,y3),Point2D(x4,y4));
                        //Ajout du segment dans l'objet
                        f->f = r;
                        //Tracage de la figure
                        //Gestion Couleurs
                        noeud1 = noeud1.nextSibling();
                        couleurT = noeud1.toElement();
                        tabCT = couleurT.childNodes();
                        n = tabCT.item(0);
                        f->cR = QString(n.firstChild().toText().data()).toInt();
                        n = tabCT.item(1);
                        f->cG = QString(n.firstChild().toText().data()).toInt();
                        n = tabCT.item(2);
                        f->cB = QString(n.firstChild().toText().data()).toInt();
                        this->colorT.setRgb(f->cR,f->cG,f->cB);
                       //Gestion Couleurs Fond
                        noeud1 = noeud1.nextSibling();
                        couleurF = noeud1.toElement();
                        tabCF = couleurF.childNodes();
                        n = tabCF.item(0);
                        f->cfR = QString(n.firstChild().toText().data()).toInt();
                        n = tabCF.item(1);
                        f->cfG = QString(n.firstChild().toText().data()).toInt();
                        n = tabCF.item(2);
                        f->cfB = QString(n.firstChild().toText().data()).toInt();
                        this->colorF.setRgb(f->cfR,f->cfG,f->cfB);
                        QPalette cpalette = palette();
                        QBrush brush(this->colorF);
                        brush.setStyle(Qt::SolidPattern);
                        cpalette.setBrush(QPalette::Active, QPalette::Window, brush);
                        QGraphicsItem *item = ui->view->scene->addRect(x1,y1,x2-x1,y3-y1,QPen(this->colorT),brush);
                        f->item.push_back(item);
                }
                else if(objet.tagName() == "MultiSeg")
                {

                }
                else if(objet.tagName() == "Triangle")
                {
                    f->o = TRIANGLE;
                    //Point 3
                    noeud1 = noeud1.nextSibling();
                    point = noeud1.toElement();
                    tabP = point.childNodes();
                    n = tabP.item(0);
                    int x3 = QString(n.firstChild().toText().data()).toInt();
                    n = tabP.item(1);
                    int y3 = QString(n.firstChild().toText().data()).toInt();
                    Point2D p3(x3,y3);
                    f->points.push_back(p3);
                    //Definiton de l'objet segment
                    Triangle t(Point2D(x1,y1),Point2D(x2,y2),Point2D(x3,y3));
                    //Ajout du segment dans l'objet
                    f->f = t;
                    //Tracage de la figure
                    //Gestion Couleurs
                    noeud1 = noeud1.nextSibling();
                    couleurT = noeud1.toElement();
                    tabCT = couleurT.childNodes();
                    n = tabCT.item(0);
                    f->cR = QString(n.firstChild().toText().data()).toInt();
                    n = tabCT.item(1);
                    f->cG = QString(n.firstChild().toText().data()).toInt();
                    n = tabCT.item(2);
                    f->cB = QString(n.firstChild().toText().data()).toInt();
                    this->colorT.setRgb(f->cR,f->cG,f->cB);
                    QGraphicsItem *item = ui->view->scene->addLine(x1,y1,x2,y2,QPen(this->colorT));
                    f->item.push_back(item);
                    item = ui->view->scene->addLine(x2,y2,x3,y3,QPen(this->colorT));
                    f->item.push_back(item);
                    item = ui->view->scene->addLine(x1,y1,x3,y3,QPen(this->colorT));
                    f->item.push_back(item);
                }
                else if(objet.tagName() == "Cercle")
                {
                    f->o = CERCLE;
                    //Definiton de l'objet segment
                    Cercle c(Point2D(x1,y1),r);
                    //Ajout du segment dans l'objet
                    f->f = c;
                    //Gestion Couleurs
                    noeud1 = noeud1.nextSibling();
                    noeud1 = noeud1.nextSibling();
                    couleurT = noeud1.toElement();
                    tabCT = couleurT.childNodes();
                    n = tabCT.item(0);
                    f->cR = QString(n.firstChild().toText().data()).toInt();
                    n = tabCT.item(1);
                    f->cG = QString(n.firstChild().toText().data()).toInt();
                    n = tabCT.item(2);
                    f->cB = QString(n.firstChild().toText().data()).toInt();
                    this->colorT.setRgb(f->cR,f->cG,f->cB);
                   //Gestion Couleurs Fond
                    noeud1 = noeud1.nextSibling();
                    couleurF = noeud1.toElement();
                    tabCF = couleurF.childNodes();
                    n = tabCF.item(0);
                    f->cfR = QString(n.firstChild().toText().data()).toInt();
                    n = tabCF.item(1);
                    f->cfG = QString(n.firstChild().toText().data()).toInt();
                    n = tabCF.item(2);
                    f->cfB = QString(n.firstChild().toText().data()).toInt();
                    this->colorF.setRgb(f->cfR,f->cfG,f->cfB);
                    QPalette cpalette = palette();
                    QBrush brush(this->colorF);
                    brush.setStyle(Qt::SolidPattern);
                    cpalette.setBrush(QPalette::Active, QPalette::Window, brush);
                    QGraphicsItem *item = ui->view->scene->addEllipse(x1,y1,r,r,QPen(this->colorT),brush);
                    f->item.push_back(item);
                }
                else if(objet.tagName() == "Elippse")
                {
                    f->o = ELLIPSE;
                    QMessageBox::about(this,"Info",QString::number(r));
                    //Definiton de l'objet segment
                    Elippse e(Point2D(x1,y1),Point2D(x2,y2),r);
                    //Ajout du segment dans l'objet
                    f->f = e;
                    //Gestion Couleurs
                    noeud1 = noeud1.nextSibling();
                    noeud1 = noeud1.nextSibling();
                    couleurT = noeud1.toElement();
                    tabCT = couleurT.childNodes();
                    n = tabCT.item(0);
                    f->cR = QString(n.firstChild().toText().data()).toInt();
                    n = tabCT.item(1);
                    f->cG = QString(n.firstChild().toText().data()).toInt();
                    n = tabCT.item(2);
                    f->cB = QString(n.firstChild().toText().data()).toInt();
                    this->colorT.setRgb(f->cR,f->cG,f->cB);
                   //Gestion Couleurs Fond
                    noeud1 = noeud1.nextSibling();
                    noeud1 = noeud1.nextSibling();
                    couleurF = noeud1.toElement();
                    tabCF = couleurF.childNodes();
                    n = tabCF.item(0);
                    f->cfR = QString(n.firstChild().toText().data()).toInt();
                    n = tabCF.item(1);
                    f->cfG = QString(n.firstChild().toText().data()).toInt();
                    n = tabCF.item(2);
                    f->cfB = QString(n.firstChild().toText().data()).toInt();
                    this->colorF.setRgb(f->cfR,f->cfG,f->cfB);
                    QPalette cpalette = palette();
                    QBrush brush(this->colorF);
                    brush.setStyle(Qt::SolidPattern);
                    cpalette.setBrush(QPalette::Active, QPalette::Window, brush);
                    QGraphicsItem *item = ui->view->scene->addEllipse(x2-x1,y2,r,2*r,QPen(this->colorT),brush);
                    f->item.push_back(item);
                }
                //Ajout du dessin
                des.f = f;
                //Initialisation d'un nouveau panel de gestion d'objet
                presentationObjet *pre = new presentationObjet();
                pre->setFig(f);
                pre->setNom(f->nom);
                ui->zoneControleObj->addLayout(pre->box,this->dessin.size(),1,1,3);
                //Ajout du dessin
                this->dessin.push_back(des);
                noeud = noeud.nextSibling(); // passe à l'objet" suivante
        }
    }
    //*******************************************************************************************************************************************************//
    //                                                                   Déclaration des méthodes sauvegarde                                                 //
    //*******************************************************************************************************************************************************//
    void fenetrePrincipale::ecritureDOM()
    {
        this->doc = new QDomDocument();
        this->file = new QFile();
        this->out = new QTextStream();
        this->dessinX = new QDomElement(doc->createElement("dessin")); // création de la balise "dessin"
        doc->appendChild(*(this->dessinX)); // filiation de la balise "mesures"
        file->setFileName(*(this->lienSauvegarde));
        if (!file->open(QIODevice::WriteOnly)) // ouverture du fichier de sauvegarde
            return; // en écriture
        out->setDevice(file); // association du flux au fichier
        QString *nomObjet = new QString();
        for(int i=0;i<this->dessin.size();i++)
        {
            QDessin des = this->dessin[i];
            if(des.f->etat == true)
            {
                switch (des.f->o)
                {
                    case SEGMENT:
                        *nomObjet = "Segment";
                        break;
                    case CARRE:
                       *nomObjet = "Carre";
                        break;
                    case TRIANGLE :
                        *nomObjet = "Triangle";
                        break;
                    case CERCLE :
                        *nomObjet = "Cercle";
                        break;
                    case ELLIPSE :
                        *nomObjet = "Elippse";
                        break;
                    case MULTISEG :
                         *nomObjet = "MultiSeg";
                        break;
                    default:
                        break;
                }
                this->ajoutDOM(nomObjet,des.f,i);
            }
        }
        this->sauvegardeDOM();
    }

    void fenetrePrincipale::ajoutDOM(QString *nomObjet,QFigure *fig, int id)
    {
        //création de la balise "nomObjet"
            QDomElement objet = doc->createElement(*(nomObjet));
            this->dessinX->appendChild(objet); // filiation de la balise "nomObjet"
            objet.setAttribute("id",id); // création de l'attribut "numero"
            QString *x = new QString();
            QString *y = new QString();
            QString *r = new QString();
            Point2D p;
            QDomElement baliseNom = doc->createElement("nom");
            objet.appendChild(baliseNom);
            QDomText nom = doc->createTextNode(fig->nom);
            baliseNom.appendChild(nom);
            for(int i=0;i<fig->points.size();i++)
            {
                p = fig->points[i];
                //création de la balise "point2D"
                QDomElement point = doc->createElement("point2D");
                point.setAttribute("id",i);
                objet.appendChild(point);
                //Creation de la balise X
                QDomElement baliseX = doc->createElement("X");
                point.appendChild(baliseX);
                x->setNum((int)p.getX());
                y->setNum((int)p.getY());
                QDomText coorX = doc->createTextNode(*(x));
                baliseX.appendChild(coorX);
                // création de la balise Y
                QDomElement baliseY = doc->createElement("Y");
                point.appendChild(baliseY);
                QDomText coorY = doc->createTextNode(*(y));
                baliseY.appendChild(coorY);
           }
           if(fig->o == CERCLE || fig->o == ELLIPSE)
           {
               //Ajout du rayon
               QDomElement baliseR = doc->createElement("rayon");
               objet.appendChild(baliseR); // filiation de la balise "point"
               r->setNum((int)fig->r);
               QDomText rayon = doc->createTextNode(*(r)); //création de la donnée f1
               baliseR.appendChild(rayon); // filiation du nœud "f1"
           }
           //Ajout de la couleur du trait
           QDomElement baliseCouleurTrait = doc->createElement("couleurT");
           objet.appendChild(baliseCouleurTrait);
           QDomElement baliseCouleurTraitR = doc->createElement("R");
           baliseCouleurTrait.appendChild(baliseCouleurTraitR);
           QDomElement baliseCouleurTraitG = doc->createElement("G");
           baliseCouleurTrait.appendChild(baliseCouleurTraitG);
           QDomElement baliseCouleurTraitB = doc->createElement("B");
           baliseCouleurTrait.appendChild(baliseCouleurTraitB);
           QDomText cR = doc->createTextNode(QString::number(fig->cR));
           baliseCouleurTraitR.appendChild(cR);
           QDomText cG = doc->createTextNode(QString::number(fig->cG));
           baliseCouleurTraitG.appendChild(cG);
           QDomText cB = doc->createTextNode(QString::number(fig->cB));
           baliseCouleurTraitB.appendChild(cB);
           if(fig->o == CARRE || fig->o == CERCLE || fig->o == CERCLE)
           {
               //Ajout de la couleur du fond
               QDomElement baliseCouleurFond = doc->createElement("couleurF");
               objet.appendChild(baliseCouleurFond);
               QDomElement baliseCouleurFondR = doc->createElement("R");
               baliseCouleurFond.appendChild(baliseCouleurFondR);
               QDomElement baliseCouleurFondG = doc->createElement("G");
               baliseCouleurFond.appendChild(baliseCouleurFondG);
               QDomElement baliseCouleurFondB = doc->createElement("B");
               baliseCouleurFond.appendChild(baliseCouleurFondB);
               QDomText cR = doc->createTextNode(QString::number(fig->cfR));
               baliseCouleurFondR.appendChild(cR);
               QDomText cG = doc->createTextNode(QString::number(fig->cfG));
               baliseCouleurFondG.appendChild(cG);
               QDomText cB = doc->createTextNode(QString::number(fig->cfB));
               baliseCouleurFondB.appendChild(cB);
           }
    }

    void fenetrePrincipale::sauvegardeDOM()
    {
            // insertion en début de document de <?xml version="1.0" ?>
            QDomNode noeud = doc->createProcessingInstruction("xml","version=\"1.0\"");
            doc->insertBefore(noeud,doc->firstChild());
            // sauvegarde dans le flux (deux espaces de décalage dans l'arborescence)
            doc->save(*(out),2);
            file->close();
    }

    //*******************************************************************************************************************************************************//
    //                                                                   Déclaration des méthodes de tracage                                                 //
    //*******************************************************************************************************************************************************//
    void fenetrePrincipale::traceRec()
    {
        //Création de la structure figure
            QFigure *fig = new QFigure();
        //Ajout de la scene dans la figure
            fig->estAnim = false;
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
            fig->points.push_back(Point2D(x1,y1));
            fig->points.push_back(Point2D(x2,y2));
            fig->points.push_back(Point2D(x3,y3));
            fig->points.push_back(Point2D(x4,y4));
            fig->etat = true;
            fig->oX = x1;
            fig->oY = y1;
            this->colorF.getRgb(&fig->cfR,&fig->cfG,&fig->cfB);
            this->colorT.getRgb(&fig->cR,&fig->cG,&fig->cB);
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
        //Ajout du type de figure
            fig->o = CARRE;
        //Ajout de la figure au dessin
            d.f = fig;
            d.id = this->dessin.size() + 1;
        //ajout du type dessin dans le dessin technique
            this->dessin.push_back(d);
        //Affichage et configuration du nv panel
            pre->setFig(fig);
            pre->setNom(fig->nom);
            ui->zoneControleObj->addLayout(pre->box,this->dessin.size(),1,1,3);
        //On supprime le formulaire
            this->formCar->cache();
    }
    void fenetrePrincipale::traceSeg()
    {
        //Création de la structure figure
            QFigure *fig = new QFigure();
        //Création d'un dessin
            QDessin d;
            fig->estAnim = false;
        //Initialisation d'un nouveau panel de gestion d'objet
            presentationObjet *pre = new presentationObjet();
        //On récupère les valeurs
            int x1 = this->formSeg->X1();
            int y1 = this->formSeg->Y1();
            int x2 = this->formSeg->X2();
            int y2 = this->formSeg->Y2();
            fig->nom = this->formSeg->lineNom->text();
        //Création de la figure segment
            fig->points.push_back(Point2D(x1,y1));
            fig->points.push_back(Point2D(x2,y2));
            fig->etat = true;
            fig->oX = x1;
            fig->oY = y1;
            this->colorT.getRgb(&fig->cR,&fig->cG,&fig->cB);
            Segment s(Point2D(x1,y1),Point2D(x2,y2));
        //on met le segment dans la structure figure
            fig->f = s;
        //Traçage de la figure dans le QGraphicsScene
            QGraphicsItem *item = ui->view->scene->addLine(x1,y1,x2,y2,QPen(this->colorT));
        //Ajout du pointeur sur le tracé de la figure
            fig->item.push_back(item);
        //Ajout du type de figure
            fig->o = SEGMENT;
        //Ajout de la figure au dessin
            d.f = fig;
            d.id = this->dessin.size() + 1;
        //ajout du type dessin dans le dessin technique
            this->dessin.push_back(d);
        //Affichage et configuration du nv panel
            pre->setFig(fig);
            pre->setNom(fig->nom);
            ui->zoneControleObj->addLayout(pre->box,this->dessin.size(),1,1,3);
        //On supprime le formulaire
            this->formSeg->cache();
    }

    void fenetrePrincipale::traceCercle()
    {
        //Création de la structure figure
            QFigure *fig= new QFigure();
       //Création d'un dessin
            QDessin d;
            fig->estAnim = false;
        //Initialisation d'un nouveau panel de gestion d'objet
            presentationObjet *pre = new presentationObjet();
        //On récupère les valeurs
            int x1 = this->formCer->X1();
            int y1 = this->formCer->Y1();
            int r = this->formCer->ChangeRayon->value();
            fig->nom = this->formCer->lineNom->text();
        //Création de la figure segment
            fig->etat = true;
            fig->points.push_back(Point2D(x1,y1));
            fig->r = r;
            fig->oX = x1;
            fig->oY = y1;
            this->colorF.getRgb(&fig->cfR,&fig->cfG,&fig->cfB);
            this->colorT.getRgb(&fig->cR,&fig->cG,&fig->cB);
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
        //Ajout du type de figure
            fig->o = CERCLE;
        //Ajout de la figure au dessin
            d.f = fig;
            d.id = this->dessin.size() + 1;
        //ajout du type dessin dans le dessin technique
                this->dessin.push_back(d);
        //Affichage et configuration du nv panel
            pre->setFig(fig);
            pre->setNom(fig->nom);
            ui->zoneControleObj->addLayout(pre->box,this->dessin.size(),1,1,3);
        //On supprime le formulaire
            this->formCer->cache();
    }

    void fenetrePrincipale::traceTri()
    {
        //Création de la structure figure
            QFigure *fig= new QFigure();
       //Création d'un dessin
            QDessin d;
            fig->estAnim = false;
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
            fig->points.push_back(Point2D(x1,y1));
            fig->points.push_back(Point2D(x2,y2));
            fig->points.push_back(Point2D(x3,y3));
            fig->etat = true;
            fig->oX = x1;
            fig->oY = y1;
            this->colorT.getRgb(&fig->cR,&fig->cG,&fig->cB);
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
        //Ajout du type de figure
            fig->o = TRIANGLE;
        //Affichage et configuration du nv panel
            pre->setFig(fig);
            pre->setNom(fig->nom);
            ui->zoneControleObj->addLayout(pre->box,this->dessin.size(),1,1,3);
        //On supprime le formulaire
            this->formTri->cache();
    }

    void fenetrePrincipale::traceElippse()
    {
        //Création de la structure figure
            QFigure *fig= new QFigure();
       //Création d'un dessin
            QDessin d;
            fig->estAnim = false;
        //Initialisation d'un nouveau panel de gestion d'objet
            presentationObjet *pre = new presentationObjet();
        //On récupère les valeurs
            int x1 = this->formEli->X1();
            int y1 = this->formEli->Y1();
            int x2 = this->formEli->X2();
            int y2 = this->formEli->Y2();
            fig->oX = x1;
            fig->oY = y1;
            int r = this->formEli->ChangeRayon->value();
            fig->nom = this->formEli->lineNom->text();
        //Création de la figure elippse
            fig->etat = true;
            fig->points.push_back(Point2D(x1,y1));
            fig->points.push_back(Point2D(x2,y2));
            fig->r = r;
            this->colorF.getRgb(&fig->cfR,&fig->cfG,&fig->cfB);
            this->colorT.getRgb(&fig->cR,&fig->cG,&fig->cB);
            Elippse e(Point2D(x1,y1),Point2D(x2,y2),r);
        //on met l'elippse dans la structure figure
            fig->f = e;
        //Définiton de la couleur du fond de l'objet
            QPalette cpalette = palette();
            QBrush brush(this->colorF);
            brush.setStyle(Qt::SolidPattern);
            cpalette.setBrush(QPalette::Active, QPalette::Window, brush);
        //Traçage de la figure dans le QGraphicsScene
            QGraphicsItem *item = ui->view->scene->addEllipse(x2-x1,y2,r,2*r,QPen(this->colorT),brush);
        //Ajout du pointeur sur le tracé de la figure
            fig->item.push_back(item);
        //Ajout du type de figure
            fig->o = ELLIPSE;
        //Ajout de la figure au dessin
            d.f = fig;
            d.id = this->dessin.size() + 1;
        //ajout du type dessin dans le dessin technique
                this->dessin.push_back(d);
        //Affichage et configuration du nv panel
            pre->setFig(fig);
            pre->setNom(fig->nom);
            ui->zoneControleObj->addLayout(pre->box,this->dessin.size(),1,1,3);
        //On supprime le formulaire
            this->formEli->cache();
    }

    void fenetrePrincipale::traceMultiSeg()
    {
        //Création de la structure figure
            QFigure *fig = new QFigure();
        //Création d'un dessin
            QDessin d;
            fig->estAnim = false;
        //Initialisation d'un nouveau panel de gestion d'objet
            presentationObjet *pre = new presentationObjet();
        //On récupère les valeurs
            fig->etat = true;
            this->colorT.getRgb(&fig->cR,&fig->cG,&fig->cB);
            fig->nom = this->formMultiSeg->lineNom->text();
            int i;
            GuiPoint *p1 = this->formMultiSeg->point[0];
            for(i=1;i<this->formMultiSeg->Nombre();i++)
            {
                fig->points.push_back(Point2D(p1->ptx->value(),p1->pty->value()));
                GuiPoint *p2 = this->formMultiSeg->point[i];
                //Traçage de la figure dans le QGraphicsScene
                QGraphicsItem *item = ui->view->scene->addLine(p1->ptx->value(),p1->pty->value(),p2->ptx->value(),p2->pty->value(),QPen(this->colorT));
                //Ajout du pointeur sur le tracé de la figure
                fig->item.push_back(item);
                p1 = this->formMultiSeg->point[i];
            }
        //Ajout du type de figure
            fig->o = MULTISEG;
        //Ajout de la figure au dessin
            d.f = fig;
            d.id = this->dessin.size() + 1;
        //ajout du type dessin dans le dessin technique
            this->dessin.push_back(d);
        //Affichage et configuration du nv panel
            pre->setFig(fig);
            pre->setNom(fig->nom);
            ui->zoneControleObj->addLayout(pre->box,this->dessin.size(),1,1,3);
        //On supprime le formulaire
            this->formMultiSeg->cache();
    }
