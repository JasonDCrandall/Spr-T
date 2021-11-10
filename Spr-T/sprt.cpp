#include "sprt.h"
#include "ui_sprt.h"
#include <iostream>

SprT::SprT(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SprT)
{
    ui->setupUi(this);
}

SprT::~SprT()
{
    delete ui;
}

void SprT::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    painter.drawRect(QRect(384, 50, 512, 512));
    int canvasWidth = 32;
    double pixelLength = 512/canvasWidth;

    // Draw all vertical lines
    for (int i=0; i<canvasWidth; i++){
        painter.drawLine(384 + (pixelLength * i), 50, 384 + (pixelLength * i), 562);
    }

    // Draw all horizontal lines
    for (int i=0; i<canvasWidth; i++){
        painter.drawLine(384, 50 + (pixelLength * i), 896, 50 + (pixelLength * i));
    }
}

void SprT::on_canvasButton_clicked()
{
//    qDebug()<<ui->canvasButton->cursor().pos();//screen coordinates
//    qDebug()<<ui->canvasButton->mapFromGlobal(ui->canvasButton->cursor().pos());//local coordinates
}


void SprT::on_canvasButton_pressed()
{
    qDebug()<<ui->canvasButton->mapFromGlobal(ui->canvasButton->cursor().pos());//local coordinates

}

