QT       += core gui charts

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Battery.cpp \
    DataProcessor.cpp \
    HealthData.cpp \
    RaDoTechDevice.cpp \
    Recommendations.cpp \
    User.cpp \
    Visualization.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    Battery.h \
    DataProcessor.h \
    HealthData.h \
    Profile.h \
    RaDoTechDevice.h \
    Recommendations.h \
    User.h \
    Visualization.h \
    mainwindow.h

FORMS += \
    mainwindow.ui

TRANSLATIONS += \
    RaDoTechSimulation_en_CA.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
