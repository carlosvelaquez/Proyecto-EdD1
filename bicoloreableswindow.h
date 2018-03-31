#ifndef BICOLOREABLESWINDOW_H
#define BICOLOREABLESWINDOW_H

#include <QWidget>
#include <chrono>
#include <thread>

using namespace std;

namespace Ui {
class BicoloreablesWindow;
}

class BicoloreablesWindow : public QWidget
{
    Q_OBJECT

public:
    explicit BicoloreablesWindow(QWidget *parent = 0);
    ~BicoloreablesWindow();

private slots:
    void on_pushButton_pressed();

    void on_pushButton_released();

    void on_pushButton_clicked();

private:
    Ui::BicoloreablesWindow *ui;
    bool moving;
};

#endif // BICOLOREABLESWINDOW_H
