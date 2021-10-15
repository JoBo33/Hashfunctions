/********************************************************************************
** Form generated from reading UI file 'hashGenerator.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HASHGENERATOR_H
#define UI_HASHGENERATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Hash
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBoxAlgorithms;
    QPushButton *buttonGenerate;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *hboxLayout;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label_6;
    QSpacerItem *spacerItem;
    QSplitter *splitter;
    QTextEdit *textEditInput;
    QTextEdit *textEditOutput;

    void setupUi(QWidget *Hash)
    {
        if (Hash->objectName().isEmpty())
            Hash->setObjectName(QString::fromUtf8("Hash"));
        Hash->resize(470, 300);
        Hash->setMinimumSize(QSize(470, 300));
        verticalLayout = new QVBoxLayout(Hash);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        _2 = new QHBoxLayout();
        _2->setSpacing(6);
        _2->setObjectName(QString::fromUtf8("_2"));
        _2->setContentsMargins(1, 1, 1, 1);
        groupBox = new QGroupBox(Hash);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        comboBoxAlgorithms = new QComboBox(groupBox);
        comboBoxAlgorithms->addItem(QString());
        comboBoxAlgorithms->addItem(QString());
        comboBoxAlgorithms->addItem(QString());
        comboBoxAlgorithms->setObjectName(QString::fromUtf8("comboBoxAlgorithms"));

        horizontalLayout->addWidget(comboBoxAlgorithms);

        buttonGenerate = new QPushButton(groupBox);
        buttonGenerate->setObjectName(QString::fromUtf8("buttonGenerate"));

        horizontalLayout->addWidget(buttonGenerate);


        _2->addWidget(groupBox);

        horizontalSpacer_2 = new QSpacerItem(500, 20, QSizePolicy::Ignored, QSizePolicy::Minimum);

        _2->addItem(horizontalSpacer_2);

        verticalSpacer = new QSpacerItem(1, 58, QSizePolicy::Minimum, QSizePolicy::Fixed);

        _2->addItem(verticalSpacer);


        verticalLayout->addLayout(_2);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setContentsMargins(1, 1, 1, 1);
        label_5 = new QLabel(Hash);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        hboxLayout->addWidget(label_5);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        hboxLayout->addItem(verticalSpacer_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(horizontalSpacer);

        label_6 = new QLabel(Hash);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        hboxLayout->addWidget(label_6);

        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);


        verticalLayout->addLayout(hboxLayout);

        splitter = new QSplitter(Hash);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        textEditInput = new QTextEdit(splitter);
        textEditInput->setObjectName(QString::fromUtf8("textEditInput"));
        splitter->addWidget(textEditInput);
        textEditOutput = new QTextEdit(splitter);
        textEditOutput->setObjectName(QString::fromUtf8("textEditOutput"));
        textEditOutput->setEnabled(true);
        textEditOutput->setReadOnly(true);
        splitter->addWidget(textEditOutput);

        verticalLayout->addWidget(splitter);


        retranslateUi(Hash);

        QMetaObject::connectSlotsByName(Hash);
    } // setupUi

    void retranslateUi(QWidget *Hash)
    {
        Hash->setWindowTitle(QCoreApplication::translate("Hash", "Hash-generator", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("Hash", "Algorithm", nullptr));
        comboBoxAlgorithms->setItemText(0, QCoreApplication::translate("Hash", "Polinomial rolling hash function", nullptr));
        comboBoxAlgorithms->setItemText(1, QCoreApplication::translate("Hash", "String folding", nullptr));
        comboBoxAlgorithms->setItemText(2, QCoreApplication::translate("Hash", "Fibonacci hash", nullptr));

        buttonGenerate->setText(QCoreApplication::translate("Hash", "Generate", nullptr));
        label_5->setText(QCoreApplication::translate("Hash", "Input", nullptr));
        label_6->setText(QCoreApplication::translate("Hash", "Output", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Hash: public Ui_Hash {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HASHGENERATOR_H
