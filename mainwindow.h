#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QThread>
#include <iostream>
#include <QTime>
#include <QTimer>
//#include <QRandomGenerator>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:
    void on_linInput_textEdited(const QString &arg1);

    void on_butOK_clicked();

private:
    Ui::MainWindow *ui;
    QString question;
    std::string answers[19];
    std::string comments[10];
    std::string qoutes[16];
    int idxAns;
    int idxCom;
    int idxQuo;
};

void usleep(int ms);

void delay(int sec);

void getAnswersData();

void getCommentsData();

#endif // MAINWINDOW_H
