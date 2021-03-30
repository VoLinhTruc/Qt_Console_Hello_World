#include <QCoreApplication>
#include <QDebug>

int main(int argc, char* argv[])
{
	QCoreApplication a(argc, argv);

	qDebug() << "Hello World !!! \r\n";

	return a.exec();
}