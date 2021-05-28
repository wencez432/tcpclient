#ifndef TCPCLIENT_H
#define TCPCLIENT_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class TcpClient; }
QT_END_NAMESPACE

class TcpClient : public QMainWindow
{
    Q_OBJECT

public:
    TcpClient(QWidget *parent = nullptr);
    ~TcpClient();

private:
    Ui::TcpClient *ui;
};
#endif // TCPCLIENT_H
