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
}
