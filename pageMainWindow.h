//
// Created by Андрей Кондратов on 09.01.2022.
//

#ifndef HW2_PAGEMAINWINDOW_H
#define HW2_PAGEMAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QWebEngineView>

class PageMainWindow : public QMainWindow {
    Q_OBJECT

public:
    PageMainWindow(QWidget* parent = nullptr): QMainWindow(parent){}
    QPlainTextEdit *plainTextEdit = nullptr;
    QWebEngineView *webEngineView = nullptr;
};

#endif //HW2_PAGEMAINWINDOW_H
