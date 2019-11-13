#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "scribblearea.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    scribbleArea(new ScribbleArea)
{
    ui->setupUi(this);
    ui->scribblePlaceholer->addWidget(scribbleArea);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_redButton_clicked()
{
    if(!scribbleArea->getEraser())
    {
        scribbleArea->setColor(Qt::red);
    }

}

void MainWindow::on_greenButton_clicked()
{
    if(!scribbleArea->getEraser())
    {
        scribbleArea->setColor(Qt::green);
    }
}

void MainWindow::on_blueButton_clicked()
{

    if(!scribbleArea->getEraser())
    {
        scribbleArea->setColor(Qt::blue);
    }
}

void MainWindow::on_blackButton_clicked()
{
    if(!scribbleArea->getEraser())
    {
        scribbleArea->setColor(Qt::black);
    }
}

void MainWindow::on_yellowButton_clicked()
{
    if(!scribbleArea->getEraser())
    {
        scribbleArea->setColor(Qt::yellow);
    }
}

void MainWindow::on_magentaButton_clicked()
{
    if(!scribbleArea->getEraser())
    {
        scribbleArea->setColor(Qt::magenta);
    }
}

void MainWindow::on_thinButton_clicked()
{
    scribbleArea->setPenWidth(2);
}

void MainWindow::on_middleButton_clicked()
{
    scribbleArea->setPenWidth(5);
}

void MainWindow::on_thickButton_clicked()
{
    scribbleArea->setPenWidth(10);
}

void MainWindow::on_eraserButton_clicked()
{
    scribbleArea->setEraser(true);
    scribbleArea->setColor(Qt::white);
}

void MainWindow::on_penButton_clicked()
{
    scribbleArea->setEraser(false);
    scribbleArea->setColor(Qt::black);
}

void MainWindow::on_helloButton_clicked()
{
    scribbleArea->setMyFont(QFont("magneto", 14));
    scribbleArea->setText("Hello");
}

void MainWindow::on_emo1Button_clicked()
{
    scribbleArea->setMyFont(QFont("tempus sans itc", 12));
    scribbleArea->setText("（‐＾▽＾‐）");
}

void MainWindow::on_emo2Button_clicked()
{
    scribbleArea->setMyFont(QFont("times new roman", 12));
    scribbleArea->setText("( •̀ o •́ )");
}

void MainWindow::on_emo3Button_clicked()
{
    scribbleArea->setMyFont(QFont("ms shell dlg 2", 16));
    scribbleArea->setText("(⌣̯̀⌣́)");
}

void MainWindow::on_clearButton_clicked()
{
    scribbleArea->resetImage();
}
