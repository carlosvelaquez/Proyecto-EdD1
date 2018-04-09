#include "labview.h"

LabView::LabView(QWidget *parent = Q_NULLPTR) : QFrame(parent){
  labyrinth = new char*[100];
  labyrinth[0] = new char[100];

  width = 100;
  height = 100;
  widthUnit = width()/width;
  heightUnit = height()/height;
}

LabView::LabView(char** nLab, QWidget *parent = Q_NULLPTR) : QFrame(parent){
  labyrinth = nLab;

  width = *(&labyrinth + 1) - labyrinth;
  height = *(&labyrinth[0] + 1) - labyrinth[0];

  widthUnit = width()/width;
  heightUnit = height()/height;
}

char** LabView::getLabyrinth(){
  return labyrinth;
}

void LabView::setLabyrinth(char** nLab){
  labyrinth = nLab;
}

QPushButton* LabView::newTile(string color){
  QPushButton nButton = new QPushButton(this);
  nButton->setText("");
  nButton->setStylesheet(string("background-color:" + color));
  nButton->setGeometry(0, 0, widthUnit, heightUnit);
  nButton->show();
}

QPushButton* LabView::newTile(int x, int y, string color){
  QPushButton nButton = new QPushButton(this);
  nButton->setText("");
  nButton->setStylesheet(string("background-color:" + color));
  nButton->setGeometry((x*widthUnit), (y*heightUnit), widthUnit, heightUnit);
  nButton->show();
}

void LabView::refresh(){
  while (QWidget* w = findChild<QWidget*>()) {
    delete w;
  }

  if (labyrinth != 0) {
    char current;
    for (int i = 0; i < width; i++) {
      for (int j = 0; j < height; j++) {
        current = labyrinth[i][j];

        if (current == '0') {
          newTile(i, j, "black");
        }else if (current == '1'){
          newTile(i, j, "white");
        }else{
          newTile(i, j, "red");
        }
      }
    }
  }
}
