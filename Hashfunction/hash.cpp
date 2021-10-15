#include "hash.h"
//#include <QtWidgets>


hash::hash(QWidget *parent) : QWidget(parent)
{
    setupUi(this);

    connect(buttonGenerate, SIGNAL(clicked()), this, SLOT(chooseAlgorithm()));
    connect(textEditInput, SIGNAL(textEditInput.textChanged()), textEditOutput, SLOT(textEditOutput.setText("")));
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
}

void hash::polinomialRolling()
{
    //formula: H(s0, s1, …, sk) = (s0 _ pk-1 + s1 _ pk-2 + … + sk * p0 ) mod M
    //  or     H i = (P * H i-1 + S i ) mod M
    QString input = textEditInput->toPlainText();
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
