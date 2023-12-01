/********************************************************************************
** Form generated from reading UI file 'CompositeTileSourceWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPOSITETILESOURCEWIDGET_H
#define UI_COMPOSITETILESOURCEWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListView>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CompositeTileSourceWidgetClass
{
public:
    QListView *listView;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QToolButton *addSourceButton;
    QToolButton *removeSourceButton;
    QToolButton *moveDownButton;
    QToolButton *moveUpButton;
    QSlider *opacitySlider;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *CompositeTileSourceWidgetClass)
    {
        if (CompositeTileSourceWidgetClass->objectName().isEmpty())
            CompositeTileSourceWidgetClass->setObjectName(QString::fromUtf8("CompositeTileSourceWidgetClass"));
        CompositeTileSourceWidgetClass->resize(391, 342);
        listView = new QListView(CompositeTileSourceWidgetClass);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(9, 39, 375, 295));
        listView->setFocusPolicy(Qt::ClickFocus);
        listView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listView->setDragDropMode(QAbstractItemView::InternalMove);
        listView->setUniformItemSizes(true);
        layoutWidget = new QWidget(CompositeTileSourceWidgetClass);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 248, 24));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        addSourceButton = new QToolButton(layoutWidget);
        addSourceButton->setObjectName(QString::fromUtf8("addSourceButton"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/images/edit_add.png"), QSize(), QIcon::Normal, QIcon::Off);
        addSourceButton->setIcon(icon);
        addSourceButton->setPopupMode(QToolButton::InstantPopup);

        horizontalLayout->addWidget(addSourceButton);

        removeSourceButton = new QToolButton(layoutWidget);
        removeSourceButton->setObjectName(QString::fromUtf8("removeSourceButton"));
        removeSourceButton->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/images/editdelete.png"), QSize(), QIcon::Normal, QIcon::Off);
        removeSourceButton->setIcon(icon1);

        horizontalLayout->addWidget(removeSourceButton);

        moveDownButton = new QToolButton(layoutWidget);
        moveDownButton->setObjectName(QString::fromUtf8("moveDownButton"));
        moveDownButton->setEnabled(false);
        moveDownButton->setArrowType(Qt::DownArrow);

        horizontalLayout->addWidget(moveDownButton);

        moveUpButton = new QToolButton(layoutWidget);
        moveUpButton->setObjectName(QString::fromUtf8("moveUpButton"));
        moveUpButton->setEnabled(false);
        moveUpButton->setArrowType(Qt::UpArrow);

        horizontalLayout->addWidget(moveUpButton);

        opacitySlider = new QSlider(layoutWidget);
        opacitySlider->setObjectName(QString::fromUtf8("opacitySlider"));
        opacitySlider->setEnabled(false);
        opacitySlider->setMaximum(100);
        opacitySlider->setTracking(false);
        opacitySlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(opacitySlider);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        retranslateUi(CompositeTileSourceWidgetClass);

        QMetaObject::connectSlotsByName(CompositeTileSourceWidgetClass);
    } // setupUi

    void retranslateUi(QWidget *CompositeTileSourceWidgetClass)
    {
        CompositeTileSourceWidgetClass->setWindowTitle(QCoreApplication::translate("CompositeTileSourceWidgetClass", "CompositeTileSourceWidget", nullptr));
        addSourceButton->setText(QCoreApplication::translate("CompositeTileSourceWidgetClass", "+", nullptr));
        removeSourceButton->setText(QCoreApplication::translate("CompositeTileSourceWidgetClass", "X", nullptr));
        moveDownButton->setText(QCoreApplication::translate("CompositeTileSourceWidgetClass", "D", nullptr));
        moveUpButton->setText(QCoreApplication::translate("CompositeTileSourceWidgetClass", "U", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CompositeTileSourceWidgetClass: public Ui_CompositeTileSourceWidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPOSITETILESOURCEWIDGET_H
