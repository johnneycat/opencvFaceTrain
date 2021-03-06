#-------------------------------------------------
#
# Project created by QtCreator 2018-10-16T18:03:02
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = opencvFaceCascade
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        widget.cpp

HEADERS += \
        widget.h

INCLUDEPATH += /home/wlw/Desktop/opencv-2.4.9/out/include

LIBS += -L/home/wlw/Desktop/opencv-2.4.9/out/lib -lopencv_calib3d \
-lopencv_features2d  -lopencv_highgui  -lopencv_ml  -lopencv_ocl \
-lopencv_superres    -lopencv_contrib     -lopencv_flann \
-lopencv_imgproc     -lopencv_nonfree     -lopencv_photo   \
-lopencv_video       -lopencv_core        -lopencv_gpu   \
-lopencv_legacy      -lopencv_objdetect   -lopencv_stitching  \
-lopencv_videostab

DESTDIR += ./out
