#ifndef TCPCLIENT_H
#define TCPCLIENT_H

#include <QMainWindow>
#include <QTcpSocket>

QT_BEGIN_NAMESPACE
namespace Ui { class TcpClient; }
QT_END_NAMESPACE

class TcpClient : public QMainWindow
{
    Q_OBJECT

public:
    TcpClient(QWidget *parent = nullptr);
    ~TcpClient();

private slots:
    void requestMessage();
    void readMessage();
    void showError(QAbstractSocket::SocketError socketError);

private:
    Ui::TcpClient *ui;
    QTcpSocket *qTcpSocket = nullptr;
    QDataStream in;
    QString recivedMessage;
};
#endif // TCPCLIENT_H
