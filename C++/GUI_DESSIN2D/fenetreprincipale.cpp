#include "fenetreprincipale.h"
#include "ui_fenetreprincipale.h"

fenetrePrincipale::fenetrePrincipale(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::fenetrePrincipale)
{
    //Définition de la fenetre
        ui->setupUi(this);
    //Définition de la scene
        this->scene = new QGraphicsScene();
        ui->view->setScene(this->scene);
    //Définition du formulaire nouveau objet
        this->conteneur = new QWidget;
        this->boxPrincipale = new QVBoxLayout(this->conteneur);
        QString s;
        for(int i=0;i<26;i++)
        {
            char c = 'A' + i;
            s = c;
            this->points[i] = new GuiPoint();
            this->points[i]->labelPoint->setText("Point " + s + " : ");
        }
        this->nomLayout = new QHBoxLayout();
        this->nomLabel = new QLabel("Nom : ");
        this->lineNom = new QLineEdit();
        this->nomLayout->addWidget(this->nomLabel);
        this->nomLayout->addWidget(this->lineNom);
        this->btnLayout = new QHBoxLayout();
        this->btnValide = new QPushButton();
        this->btnValide->setIcon(QIcon(":/icones/logos/65.png"));
        this->btnAnnule = new QPushButton();
        this->btnAnnule->setIcon(QIcon(":/icones/logos/64.png"));
        this->btnLayout->addWidget(btnValide);
        this->btnLayout->addWidget(btnAnnule);
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
        //Bloquage de l'application
            ui->zoneBtnObjet->setEnabled(false);
        //Zone Couleur
        //Zone Btn
            QObject::connect(this->btnValide, SIGNAL(clicked()), this, SLOT(nouveauObjet()));
            QObject::connect(this->btnAnnule, SIGNAL(clicked()), this, SLOT(annuleNouveauObjet()));
        //Ajout des widgets
            this->boxPrincipale->addLayout(this->nomLayout);
            for(int i=0;i<nb;i++)
            {
                this->boxPrincipale->addLayout(this->points[i]->pointLayout);
            }
            this->boxPrincipale->addLayout(this->btnLayout);
            //this->boxPrincipale->addWidget();
            ui->formObjet->addWidget(this->conteneur);
        //Affichage
            this->conteneur->show();
    }
//******************************************************************************************************************************************************************************//
//                                                                   Déclaration des slots                                                                                      //
//******************************************************************************************************************************************************************************//
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

    void fenetrePrincipale::annuleNouveauObjet()
    {
        ui->zoneBtnObjet->setEnabled(true);
        this->conteneur->hide();
    }

    void fenetrePrincipale::nouveauObjet()
    {
        this->btnAnnule->click();
        switch (this->obj)
        {
            case SEGMENT:
                this->scene->addLine(3,5,300,8,QPen(Qt::black));
                break;
            case CARRE:
                this->scene->addRect(0,0,40,20,QPen(Qt::black));
            break;
            case CERCLE :
                this->scene->addLine(5,5,10,10,QPen(Qt::black));
                this->scene->addLine(10,10,20,20,QPen(Qt::black));
                this->scene->addLine(20,20,5,5,QPen(Qt::black));
            break;
            default:
                break;
        }
    }


