#ifndef PALETTE_H
#define PALETTE_H

#include <QObject>

class Palette : public QObject
{
    Q_OBJECT
public:
    explicit Palette(QObject *parent = nullptr);

signals:

};

#endif // PALETTE_H
