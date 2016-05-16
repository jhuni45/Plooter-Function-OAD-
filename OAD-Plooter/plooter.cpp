#include "plooter.h"
#include "ui_plooter.h"

Plooter::Plooter(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Plooter)
{
    ui->setupUi(this);
}

Plooter::~Plooter()
{
    delete ui;
}
