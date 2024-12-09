/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *BtnSauvgarde;
    QLabel *DernierCodeSaisi;
    QLineEdit *Code;
    QPushButton *BtnSupprimer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        BtnSauvgarde = new QPushButton(centralwidget);
        BtnSauvgarde->setObjectName("BtnSauvgarde");
        BtnSauvgarde->setGeometry(QRect(100, 70, 91, 31));
        DernierCodeSaisi = new QLabel(centralwidget);
        DernierCodeSaisi->setObjectName("DernierCodeSaisi");
        DernierCodeSaisi->setGeometry(QRect(250, 100, 49, 16));
        Code = new QLineEdit(centralwidget);
        Code->setObjectName("Code");
        Code->setGeometry(QRect(100, 110, 113, 22));
        BtnSupprimer = new QPushButton(centralwidget);
        BtnSupprimer->setObjectName("BtnSupprimer");
        BtnSupprimer->setGeometry(QRect(240, 70, 91, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        BtnSauvgarde->setText(QCoreApplication::translate("MainWindow", "Sauvegarder", nullptr));
        DernierCodeSaisi->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        BtnSupprimer->setText(QCoreApplication::translate("MainWindow", "BtnSupprimer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
