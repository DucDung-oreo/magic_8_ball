#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QThread>
#include <iostream>
#include <QTime>
#include <QTimer>
#include <QRandomGenerator>
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

    int idxAns;
    int idxCom;
};

void usleep(int ms);

void delay(int sec);

void getAnswersData();

void getCommentsData();

#endif // MAINWINDOW_H
