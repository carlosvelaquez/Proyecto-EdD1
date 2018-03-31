#ifndef EXPRESSION_H
#define EXPRESSION_H

#include "queue.h"
#include <string>
#include <sstream>
using namespace std;

class Expression{
protected:
  string expString;
  int operation;
  Queue<Expression> tokens;
  char delimiter;
  string log;

public:
  /*const int MULTIPLICATION = 0;
  const int DIVISION = 1;
  const int ADDITION = 2;
  const int SUBTRACTION = 3;*/

  Expression();
  Expression(string);
  Expression(string, int);

  void tokenize();
  string getString();
  double operate();
  bool isSimple();
  bool isValid();

  string retrieveLog();
  string toStrForm(double);
  void appendLog(string);
};

#endif /* end of include guard: EXPRESSION_H */
