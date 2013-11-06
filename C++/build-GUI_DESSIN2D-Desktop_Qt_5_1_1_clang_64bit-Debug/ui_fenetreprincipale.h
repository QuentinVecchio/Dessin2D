/********************************************************************************
** Form generated from reading UI file 'fenetreprincipale.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FENETREPRINCIPALE_H
#define UI_FENETREPRINCIPALE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fenetrePrincipale
{
public:
    QAction *actionNouveau;
    QAction *actionOuvrir;
    QAction *actionEnregistrer;
    QAction *actionImprimer;
    QAction *actionQuitter_3;
    QAction *actionPlein_cran;
    QAction *actionTutoriels;
    QAction *actionD_veloppeur;
    QAction *actionZoom;
    QAction *actionZoom_2;
    QAction *actionVue_ensemble;
    QAction *actionCalculette;
    QAction *actionMath_matique;
    QAction *actionPr_c_dent;
    QAction *actionSuivant;
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QGraphicsView *view;
    QFormLayout *listeObjet;
    QVBoxLayout *zoneBtnObjet;
    QPushButton *btnSegment;
    QPushButton *btnMultiSegment;
    QPushButton *btnCarre;
    QPushButton *btnRectangle;
    QPushButton *btnTriangle;
    QPushButton *btnCercle;
    QFormLayout *formObjet;
    QMenuBar *barreMenu;
    QMenu *menuFichier;
    QMenu *menuAffichage;
    QMenu *menuAide;
    QMenu *menu;
    QMenu *menuOutils;
    QMenu *menuEdition;
    QToolBar *barreTache;
    QStatusBar *barreStatut;

    void setupUi(QMainWindow *fenetrePrincipale)
    {
        if (fenetrePrincipale->objectName().isEmpty())
            fenetrePrincipale->setObjectName(QStringLiteral("fenetrePrincipale"));
        fenetrePrincipale->setWindowModality(Qt::NonModal);
        fenetrePrincipale->resize(1010, 603);
        fenetrePrincipale->setMinimumSize(QSize(750, 0));
        actionNouveau = new QAction(fenetrePrincipale);
        actionNouveau->setObjectName(QStringLiteral("actionNouveau"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icones/logos/document.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNouveau->setIcon(icon);
        actionNouveau->setPriority(QAction::NormalPriority);
        actionOuvrir = new QAction(fenetrePrincipale);
        actionOuvrir->setObjectName(QStringLiteral("actionOuvrir"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icones/logos/folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOuvrir->setIcon(icon1);
        actionEnregistrer = new QAction(fenetrePrincipale);
        actionEnregistrer->setObjectName(QStringLiteral("actionEnregistrer"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icones/logos/55.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEnregistrer->setIcon(icon2);
        actionImprimer = new QAction(fenetrePrincipale);
        actionImprimer->setObjectName(QStringLiteral("actionImprimer"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icones/logos/printer.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionImprimer->setIcon(icon3);
        actionQuitter_3 = new QAction(fenetrePrincipale);
        actionQuitter_3->setObjectName(QStringLiteral("actionQuitter_3"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icones/logos/power-button.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuitter_3->setIcon(icon4);
        actionPlein_cran = new QAction(fenetrePrincipale);
        actionPlein_cran->setObjectName(QStringLiteral("actionPlein_cran"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icones/logos/resize.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPlein_cran->setIcon(icon5);
        actionTutoriels = new QAction(fenetrePrincipale);
        actionTutoriels->setObjectName(QStringLiteral("actionTutoriels"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icones/logos/question.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTutoriels->setIcon(icon6);
        actionD_veloppeur = new QAction(fenetrePrincipale);
        actionD_veloppeur->setObjectName(QStringLiteral("actionD_veloppeur"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/icones/logos/info.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionD_veloppeur->setIcon(icon7);
        actionZoom = new QAction(fenetrePrincipale);
        actionZoom->setObjectName(QStringLiteral("actionZoom"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/icones/logos/34.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoom->setIcon(icon8);
        actionZoom_2 = new QAction(fenetrePrincipale);
        actionZoom_2->setObjectName(QStringLiteral("actionZoom_2"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/icones/logos/35.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionZoom_2->setIcon(icon9);
        actionVue_ensemble = new QAction(fenetrePrincipale);
        actionVue_ensemble->setObjectName(QStringLiteral("actionVue_ensemble"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/icones/logos/33.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionVue_ensemble->setIcon(icon10);
        actionCalculette = new QAction(fenetrePrincipale);
        actionCalculette->setObjectName(QStringLiteral("actionCalculette"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/icones/logos/calculator.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCalculette->setIcon(icon11);
        actionMath_matique = new QAction(fenetrePrincipale);
        actionMath_matique->setObjectName(QStringLiteral("actionMath_matique"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/icones/logos/mathematical-instrument.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionMath_matique->setIcon(icon12);
        actionPr_c_dent = new QAction(fenetrePrincipale);
        actionPr_c_dent->setObjectName(QStringLiteral("actionPr_c_dent"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/icones/logos/arrow-small-17.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPr_c_dent->setIcon(icon13);
        actionSuivant = new QAction(fenetrePrincipale);
        actionSuivant->setObjectName(QStringLiteral("actionSuivant"));
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/icones/logos/arrow-small-18.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSuivant->setIcon(icon14);
        centralWidget = new QWidget(fenetrePrincipale);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(9, 4, 991, 541));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        view = new QGraphicsView(gridLayoutWidget);
        view->setObjectName(QStringLiteral("view"));
        view->setLineWidth(10);
        view->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        view->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        view->setInteractive(true);
        view->setSceneRect(QRectF(0, 0, 200, 100));
        view->setResizeAnchor(QGraphicsView::AnchorViewCenter);

        gridLayout->addWidget(view, 0, 2, 1, 1);

        listeObjet = new QFormLayout();
        listeObjet->setSpacing(6);
        listeObjet->setObjectName(QStringLiteral("listeObjet"));
        listeObjet->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);

        gridLayout->addLayout(listeObjet, 0, 4, 1, 1);

        zoneBtnObjet = new QVBoxLayout();
        zoneBtnObjet->setSpacing(0);
        zoneBtnObjet->setObjectName(QStringLiteral("zoneBtnObjet"));
        zoneBtnObjet->setSizeConstraint(QLayout::SetDefaultConstraint);
        zoneBtnObjet->setContentsMargins(-1, 0, 0, 12);
        btnSegment = new QPushButton(gridLayoutWidget);
        btnSegment->setObjectName(QStringLiteral("btnSegment"));
        btnSegment->setMaximumSize(QSize(32, 32));
        QIcon icon15;
        icon15.addFile(QStringLiteral(":/icones/logos/line.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon15.addFile(QStringLiteral(":/icones/logos/line_focus.png"), QSize(), QIcon::Normal, QIcon::On);
        icon15.addFile(QStringLiteral(":/icones/logos/line_focus.png"), QSize(), QIcon::Selected, QIcon::On);
        btnSegment->setIcon(icon15);
        btnSegment->setIconSize(QSize(32, 32));

        zoneBtnObjet->addWidget(btnSegment);

        btnMultiSegment = new QPushButton(gridLayoutWidget);
        btnMultiSegment->setObjectName(QStringLiteral("btnMultiSegment"));
        btnMultiSegment->setMinimumSize(QSize(32, 32));
        btnMultiSegment->setMaximumSize(QSize(32, 32));
        QIcon icon16;
        icon16.addFile(QStringLiteral(":/icones/logos/multiSegment.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnMultiSegment->setIcon(icon16);
        btnMultiSegment->setIconSize(QSize(32, 32));

        zoneBtnObjet->addWidget(btnMultiSegment);

        btnCarre = new QPushButton(gridLayoutWidget);
        btnCarre->setObjectName(QStringLiteral("btnCarre"));
        btnCarre->setMaximumSize(QSize(32, 32));
        QIcon icon17;
        icon17.addFile(QStringLiteral(":/icones/logos/carre.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCarre->setIcon(icon17);
        btnCarre->setIconSize(QSize(32, 32));

        zoneBtnObjet->addWidget(btnCarre);

        btnRectangle = new QPushButton(gridLayoutWidget);
        btnRectangle->setObjectName(QStringLiteral("btnRectangle"));
        btnRectangle->setMaximumSize(QSize(32, 32));
        QIcon icon18;
        icon18.addFile(QStringLiteral(":/icones/logos/quadrilatere.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnRectangle->setIcon(icon18);
        btnRectangle->setIconSize(QSize(32, 32));

        zoneBtnObjet->addWidget(btnRectangle);

        btnTriangle = new QPushButton(gridLayoutWidget);
        btnTriangle->setObjectName(QStringLiteral("btnTriangle"));
        btnTriangle->setMaximumSize(QSize(32, 32));
        btnTriangle->setIconSize(QSize(32, 32));
        btnTriangle->setDefault(false);

        zoneBtnObjet->addWidget(btnTriangle);

        btnCercle = new QPushButton(gridLayoutWidget);
        btnCercle->setObjectName(QStringLiteral("btnCercle"));
        btnCercle->setMaximumSize(QSize(32, 32));
        QIcon icon19;
        icon19.addFile(QStringLiteral(":/icones/logos/oval.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCercle->setIcon(icon19);
        btnCercle->setIconSize(QSize(32, 32));

        zoneBtnObjet->addWidget(btnCercle);


        gridLayout->addLayout(zoneBtnObjet, 0, 0, 1, 1);

        formObjet = new QFormLayout();
        formObjet->setSpacing(6);
        formObjet->setObjectName(QStringLiteral("formObjet"));
        formObjet->setSizeConstraint(QLayout::SetDefaultConstraint);
        formObjet->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        formObjet->setRowWrapPolicy(QFormLayout::DontWrapRows);
        formObjet->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formObjet->setFormAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addLayout(formObjet, 0, 3, 1, 1);

        gridLayout->setColumnStretch(2, 1);
        fenetrePrincipale->setCentralWidget(centralWidget);
        barreMenu = new QMenuBar(fenetrePrincipale);
        barreMenu->setObjectName(QStringLiteral("barreMenu"));
        barreMenu->setGeometry(QRect(0, 0, 1010, 22));
        menuFichier = new QMenu(barreMenu);
        menuFichier->setObjectName(QStringLiteral("menuFichier"));
        menuAffichage = new QMenu(barreMenu);
        menuAffichage->setObjectName(QStringLiteral("menuAffichage"));
        menuAide = new QMenu(barreMenu);
        menuAide->setObjectName(QStringLiteral("menuAide"));
        menu = new QMenu(barreMenu);
        menu->setObjectName(QStringLiteral("menu"));
        menuOutils = new QMenu(barreMenu);
        menuOutils->setObjectName(QStringLiteral("menuOutils"));
        menuEdition = new QMenu(barreMenu);
        menuEdition->setObjectName(QStringLiteral("menuEdition"));
        fenetrePrincipale->setMenuBar(barreMenu);
        barreTache = new QToolBar(fenetrePrincipale);
        barreTache->setObjectName(QStringLiteral("barreTache"));
        barreTache->setAutoFillBackground(false);
        barreTache->setAllowedAreas(Qt::AllToolBarAreas);
        barreTache->setIconSize(QSize(24, 24));
        barreTache->setToolButtonStyle(Qt::ToolButtonIconOnly);
        barreTache->setFloatable(true);
        fenetrePrincipale->addToolBar(Qt::TopToolBarArea, barreTache);
        barreStatut = new QStatusBar(fenetrePrincipale);
        barreStatut->setObjectName(QStringLiteral("barreStatut"));
        fenetrePrincipale->setStatusBar(barreStatut);

        barreMenu->addAction(menuFichier->menuAction());
        barreMenu->addAction(menuEdition->menuAction());
        barreMenu->addAction(menuAffichage->menuAction());
        barreMenu->addAction(menuOutils->menuAction());
        barreMenu->addAction(menuAide->menuAction());
        barreMenu->addAction(menu->menuAction());
        menuFichier->addAction(actionNouveau);
        menuFichier->addAction(actionOuvrir);
        menuFichier->addAction(actionEnregistrer);
        menuFichier->addAction(actionImprimer);
        menuFichier->addSeparator();
        menuFichier->addAction(actionQuitter_3);
        menuAffichage->addAction(actionPlein_cran);
        menuAffichage->addAction(actionZoom);
        menuAffichage->addAction(actionZoom_2);
        menuAffichage->addAction(actionVue_ensemble);
        menuAide->addAction(actionTutoriels);
        menu->addAction(actionD_veloppeur);
        menuOutils->addAction(actionCalculette);
        menuOutils->addAction(actionMath_matique);
        menuEdition->addAction(actionPr_c_dent);
        menuEdition->addAction(actionSuivant);
        barreTache->addAction(actionNouveau);
        barreTache->addAction(actionOuvrir);
        barreTache->addAction(actionEnregistrer);
        barreTache->addSeparator();
        barreTache->addAction(actionPr_c_dent);
        barreTache->addAction(actionSuivant);
        barreTache->addSeparator();
        barreTache->addAction(actionPlein_cran);
        barreTache->addAction(actionZoom);
        barreTache->addAction(actionZoom_2);
        barreTache->addAction(actionVue_ensemble);
        barreTache->addSeparator();
        barreTache->addAction(actionCalculette);
        barreTache->addAction(actionMath_matique);
        barreTache->addSeparator();
        barreTache->addAction(actionImprimer);
        barreTache->addSeparator();
        barreTache->addAction(actionQuitter_3);
        barreTache->addAction(actionTutoriels);
        barreTache->addAction(actionD_veloppeur);

        retranslateUi(fenetrePrincipale);

        QMetaObject::connectSlotsByName(fenetrePrincipale);
    } // setupUi

    void retranslateUi(QMainWindow *fenetrePrincipale)
    {
        fenetrePrincipale->setWindowTitle(QApplication::translate("fenetrePrincipale", "Dessin2D", 0));
        actionNouveau->setText(QApplication::translate("fenetrePrincipale", "Nouveau", 0));
        actionOuvrir->setText(QApplication::translate("fenetrePrincipale", "Ouvrir", 0));
        actionEnregistrer->setText(QApplication::translate("fenetrePrincipale", "Enregistrer", 0));
        actionImprimer->setText(QApplication::translate("fenetrePrincipale", "Imprimer", 0));
        actionQuitter_3->setText(QApplication::translate("fenetrePrincipale", "Quitter", 0));
        actionPlein_cran->setText(QApplication::translate("fenetrePrincipale", "Plein \303\251cran", 0));
        actionTutoriels->setText(QApplication::translate("fenetrePrincipale", "Tutoriels", 0));
        actionD_veloppeur->setText(QApplication::translate("fenetrePrincipale", "D\303\251veloppeur", 0));
        actionZoom->setText(QApplication::translate("fenetrePrincipale", "Zoom +", 0));
        actionZoom_2->setText(QApplication::translate("fenetrePrincipale", "Zoom -", 0));
        actionVue_ensemble->setText(QApplication::translate("fenetrePrincipale", "Vue ensemble", 0));
        actionCalculette->setText(QApplication::translate("fenetrePrincipale", "Calculette", 0));
        actionMath_matique->setText(QApplication::translate("fenetrePrincipale", "Math\303\251matique", 0));
        actionPr_c_dent->setText(QApplication::translate("fenetrePrincipale", "Pr\303\251c\303\251dent", 0));
        actionSuivant->setText(QApplication::translate("fenetrePrincipale", "Suivant", 0));
        btnSegment->setText(QString());
        btnMultiSegment->setText(QString());
        btnCarre->setText(QString());
        btnRectangle->setText(QString());
        btnTriangle->setText(QApplication::translate("fenetrePrincipale", "4", 0));
        btnCercle->setText(QString());
        menuFichier->setTitle(QApplication::translate("fenetrePrincipale", "Fichier", 0));
        menuAffichage->setTitle(QApplication::translate("fenetrePrincipale", "Affichage", 0));
        menuAide->setTitle(QApplication::translate("fenetrePrincipale", "Aide", 0));
        menu->setTitle(QApplication::translate("fenetrePrincipale", "?", 0));
        menuOutils->setTitle(QApplication::translate("fenetrePrincipale", "Outils", 0));
        menuEdition->setTitle(QApplication::translate("fenetrePrincipale", "Edition", 0));
    } // retranslateUi

};

namespace Ui {
    class fenetrePrincipale: public Ui_fenetrePrincipale {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FENETREPRINCIPALE_H
