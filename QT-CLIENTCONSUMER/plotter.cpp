#include "plotter.h"
#include <QPainter>
#include <QBrush>
#include <QPen>
#include <algorithm>

// Construtor da classe Plotter
Plotter::Plotter(QWidget *parent)
    : QWidget{parent}
{
}


void Plotter::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);  // Cria um objeto QPainter para desenhar na janela
    QBrush brush;
    QPen pen;
    std::vector<double> y, t;  // Vetores para armazenar as coordenadas transformadas dos dados
    int ymax, ymin;  // Variáveis para armazenar os valores máximo e mínimo dos dados
    long tmax, tmin;  // Variáveis para armazenar os valores máximo e mínimo do tempo
    int len = data.size();  // Comprimento dos dados

    brush.setColor(QColor(199, 167, 255));  // Pinta o fundo de roxo
    brush.setStyle(Qt::SolidPattern);
    painter.setBrush(brush);
    painter.drawRect(0, 0, width(), height());


    pen.setColor(Qt::darkCyan);  // Define a cor da caneta azul
    pen.setWidth(2);  // Define a largura da caneta
    painter.setPen(pen);  // Aplica a caneta ao pintor

    // Se houver menos de 2 dados, sai da função
    if (data.size() < 2)
    {
        return;
    }

    // Encontra os valores máximo e mínimo dos dados e tempo
    ymax = *std::max_element(data.begin(), data.end());
    ymin = *std::min_element(data.begin(), data.end());
    tmax = *std::max_element(time.begin(), time.end());
    tmin = *std::min_element(time.begin(), time.end());

    for (int i = 0; i < len; i++)
    {
        t.push_back((time[i] - tmin) * width() / (tmax - tmin));  // Transforma o tempo para coordenadas x
        y.push_back((data[i] - ymin) * height() / (ymax - ymin));  // Transforma os dados para coordenadas y
    }

    for (int i = 0; i < len - 1; i++)
    {
        painter.drawLine(t[i], y[i], t[i + 1], y[i + 1]);  // Desenha uma linha entre dois pontos adjacentes
    }
}

// Função para definir os dados e tempos e solicita a repintura do widget
void Plotter::setData(std::vector<long> time, std::vector<int> data)
{
    this->time = time;
    this->data = data;
    repaint();
}
