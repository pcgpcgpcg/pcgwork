#ifndef TESTQTCEF_H
#define TESTQTCEF_H

#include <QtGui/QMainWindow>
#include <QVBoxLayout>
#include "ui_testqtcef.h"
#include "cefclient/qcefwebview.h"

class testqtcef : public QMainWindow
{
	Q_OBJECT

public:
	testqtcef(QWidget *parent = 0, Qt::WFlags flags = 0);
	~testqtcef();

private:
	QWidget *m_pCentralwidget;
	QCefWebView* m_pWebview;
	QVBoxLayout* m_pVBoxlayout;

private:
	Ui::testqtcefClass ui;
};

#endif // TESTQTCEF_H
