/********************************************************************************
** Form generated from reading UI file 'ImgViewer.ui'
**
** Created by: Qt User Interface Compiler version 5.15.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMGVIEWER_H
#define UI_IMGVIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImgViewerClass
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuWindow;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;

    void setupUi(QMainWindow *ImgViewerClass)
    {
        if (ImgViewerClass->objectName().isEmpty())
            ImgViewerClass->setObjectName(QString::fromUtf8("ImgViewerClass"));
        ImgViewerClass->resize(1397, 803);
        centralWidget = new QWidget(ImgViewerClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        ImgViewerClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ImgViewerClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1397, 23));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuWindow = new QMenu(menuBar);
        menuWindow->setObjectName(QString::fromUtf8("menuWindow"));
        ImgViewerClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ImgViewerClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        ImgViewerClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ImgViewerClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        ImgViewerClass->setStatusBar(statusBar);
        dockWidget = new QDockWidget(ImgViewerClass);
        dockWidget->setObjectName(QString::fromUtf8("dockWidget"));
        dockWidget->setLayoutDirection(Qt::LeftToRight);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        dockWidget->setWidget(dockWidgetContents);
        ImgViewerClass->addDockWidget(Qt::RightDockWidgetArea, dockWidget);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuWindow->menuAction());

        retranslateUi(ImgViewerClass);

        QMetaObject::connectSlotsByName(ImgViewerClass);
    } // setupUi

    void retranslateUi(QMainWindow *ImgViewerClass)
    {
        ImgViewerClass->setWindowTitle(QCoreApplication::translate("ImgViewerClass", "ImgViewer", nullptr));
        menuFile->setTitle(QCoreApplication::translate("ImgViewerClass", "File", nullptr));
        menuWindow->setTitle(QCoreApplication::translate("ImgViewerClass", "Window", nullptr));
        dockWidget->setWindowTitle(QCoreApplication::translate("ImgViewerClass", "layers", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ImgViewerClass: public Ui_ImgViewerClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMGVIEWER_H
