#include "labview.h"

LabView::LabView() : QFrame(Q_NULLPTR){
  this->QFrame::setStyleSheet("QPushButton{ color:white; border-radius: 25px; } QFrame{border: 1px solid #C5C5C5;}");

  if (labyrinth != 0) {
    delete labyrinth;
  }

  labyrinth = new char*[100];

  for (size_t i = 0; i < 100; i++) {
    labyrinth[i] = new char[100];
  }

  w = 100;
  h = 100;
  widthUnit = width()/w;
  heightUnit = height()/h;
}

LabView::LabView(QWidget* parent = Q_NULLPTR) : QFrame(parent){
  this->QFrame::setStyleSheet("QPushButton{ color:white; border-radius: 25px; } QFrame{border: 1px solid #C5C5C5;}");

  labyrinth = new char*[100];

  for (int i = 0; i < 100; i++) {
    labyrinth[i] = new char[100];
  }

  w = 100;
  h = 100;
  widthUnit = width()/w;
  heightUnit = height()/h;
}

LabView::LabView(int x, int y, QWidget *parent = Q_NULLPTR) : QFrame(parent){
  this->QFrame::setStyleSheet("QPushButton{ color:white; border-radius: 25px; } QFrame{border: 1px solid #C5C5C5;}");

  labyrinth = new char*[x];

  for (int i = 0; i < x; i++) {
    labyrinth[i] = new char[y];
  }

  w = *(&labyrinth + 1) - labyrinth;
  h = *(&labyrinth[0] + 1) - labyrinth[0];

  widthUnit = width()/w;
  heightUnit = height()/h;
}

char** LabView::getLabyrinth(){
  return labyrinth;
}

void LabView::setLabyrinth(char** nLab){
  labyrinth = nLab;

  w = *(&labyrinth + 1) - labyrinth;
  h = *(&labyrinth[0] + 1) - labyrinth[0];

  widthUnit = width()/w;
  heightUnit = height()/h;
}

void LabView::newTile(string color){
  QPushButton* nButton = new QPushButton(this);
  nButton->setText("");
  nButton->setStyleSheet(string("background-color:" + color).c_str());
  nButton->setGeometry(0, 0, widthUnit, heightUnit);
  nButton->show();
}

void LabView::newTile(int x, int y, string color){
  QPushButton* nButton = new QPushButton(this);
  nButton->setText("");
  nButton->setStyleSheet(string("background-color:" + color).c_str());
  nButton->setGeometry((x*widthUnit), (y*heightUnit), widthUnit, heightUnit);
  nButton->show();
}

void LabView::refresh(){
  while (QWidget* w = findChild<QWidget*>()) {
    delete w;
  }

  if (labyrinth != 0) {
    char current;
    for (int i = 0; i < w; i++) {
      for (int j = 0; j < h; j++) {
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
