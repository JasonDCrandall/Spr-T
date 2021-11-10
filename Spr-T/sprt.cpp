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

