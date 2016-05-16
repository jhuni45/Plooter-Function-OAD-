#ifndef PLOOTER_H
#define PLOOTER_H

#include <QMainWindow>

namespace Ui {
class Plooter;
}

class Plooter : public QMainWindow
{
    Q_OBJECT

public:
    explicit Plooter(QWidget *parent = 0);
    ~Plooter();

private:
    Ui::Plooter *ui;
};

#endif // PLOOTER_H
