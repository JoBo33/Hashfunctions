#ifndef HASH_H
#define HASH_H

#include <QWidget>
#include <QtWidgets>
#include "ui_hashGenerator.h"


class hash : public QWidget, private Ui:: Hash
{
    Q_OBJECT
public:
    explicit hash(QWidget *parent = nullptr);
    void polinomialRolling();
    void stringFolding();
    void fibonacciHash();
    void missingInputException();

signals:

private slots:
    void chooseAlgorithm();

};

#endif // HASH_H
