#include "gui_point.h"

GuiPoint::GuiPoint() : QWidget()
{
    //Définition du point
    this->labelPoint = new QLabel("Point : ");
    this->pointLayout = new QHBoxLayout();
    this->labelx = new QLabel("x : ");
    this->ptx = new QSpinBox();
    this->labely = new QLabel("y : ");
    this->pty = new QSpinBox();
    this->pointLayout->addWidget(this->labelPoint);
    this->pointLayout->addWidget(this->labelx);
    this->pointLayout->addWidget(this->ptx);
    this->pointLayout->addWidget(this->labely);
    this->pointLayout->addWidget(this->pty);
    this->ptx->setMaximum(1000);
    this->pty->setMaximum(1000);
    this->ptx->setMinimum(0);
    this->pty->setMinimum(0);
}

void GuiPoint::reinit()
{
    this->ptx->setValue(0);
    this->pty->setValue(0);
}

void GuiPoint::detruit()
{
    delete pointLayout;
    delete labelPoint;
    delete labelx;
    delete ptx;
    delete labely;
    delete pty;
}
