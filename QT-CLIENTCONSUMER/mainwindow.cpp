#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <vector>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);  // Configura a interface do usuário
    socket = new QTcpSocket(this);  // Cria um novo objeto QTcpSocket para comunicação de rede

    // Conecta o sinal do botão de conectar à função tcpConnect()
    connect(ui->pushButtonConnect,
            SIGNAL(clicked(bool)),
            this,
            SLOT(tcpConnect())
            );

    // Conecta o sinal do botão de desconectar à função tcpDisconnect()
    connect(ui->pushButtonDisconnect,
            SIGNAL(clicked(bool)),
            this,
            SLOT(tcpDisconnect())
            );


    connect(ui->pushButtonUpdate,
            SIGNAL(clicked(bool)),
            this,
            SLOT(showProducers())
            );


    connect(ui->pushButtonStart,
            SIGNAL(clicked(bool)),
            this,
            SLOT(controlTimerStart())
            );

    connect(ui->pushButtonStop,
            SIGNAL(clicked(bool)),
            this,
            SLOT(controlTimerStop())
            );
}

// Função para conectar ao servidor
void MainWindow::tcpConnect()
{
    QString ip = ui->lineEditIP->text();  // Obtém o endereço IP digitado na interface

    socket->connectToHost(ip, 1234);

    if (!(socket->waitForConnected(3000)))
    {
        ui->labelStatus->setText("Erro ao conectar");
        return;
    }
    ui->labelStatus->setText("Conectado");
}

void MainWindow::tcpDisconnect()
{
    // Verifica se o socket está conectado
    if (!(socket->state() == QAbstractSocket::ConnectedState))
    {
        return;
    }
    socket->disconnectFromHost();
    ui->labelStatus->setText("Desconectado");
}


void MainWindow::showProducers()
{
    QString str;

    // Verifica se o socket está conectado
    if (socket->state() != QAbstractSocket::ConnectedState)
    {
        return;
    }

    ui->listWidgetIP->clear();  // Limpa a lista de IPs na interface

    socket->write("list\r\n");  // Envia o comando "list" ao servidor
    socket->waitForBytesWritten();  // Espera até que todos os bytes sejam escritos
    socket->waitForReadyRead();  // Espera até que haja dados disponíveis para leitura

    // Lê os dados disponíveis do servidor
    while (socket->bytesAvailable())
    {
        str = socket->readLine().replace("\n", "").replace("\r", "");
        ui->listWidgetIP->addItem(str);  // Adiciona o IP à lista na interface
    }
}


void MainWindow::setProducerIP()
{
    // Verifica se o socket está conectado
    if (socket->state() != QAbstractSocket::ConnectedState)
    {
        return;
    }


    this->selectedProducerIP = ui->lineEditIP->selectedText();
}


void MainWindow::getData()
{
    QString str, get_command;
    QByteArray aux;
    QStringList list;
    std::vector<long> time;
    std::vector<int> data;

    // Verifica se o socket está conectado
    if (socket->state() != QAbstractSocket::ConnectedState)
    {
        return;
    }

    // Cria o comando "get" com o IP do produtor selecionado e o número 4
    get_command = "get " + ui->listWidgetIP->currentItem()->text() + " 4\r\n";
    aux = get_command.toLatin1();  // Converte o comando para QByteArray

    socket->write(aux);
    socket->waitForBytesWritten();
    socket->waitForReadyRead();


    while (socket->bytesAvailable())
    {
        str = socket->readLine().replace("\n", "").replace("\r", "");
        list = str.split(" ");


        if (list.size() == 2)
        {
            time.push_back(list.at(0).toLong());
            data.push_back(list.at(1).toInt());
        }
    }

    // Define os dados lidos no widget da interface
    ui->widget->setData(time, data);
}


void MainWindow::timerEvent(QTimerEvent *timer)
{
    getData();
}


void MainWindow::controlTimerStart()
{

    this->temp = startTimer(ui->horizontalSliderTiming->value() * 1000);
}


void MainWindow::controlTimerStop()
{
    killTimer(this->temp);
}


MainWindow::~MainWindow()
{
    delete socket;
    delete ui;
}
