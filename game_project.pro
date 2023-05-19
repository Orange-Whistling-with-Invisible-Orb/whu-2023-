QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    item_character.cpp \
    main.cpp \
    map2.cpp \
    myitem.cpp \
    widget_rule.cpp \
    widget_start.cpp

HEADERS += \
    item_character.h \
    map2.h \
    myitem.h \
    widget_rule.h \
    widget_start.h

FORMS += \
    widget_rule.ui \
    widget_start.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc
