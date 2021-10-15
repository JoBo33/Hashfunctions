TEMPLATE        = app
TARGET = Hash-generator


QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

FORMS += \
    hashGenerator.ui

SOURCES += \
    hash.cpp \
    main.cpp

HEADERS += \
    hash.h
