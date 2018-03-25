#ifndef Expression_H
#define Expression_H

#include <string>
using namespace std;

class Expression{
protected:
  string expString;
  int operation;
  List<double> tokens;

public:
  final int MULTIPLICATION = 0;
  final int DIVISION = 1;
  final int ADDITION = 2;
  final int SUBTRACTION = 3;

  Expression(string, int);

  string getString();
  double operate();
  bool isSimple();
};

#endif /* end of include guard: Expression_H */
