        #include "mainwindow.h"
#include "ui_mainwindow.h"

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
//    delay(3);
//    ui->linInput->setText("Okay okay, I will read it, geez!");
    delay(2);
    ui->txtOutput->setText(question + "???");
    delay(2);
//    comments[0] = "OK you know I'm all ears mate.";
//    comments[1] = "What kind of question is that?";
//    comments[2] = "Just wait, ok?";
//    comments[3] = "LOL mate :v";
//    comments[4] = ":)";
//    comments[5] = "You really wanna know?";
//    comments[6] = "Hey, don't say that!";
//    comments[7] = "Man, I feel that.";
//    comments[8] = "Oh, sorry to hear that.";
//    comments[9] = "Well...";

    comments[0] = "Hỏi cc";
    comments[1] = "Á đù khó, đợi xí";
    comments[2] = "OK nói z là hỉu r";
    comments[3] = "Khum ngờ bạn hỏi z lun ák";
    comments[4] = ":)";
    comments[5] = "Chắc nha";
    comments[6] = "Để mình xáo bộ Tarot";
    comments[7] = "Gắt z pạn";
    comments[8] = "Chán bạn gke chưa";
    comments[9] = "Ờ thì...";

    quotes[0] = "Chị không muốn nhiều chuyện nhưng mà chuyện nhiều nên chị phải nói.";
    quotes[1] = "Chúng ta ai cũng bất ngờ, ngỡ ngàng, ngơ ngác và bật ngửa";
    quotes[2] = "Dĩ vãng dơ dáy dễ gì giấu giếm.";
    quotes[3] = "Công ty trách nhiệm hữu hạn một mình tao.";
    quotes[4] = "Nó đụng thì mình phải chạm, nó cảm thì mình phải xúc, nó muốn sụp thì mình phải cho đổ luôn!.";
    quotes[5] = "Đừng thấy hoa nở mà ngỡ xuân về.";
    quotes[6] = "Tôi không thở bằng lá phổi của người khác, không sống dựa vào đàn ông.";
    quotes[7] = "Ngu nhất mà tưởng mình khôn nhì.";
    quotes[8] = "Người trong cuộc mới hiểu người trong kẹt.";
    quotes[9] = "Thần điêu đại bịp.";
    quotes[10] = "Những nơi không an toàn là những nơi mà nguy hiểm nhất.";
    quotes[11] = "Im lặng là vàng mà nói ra mới là kim cương";
    quotes[12] = "Đánh tráo khái niệm, tạm ứng niềm tin.";
    quotes[13] = "Khi hết phước thì cuộc đời đổ như Domino.";
    quotes[14] = "Ngay cả việc làm bản thân bớt đẹp tôi cũng không làm được";
    quotes[15] = "Phải biết chân lý ở đâu, đừng để bị đưa vào chân tường";
//    delay(2);
//    ui->txtOutput->append("So... about the thing you asked, my answer is:");
//    getAnswersData();
//    answers[0] = "It is certain";
//    answers[1] = "It is decidedly so";
//    answers[2] = "Without a doubt";
//    answers[3] = "Yes – definitely";
//    answers[4] = "You may rely on it";
//    answers[5] = "As I see it, yes";
//    answers[6] = "Most Likely";
//    answers[7] = "Outlook good";
//    answers[8] = "Yes";
//    answers[9] = "Signs point to yes";
//    answers[10] = "Don’t count on it";
//    answers[11] = "My reply is no";
//    answers[12] = "My sources say no";
//    answers[13] = "Outlook not so good and very doubtful";
//    answers[14] = "Reply hazy, try again";
//    answers[15] = "Ask again later";
//    answers[16] = "Better not tell you now";
//    answers[17] = "Cannot predict now";
//    answers[18] = "Concentrate and ask again";

    answers[0] = "Chắc kèo lun bạn tui";
    answers[1] = "Ý Trời quyết z ròi";
    answers[2] = "Sai làm chó";
    answers[3] = "Đúm - đúm chắc lun";
    answers[4] = "Bạn có thể tin là dzậy";
    answers[5] = "Như tui thấy, thì đúng là dzậy đó";
    answers[6] = "Có thể";
    answers[7] = "Tất nhiên là kó";
    answers[8] = "Chuẩn nuôn bạn";
    answers[9] = "Tất cả mọi sự tâm linh đều cho là đúng";
    answers[10] = "Eydo đừng có quá hy vọng nha";
    answers[11] = "Câu trả lời của tui là dek";
    answers[12] = "Sin lũi nhưng dek được đâu";
    answers[13] = "Tâm linh có vẻ không ổn lắm bạn ơi";
    answers[14] = "Khá là mơ hồ, bạn hỏi lại đi";
    answers[15] = "Mệt quá tí nữa hỏi lại";
    answers[16] = "Này hong nên nói thì tốt hơn";
    answers[17] = "Giờ chưa mò được, OK?";
    answers[18] = "Tập trung hơn và hỏi lại nha";

    ui->txtOutput->append(QString::fromUtf8(comments[idxCom].c_str()));
//    ui->txtOutput->append(QString::fromUtf8(comments[0].c_str()));
    delay(2);
    if (question == "Cho em xin cái quote cô Hằng")
    {
        ui->txtOutput->append(QString::fromUtf8(quotes[idxQuo].c_str()));
    }
    else
    {
        ui->txtOutput->append(QString::fromUtf8(answers[idxAns].c_str()));
    //    ui->txtOutput->append(QString::fromUtf8(answers[7].c_str()));
    }

}

void getAnswersData()
{
    answers[0] = "It is certain";
    answers[1] = "It is decidedly so";
    answers[2] = "Without a doubt";
    answers[3] = "Yes – definitely";
    answers[4] = "You may rely on it";
    answers[5] = "As I see it, yes";
    answers[6] = "Most Likely";
    answers[7] = "Outlook good";
    answers[8] = "Yes";
    answers[9] = "Signs point to yes";
    answers[10] = "Don’t count on it";
    answers[11] = "My reply is no";
    answers[12] = "My sources say no";
    answers[13] = "Outlook not so good and very doubtful";
    answers[14] = "Reply hazy, try again";
    answers[15] = "Ask again later";
    answers[16] = "Better not tell you now";
    answers[17] = "Cannot predict now";
    answers[18] = "Concentrate and ask again";
}
void delay(int sec)
{
    QTime dieTime= QTime::currentTime().addSecs(sec);
    while (QTime::currentTime() < dieTime)
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}
