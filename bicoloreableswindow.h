#ifndef BICOLOREABLESWINDOW_H
#define BICOLOREABLESWINDOW_H

#include <QWidget>
#include <QVBoxLayout>
#include <string>

using namespace std;

namespace Ui {
class BicoloreablesWindow;
}

class BicoloreablesWindow : public QWidget
{
    Q_OBJECT

public:
    explicit BicoloreablesWindow(QWidget *parent = 0);
    void addDragButton(string);
    ~BicoloreablesWindow();

private slots:
  void on_botonCrearVertice_clicked();

private:
    Ui::BicoloreablesWindow *ui;
    bool moving;
    QVBoxLayout* layout = new QVBoxLayout();
    Graph<string>* graph = new Graph<string>();

};

#endif // BICOLOREABLESWINDOW_H
