#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "list.h"

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
    idxCom = QRandomGenerator::global()->bounded(9);
    idxAns = QRandomGenerator::global()->bounded(18);
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
    ui->txtOutput->append(QString::fromUtf8(answersListEN[idxAns].c_str()));
}

void delay(int sec)
{
    QTime dieTime= QTime::currentTime().addSecs(sec);
    while (QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}
