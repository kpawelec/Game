#include "canvas.h"

canvas::canvas(QWidget *parent)
    : QMainWindow(parent)
{
    this->setFixedSize(640,480);
}

canvas::~canvas()
{

}
