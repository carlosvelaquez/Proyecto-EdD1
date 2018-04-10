#include "labview.h"

LabView::LabView() : QFrame(Q_NULLPTR){
  this->QFrame::setStyleSheet("QPushButton{ color:white; border-radius: 0px; } QFrame{border: 1px solid #C5C5C5;}");

  labyrinth.clear();

  for (int i = 1; i <= 100; i++) {
    List<char> lab;

    for (int j = 1; j <= 100; j++) {
      lab.insert('0');
    }

    labyrinth.insert(lab);
  }

  widthUnit = width()/labyrinth.size;
  heightUnit = height()/labyrinth.get(1).size;
}

LabView::LabView(QWidget* parent = Q_NULLPTR) : QFrame(parent){
  this->QFrame::setStyleSheet("QPushButton{ color:white; border-radius: 0px; } QFrame{border: 1px solid #C5C5C5;}");

  labyrinth.clear();

  for (int i = 1; i <= 100; i++) {
    List<char> lab;

    for (int j = 1; j <= 100; j++) {
      lab.insert('0');
    }

    labyrinth.insert(lab);
  }

  widthUnit = width()/labyrinth.size;
  heightUnit = height()/labyrinth.get(1).size;
}

LabView::LabView(List<List<char>> nLab, QWidget *parent = Q_NULLPTR) : QFrame(parent){
  this->QFrame::setStyleSheet("QPushButton{ color:white; border-radius: 0px; } QFrame{border: 1px solid #C5C5C5;}");

  labyrinth = nLab;

  w = labyrinth.size;
  h = labyrinth.get(1).size;

  widthUnit = width()/w;
  heightUnit = height()/h;
}

List<List<char>> LabView::getLabyrinth(){
  return labyrinth;
}

void LabView::setLabyrinth(List<List<char>> nLab){
  labyrinth = nLab;

  w = labyrinth.size;
  h = labyrinth.get(1).size;

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

  char current;
  for (int i = 1; i <= w; i++) {
    for (int j = 1; j <= h; j++) {
      current = labyrinth.get(i).get(j);

      if (current == '0') {
        newTile(i - 1, j - 1, "#FF5722");
      }else if (current == '1'){
        newTile(i - 1, j - 1, "white");
      }else if (current == 'x'){
        newTile(i - 1, j - 1, "#7CB342");
      }else{
        newTile(i - 1, j - 1, "#f44336");
      }
    }
  }
}
