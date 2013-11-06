#ifndef GUI_POINT_H
#define GUI_POINT_H

#include <QWidget>
#include <QLabel>
#include <QSpinBox>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>

class GuiPoint : public QWidget
{
public:
    GuiPoint();
    QHBoxLayout *pointLayout;
    QLabel *labelPoint;
    QLabel *labelx;
    QSpinBox *ptx;
    QLabel *labely;
    QSpinBox *pty;
};

#endif // GUI_POINT_H
