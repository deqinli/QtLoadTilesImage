#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ImgViewer.h"

QT_BEGIN_NAMESPACE
namespace Ui { class ImgViewerClass; };
QT_END_NAMESPACE

class ImgViewer : public QMainWindow
{
    Q_OBJECT

public:
    ImgViewer(QWidget *parent = nullptr);
    ~ImgViewer();

private:
    Ui::ImgViewerClass *ui;
};
