/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *scribblePlaceholer;
    QPushButton *redButton;
    QPushButton *greenButton;
    QPushButton *blueButton;
    QPushButton *blackButton;
    QPushButton *yellowButton;
    QPushButton *magentaButton;
    QPushButton *thinButton;
    QPushButton *middleButton;
    QPushButton *thickButton;
    QPushButton *eraserButton;
    QPushButton *penButton;
    QPushButton *clearButton;
    QPushButton *helloButton;
    QPushButton *emo1Button;
    QPushButton *emo2Button;
    QPushButton *emo3Button;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(920, 631);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 741, 561));
        scribblePlaceholer = new QVBoxLayout(verticalLayoutWidget);
        scribblePlaceholer->setSpacing(6);
        scribblePlaceholer->setContentsMargins(11, 11, 11, 11);
        scribblePlaceholer->setObjectName(QString::fromUtf8("scribblePlaceholer"));
        scribblePlaceholer->setContentsMargins(0, 0, 0, 0);
        redButton = new QPushButton(centralWidget);
        redButton->setObjectName(QString::fromUtf8("redButton"));
        redButton->setGeometry(QRect(760, 290, 50, 50));
        redButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: solid;\n"
"border-width:0px;\n"
"border-radius:50px;\n"
" background-color:rgb(255, 0, 0)\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(255, 103, 103)\n"
"}\n"
""));
        greenButton = new QPushButton(centralWidget);
        greenButton->setObjectName(QString::fromUtf8("greenButton"));
        greenButton->setGeometry(QRect(810, 290, 50, 50));
        greenButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: solid;\n"
"border-width:0px;\n"
"border-radius:50px;\n"
"background-color: rgb(0, 255, 0)\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(103, 255, 103)\n"
"}"));
        blueButton = new QPushButton(centralWidget);
        blueButton->setObjectName(QString::fromUtf8("blueButton"));
        blueButton->setGeometry(QRect(860, 290, 50, 50));
        blueButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: solid;\n"
"border-width:0px;\n"
"border-radius:50px;\n"
"background-color: rgb(0, 0, 255)\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(103, 103, 255)\n"
"}"));
        blackButton = new QPushButton(centralWidget);
        blackButton->setObjectName(QString::fromUtf8("blackButton"));
        blackButton->setGeometry(QRect(760, 340, 50, 50));
        blackButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: solid;\n"
"border-width:0px;\n"
"border-radius:50px;\n"
"background-color: rgb(0, 0, 0)\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(103, 103, 103)\n"
"}"));
        yellowButton = new QPushButton(centralWidget);
        yellowButton->setObjectName(QString::fromUtf8("yellowButton"));
        yellowButton->setGeometry(QRect(810, 340, 50, 50));
        yellowButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: solid;\n"
"border-width:0px;\n"
"border-radius:50px;\n"
"background-color: rgb(255, 255, 0)\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(255, 255, 103)\n"
"}"));
        magentaButton = new QPushButton(centralWidget);
        magentaButton->setObjectName(QString::fromUtf8("magentaButton"));
        magentaButton->setGeometry(QRect(860, 340, 50, 50));
        magentaButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"border-style: solid;\n"
"border-width:0px;\n"
"border-radius:50px;\n"
"background-color: rgb(255, 0, 255)\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(255, 103, 255)\n"
"}"));
        thinButton = new QPushButton(centralWidget);
        thinButton->setObjectName(QString::fromUtf8("thinButton"));
        thinButton->setGeometry(QRect(760, 400, 50, 50));
        thinButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-image:url(:images/thin.png);\n"
"}\n"
""));
        middleButton = new QPushButton(centralWidget);
        middleButton->setObjectName(QString::fromUtf8("middleButton"));
        middleButton->setGeometry(QRect(810, 400, 50, 50));
        middleButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-image:url(:images/middle.png);\n"
"}\n"
""));
        thickButton = new QPushButton(centralWidget);
        thickButton->setObjectName(QString::fromUtf8("thickButton"));
        thickButton->setGeometry(QRect(860, 400, 50, 50));
        thickButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-image:url(:images/thick.png);\n"
"}\n"
""));
        eraserButton = new QPushButton(centralWidget);
        eraserButton->setObjectName(QString::fromUtf8("eraserButton"));
        eraserButton->setGeometry(QRect(760, 460, 150, 55));
        eraserButton->setStyleSheet(QString::fromUtf8("background-image:url(:images/eraser.jpg);"));
        penButton = new QPushButton(centralWidget);
        penButton->setObjectName(QString::fromUtf8("penButton"));
        penButton->setGeometry(QRect(760, 220, 150, 55));
        penButton->setStyleSheet(QString::fromUtf8("background-image:url(:images/pen.png);"));
        clearButton = new QPushButton(centralWidget);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));
        clearButton->setGeometry(QRect(760, 520, 150, 55));
        QFont font;
        font.setPointSize(14);
        clearButton->setFont(font);
        helloButton = new QPushButton(centralWidget);
        helloButton->setObjectName(QString::fromUtf8("helloButton"));
        helloButton->setGeometry(QRect(770, 40, 70, 70));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Magneto"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        helloButton->setFont(font1);
        emo1Button = new QPushButton(centralWidget);
        emo1Button->setObjectName(QString::fromUtf8("emo1Button"));
        emo1Button->setGeometry(QRect(840, 40, 70, 70));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Tempus Sans ITC"));
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setWeight(50);
        emo1Button->setFont(font2);
        emo2Button = new QPushButton(centralWidget);
        emo2Button->setObjectName(QString::fromUtf8("emo2Button"));
        emo2Button->setGeometry(QRect(770, 110, 70, 70));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Times New Roman"));
        font3.setPointSize(12);
        font3.setBold(false);
        font3.setWeight(50);
        emo2Button->setFont(font3);
        emo3Button = new QPushButton(centralWidget);
        emo3Button->setObjectName(QString::fromUtf8("emo3Button"));
        emo3Button->setGeometry(QRect(840, 110, 70, 70));
        QFont font4;
        font4.setPointSize(16);
        emo3Button->setFont(font4);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(760, 190, 30, 30));
        label->setPixmap(QPixmap(QString::fromUtf8("images/leftClick.png")));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(760, 10, 30, 30));
        label_2->setPixmap(QPixmap(QString::fromUtf8("images/rightClick.png")));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 920, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        redButton->setText(QString());
        greenButton->setText(QString());
        blueButton->setText(QString());
        blackButton->setText(QString());
        yellowButton->setText(QString());
        magentaButton->setText(QString());
        thinButton->setText(QApplication::translate("MainWindow", "S", nullptr));
        middleButton->setText(QApplication::translate("MainWindow", "M", nullptr));
        thickButton->setText(QApplication::translate("MainWindow", "L", nullptr));
        eraserButton->setText(QString());
        penButton->setText(QString());
        clearButton->setText(QApplication::translate("MainWindow", "Clear", nullptr));
        helloButton->setText(QApplication::translate("MainWindow", "Hello", nullptr));
        emo1Button->setText(QApplication::translate("MainWindow", "\357\274\210\342\200\220\357\274\276\342\226\275\357\274\276\342\200\220\357\274\211", nullptr));
        emo2Button->setText(QApplication::translate("MainWindow", "( \342\200\242\314\200 o \342\200\242\314\201 ) ", nullptr));
        emo3Button->setText(QApplication::translate("MainWindow", "(\342\214\243\314\257\314\200\342\214\243\314\201)", nullptr));
        label->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
