#ifndef LABVIEW_H
#define LABVIEW_H

#include <QtGui>
#include <string>

using namespace std;

class LabView : public QFrame{
  Q_OBJECT
protected:
  char** labyrinth;
  int width, height, widthUnit, heightUnit;

public:
  LabView(QWidget*);
  LabView(char**, QWidget*);

  char** getLabyrinth();
  void setLabyrinth(char**);

  QPushButton* newTile(string);
  QPushButton* newTile(int, int, string);

  void refresh();
};

#endif /* end of include guard: LABVIEW_H */
