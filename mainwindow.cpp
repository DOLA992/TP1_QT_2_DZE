#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}
MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_BtnSauvgarde_clicked()
{
    QString code = ui->Code->text();
    if (code.isEmpty()) {
        QMessageBox msgBox;
        msgBox.setText("Erreur");
        msgBox.setInformativeText("Le champ de code est vide !");
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.exec();
    } else {
        ui->DernierCodeSaisi->setText(code);
    }
}
