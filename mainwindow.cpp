#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "game.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    this->setVisible(false);

    Game* game = new Game;
    game->run();

    this->setVisible(true);
}

void MainWindow::on_pushButton_2_clicked()
{
    exit(0);
}
