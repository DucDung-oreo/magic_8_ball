#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "list.h"

std::string answers[19];
std::string comments[10];
std::string quotes[16];

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{

    delete ui;
}

void MainWindow::on_linInput_textEdited(const QString &arg1)
{
    idxCom = qrand() % 9;
    idxAns = qrand() % 18;
    idxQuo = qrand() % 16;
    question = ui->linInput->text();

}

void MainWindow::on_butOK_clicked()
{
    ui->txtOutput->clear();

    delay(2);
    ui->txtOutput->setText(question + "???");
    delay(2);

    ui->txtOutput->append(QString::fromUtf8(commentsListEN[idxCom].c_str()));
    delay(2);
    if (question == "Cho em xin cái quote cô Hằng")
    {
        ui->txtOutput->append(QString::fromUtf8(quotesList[idxQuo].c_str()));
    }
    else
    {
        ui->txtOutput->append(QString::fromUtf8(answersListEN[idxAns].c_str()));
    }

}

void delay(int sec)
{
    QTime dieTime= QTime::currentTime().addSecs(sec);
    while (QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}
