#ifndef THREADANIMATION_H
#define THREADANIMATION_H

#include <QThread>
#include "bu.h"
#include "QMessageBox"
#include "QWidget"

class ThreadAnimation : public QThread
{
    Q_OBJECT;
public:
    ThreadAnimation(QFigure *fig);
    ~ThreadAnimation();
protected:
    void run();
private:
    QFigure *fig;
};
#endif // THREADANIMATION_H
