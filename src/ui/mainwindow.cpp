#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setWindowTitle(tr("Resource Commit Management"));
    setWindowIcon(QIcon(":/images/icon.png"));
}

MainWindow::~MainWindow()
{
    delete ui;
}
