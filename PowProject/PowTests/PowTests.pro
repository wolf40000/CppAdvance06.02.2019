include(gtest_dependency.pri)

TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG += thread
CONFIG -= qt

INCLUDEPATH += ../Pow

HEADERS += \
    tst_mypow.h \
    ../Pow/mypow.h

SOURCES += \
        main.cpp \
        ../Pow/mypow.cpp
