#include "hash.h"
//#include <QtWidgets>


hash::hash(QWidget *parent) : QWidget(parent)
{
    setupUi(this);

    connect(buttonGenerate, SIGNAL(clicked()), this, SLOT(chooseAlgorithm()));
}

void hash::chooseAlgorithm()
{
    if(comboBoxAlgorithms->currentIndex() == 0)
    {
        polinomialRolling();
    }
    else if(comboBoxAlgorithms->currentIndex() == 1){
        stringFolding();
    }
    else if(comboBoxAlgorithms->currentIndex() == 2){
        fibonacciHash();
    }
}

void hash::polinomialRolling()
{
    //formula: H(s0, s1, …, sk) = (s0 _ pk-1 + s1 _ pk-2 + … + sk * p0 ) mod M
    //  or     H i = (P * H i-1 + S i ) mod M
    QString input = textEditInput->toPlainText();
    if(input.isEmpty()){
        missingInputException();
        return;
    }
    long hashV = 0;
    int P = 31;
    long M = pow(10,9)+9;
    for(int i = 0; i < input.length(); i++){
        QChar tm = input.at(i);
        int s;
        s = tm.toLatin1();
        hashV = (hashV*P+s)%M;
    }
    if (hashV < 0){
        hashV *= -1;
    }
    textEditOutput->setText(QString::number(hashV));
}

void hash::stringFolding(){
    unsigned long long M = 14495372961309516197;
    QString input = textEditInput->toPlainText();
    if(input.isEmpty()){
        missingInputException();
        return;
    }
    long tm;
    long hashV = 0;
    for(int i = 0; i < input.length(); i++){
        if(i % 8 != 0){
            tm = tm*256;
        }
        else{
            tm = 1;
        }
        QChar currentChar = input.at(i);
        int s;
        s = currentChar.toLatin1();
        hashV += s*tm;

    }
    if (hashV < 0){
        hashV *= -1;
    }
    textEditOutput->setText(QString::number(hashV%M));
}

void hash::fibonacciHash(){
    // b = the number of bits in an integer, usually either 32 or 64
    // 2^b / ((1 + √5) ÷ 2) =  11400714819323198485 (if b=64)
    unsigned long long constant = 11400714819323198485;
    unsigned long long input = textEditInput->toPlainText().toULongLong();

    if(textEditInput->toPlainText().isEmpty()){
        missingInputException();
        return;
    }
    else if(textEditInput->toPlainText() != "0" && input == 0){
        textEditOutput->setText("Fibonacci hash not possible with this input.\n"
                                "It has to be an unsigned long long!");
        return;
    }

    long hashV = (input * constant) >> 54;
    textEditOutput->setText(QString::number(hashV));
}

void hash::missingInputException(){
    textEditOutput->setText("Input is missing!");
}
