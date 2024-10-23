/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *new_var;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton;
    QWidget *tabWidgetPage2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(871, 606);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 871, 611));
        tabWidget->setAutoFillBackground(false);
        new_var = new QWidget();
        new_var->setObjectName("new_var");
        lineEdit = new QLineEdit(new_var);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(90, 30, 431, 28));
        QFont font;
        font.setPointSize(11);
        lineEdit->setFont(font);
        label = new QLabel(new_var);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 30, 101, 31));
        QFont font1;
        font1.setPointSize(12);
        label->setFont(font1);
        pushButton = new QPushButton(new_var);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(700, 500, 151, 51));
        pushButton->setFont(font1);
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::DocumentNew));
        tabWidget->addTab(new_var, icon, QString());
        tabWidgetPage2 = new QWidget();
        tabWidgetPage2->setObjectName("tabWidgetPage2");
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::DocumentProperties));
        tabWidget->addTab(tabWidgetPage2, icon1, QString());
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lineEdit->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "File Path: ", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(new_var), QCoreApplication::translate("MainWindow", "New Variable", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabWidgetPage2), QCoreApplication::translate("MainWindow", "&Gaps Filling", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
