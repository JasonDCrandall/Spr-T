#ifndef SPRT_H
#define SPRT_H

#include <QMainWindow>
#include <QPainter>

QT_BEGIN_NAMESPACE
namespace Ui { class SprT; }
QT_END_NAMESPACE

class SprT : public QMainWindow
{
    Q_OBJECT

public:
    SprT(QWidget *parent = nullptr);
    ~SprT();

    virtual void paintEvent(QPaintEvent *event);

private slots:
    void on_canvasButton_clicked();

private:
    Ui::SprT *ui;
};
#endif // SPRT_H
