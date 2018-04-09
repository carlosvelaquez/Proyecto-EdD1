#ifndef LABVIEW_H
#define LABVIEW_H

#include <QtGui>
#include <QFrame>
#include <QPushButton>
#include <string>

using namespace std;

class LabView : public QFrame{

  Q_OBJECT

protected:
  char** labyrinth;
  int w, h, widthUnit, heightUnit;

public:
  LabView();
  LabView(QWidget*);
  LabView(char**, QWidget*);

  char** getLabyrinth();
  void setLabyrinth(char**);

  void newTile(string);
  void newTile(int, int, string);

  void refresh();
};

#endif /* end of include guard: LABVIEW_H */
