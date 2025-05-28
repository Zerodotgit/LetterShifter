#include <QMessageBox>
#include <boost/algorithm/string.hpp>
#include "mainwindow.h"
#include "../include/ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QWidget(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_pushButtonConvert_clicked() {
    if (ui->lineEditInput->text().isEmpty()) {
        QMessageBox::warning(this, "提示", "输入框不能为空");
        return;
    }

    // 获取输入框的文本
    QString text = ui->lineEditInput->text();
    std::string str = text.toStdString();

    // 转化为大写
    if (ui->checkBox->isChecked()) {
        boost::to_upper(str);
        ui->lineEditOutput->setText(QString::fromStdString(str));

        // 输出框使能
        ui->lineEditOutput->setEnabled(true);

        return;
    }

    // 转化为小写
    boost::to_lower(str);
    ui->lineEditOutput->setText(QString::fromStdString(str));

    // 输出框使能
    ui->lineEditOutput->setEnabled(true);
}
