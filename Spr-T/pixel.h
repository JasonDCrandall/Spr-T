#ifndef PIXEL_H
#define PIXEL_H

#include <QObject>

class Pixel : public QObject
{
    Q_OBJECT
public:
    explicit Pixel(QObject *parent = nullptr);

signals:

};

#endif // PIXEL_H
