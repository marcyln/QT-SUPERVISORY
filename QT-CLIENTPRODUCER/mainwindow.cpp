#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    socket = new QTcpSocket(this);


    connect(ui->pushButtonStart,
            SIGNAL(clicked(bool)),
            this,
            SLOT(controlTimerStart())
            );


    connect(ui->pushButtonConnect,
            SIGNAL(clicked(bool)),
            this,
            SLOT(tcpConnect())
            );


    connect(ui->pushButtonDisconnect,
            SIGNAL(clicked(bool)),
            this,
            SLOT(tcpDisconnect())
            );


    connect(ui->pushButtonStop,
            SIGNAL(clicked(bool)),
            this,
            SLOT(controlTimerStop())
            );
}


void MainWindow::tcpConnect()
{
    QString ip = ui->lineEditIP->text();  // Obtém o IP inserido pelo usuário

    socket->connectToHost(ip,1234);  // Tenta se conectar ao host na porta 1234

    if(!(socket->waitForConnected(3000)))
    {
        ui->labelStatus->setText("Erro ao conectar");
        return;
    }
    ui->labelStatus->setText("Conectado");
}


void MainWindow::tcpDisconnect()
{
    if(socket->state() != QAbstractSocket::ConnectedState)
    {
        return;
    }
    socket->disconnectFromHost();
    ui->labelStatus->setText("Desconectado");
}


void MainWindow::putData()
{
    QString str;
    qint64 msecdate;

    int min = ui->horizontalSliderMin->value();  // Obtém o valor mínimo do slider
    int max = ui->horizontalSliderMax->value();  // Obtém o valor máximo do slider
    int aleat = min + std::rand() % (max - min + 1);  // Gera um número aleatório entre min e max

    if(socket->state()== QAbstractSocket::ConnectedState)
    {
        msecdate = QDateTime::currentDateTime().toMSecsSinceEpoch();
        str = "set "+ QString::number(msecdate) + " " +
              QString::number(aleat)+"\r\n";
        qDebug() << str;
        qDebug() << socket->write(str.toStdString().c_str())
                 << " bytes written";  // Envia a string de dados ao servidor
        if(socket->waitForBytesWritten(3000))
        {
            qDebug() << "wrote";
        }
        ui->textBrowser->append(str);  // Adiciona a string de dados ao textBrowser da interface
    }
}


void MainWindow::controlTimerStart()
{
    QString str;
    str = "Sending data";
    ui->textBrowser->append(str);  // Adiciona mensagem ao textBrowser
    temp = startTimer(ui->horizontalSliderTime->value() * 1000);  // Inicia o timer com intervalo definido pelo slider
}


void MainWindow::controlTimerStop()
{
    QString str;
    str = "Stop sending data";
    ui->textBrowser->append(str);
    killTimer(temp);  // Para o timer
}


void MainWindow::timerEvent(QTimerEvent *timer)
{
    putData();
}


MainWindow::~MainWindow()
{
    delete socket;  // Libera a memória alocada para o socket
    delete ui;  // Libera a memória alocada para a interface de usuário
}
