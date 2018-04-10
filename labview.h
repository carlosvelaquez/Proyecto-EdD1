#ifndef LABVIEW_H
#define LABVIEW_H

#include <QtGui>
#include <QFrame>
#include <QPushButton>
#include <string>
#include "list.h"

using namespace std;

class LabView : public QFrame{

  Q_OBJECT

protected:
  int w, h, widthUnit, heightUnit;
  List<List<char>> labyrinth;

public:
  LabView();
  LabView(QWidget*);
  LabView(List<List<char>>, QWidget*);

  List<List<char>> getLabyrinth();
  void setLabyrinth(List<List<char>>);

  void newTile(string);
  void newTile(int, int, string);

  void refresh();
};

#endif /* end of include guard: LABVIEW_H */
