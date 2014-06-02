#include "testqtcef.h"
#include <QDebug>

testqtcef::testqtcef(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	
	//this->resize(1024,768);

	

	qDebug()<<"begin to load webview";

	m_pWebview = new QCefWebView(this);
	this->setCentralWidget(m_pWebview);

	QString qstri=QApplication::applicationDirPath();
	QString qstri2=qstri+QString::fromLocal8Bit("\\map.html");
	m_pWebview->load(QUrl(qstri2));
	//m_pWebview->load(QUrl(QString::fromLocal8Bit("http://www.sohu.com")));
}

testqtcef::~testqtcef()
{

}
