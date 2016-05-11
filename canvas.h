#ifndef CANVAS_H
#define CANVAS_H

#include <QMainWindow>

class canvas : public QMainWindow
{
    Q_OBJECT

public:
    canvas(QWidget *parent = 0);
    ~canvas();
};

#endif // CANVAS_H
