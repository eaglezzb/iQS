#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_pushButton_clicked()
{
    this->ui->webView->setUrl(QUrl("http://ts1.travian.tw/"));
    this->ui->webView->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    QByteArray postData("name=雨果2014&password=fuck.777&s1=%E7%99%BB%E5%85%A5&w=1518%3A853&login=1413295185");
    QNetworkRequest netRequest;
    netRequest.setUrl(QUrl("http://ts1.travian.tw/dorf1.php"));
    netRequest.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded; charset=UTF-8");

    this->ui->webView->load(netRequest, QNetworkAccessManager::PostOperation, postData);

}
