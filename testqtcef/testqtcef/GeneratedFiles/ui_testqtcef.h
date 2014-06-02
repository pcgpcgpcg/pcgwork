/********************************************************************************
** Form generated from reading UI file 'testqtcef.ui'
**
** Created: Tue Apr 29 10:33:06 2014
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTQTCEF_H
#define UI_TESTQTCEF_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_testqtcefClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *testqtcefClass)
    {
        if (testqtcefClass->objectName().isEmpty())
            testqtcefClass->setObjectName(QString::fromUtf8("testqtcefClass"));
        testqtcefClass->resize(600, 400);
        menuBar = new QMenuBar(testqtcefClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        testqtcefClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(testqtcefClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        testqtcefClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(testqtcefClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        testqtcefClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(testqtcefClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        testqtcefClass->setStatusBar(statusBar);

        retranslateUi(testqtcefClass);

        QMetaObject::connectSlotsByName(testqtcefClass);
    } // setupUi

    void retranslateUi(QMainWindow *testqtcefClass)
    {
        testqtcefClass->setWindowTitle(QApplication::translate("testqtcefClass", "testqtcef", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class testqtcefClass: public Ui_testqtcefClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTQTCEF_H
