#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "scribblearea.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_redButton_clicked();

    void on_greenButton_clicked();

    void on_blueButton_clicked();

    void on_blackButton_clicked();

    void on_yellowButton_clicked();

    void on_thinButton_clicked();

    void on_magentaButton_clicked();

    void on_middleButton_clicked();

    void on_thickButton_clicked();

    void on_eraserButton_clicked();

    void on_penButton_clicked();

    void on_helloButton_clicked();

    void on_emo1Button_clicked();

    void on_emo2Button_clicked();

    void on_emo3Button_clicked();

    void on_clearButton_clicked();

private:
    Ui::MainWindow *ui;
    ScribbleArea *scribbleArea;
};

#endif // MAINWINDOW_H
