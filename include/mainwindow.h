#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QWidget {
Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private:
    Ui::MainWindow *ui;

public slots:
    void on_pushButtonConvert_clicked();
};


#endif //MAINWINDOW_H
