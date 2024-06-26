#ifndef TRAINWINDOW_H
#define TRAINWINDOW_H

#include <QDialog>

namespace Ui {
class TrainWindow;
}

class TrainWindow : public QDialog
{
    Q_OBJECT

public:
    explicit TrainWindow(QWidget *parent = nullptr);
    ~TrainWindow();

private slots:
    void on_checkBox_stateChanged(int arg1);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::TrainWindow *ui;
};

#endif // TRAINWINDOW_H
