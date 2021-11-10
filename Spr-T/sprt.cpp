#include "sprt.h"
#include "ui_sprt.h"

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
    painter.drawRect(QRect(390, 50, 500, 500));
    int canvasWidth = 25;
    double pixelLength = 500/canvasWidth;

    // Draw all vertical lines
    for (int i=0; i<canvasWidth; i++){
        painter.drawLine(390 + (pixelLength * i), 50, 390 + (pixelLength * i), 550);
    }

    // Draw all horizontal lines
    for (int i=0; i<canvasWidth; i++){
        painter.drawLine(390, 50 + (pixelLength * i), 890, 50 + (pixelLength * i));
    }
}

void SprT::on_canvasButton_clicked()
{
}

