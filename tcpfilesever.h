#ifndef TCPFILESEVER_H
#define TCPFILESEVER_H

#include<QtNetwork>
#include<QtWidgets>
#include <QDialog>

class TcpFilesever : public QDialog
{
    Q_OBJECT

public:
    TcpFilesever(QWidget *parent = nullptr);
    ~TcpFilesever();
public slots:
    void start();
    void acceptConnection();
    void updateServerProgress();
    void displayError (QAbstractSocket:: SocketError socketError);
private:
    QProgressBar *serverProgressBar;
    QLabel
        *serverStatusLabel;
    QPushButton
        *startButton;
    QPushButton
        *quitButton;
    QDialogButtonBox
        *buttonBox;
    QTcpServer
        tcpServer;
    QTcpSocket
        *tcpServerConnection;
    qint64
        totalBytes;
    qint64
        byteReceived;
    qint64
        fileNameSize;
    QString
        fileName;
    QFile
        *localFile;
    QByteArray
        inBlock;
};
#endif // TCPFILESEVER_H
