#include "testqtcef.h"
#include <QtGui/QApplication>
#include "cefclient/cefclient.h"
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	//³õÊ¼»¯cef
	int result = CefInit(argc, argv);
	if (result >= 0)
		return result;

	testqtcef w;
	w.show();
	result= a.exec();

	CefQuit();
	return result;
}
