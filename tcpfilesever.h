#ifndef TCPFILESEVER_H
#define TCPFILESEVER_H

#include <QDialog>

class TcpFilesever : public QDialog
{
    Q_OBJECT

public:
    TcpFilesever(QWidget *parent = nullptr);
    ~TcpFilesever();
};
#endif // TCPFILESEVER_H
