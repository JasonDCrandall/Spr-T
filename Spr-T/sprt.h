#ifndef SPRT_H
#define SPRT_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class SprT; }
QT_END_NAMESPACE

class SprT : public QMainWindow
{
    Q_OBJECT

public:
    SprT(QWidget *parent = nullptr);
    ~SprT();

private:
    Ui::SprT *ui;
};
#endif // SPRT_H
