#ifndef SOLVER_H
#define SOLVER_H

#include <string>
using namespace std;

class Solver{
protected:
  string expression;
  double answer;
  List<Expression> expressions;
  
public:
  Solver();
  Solver(string);
  void setExpression(string);
  bool resolve();
  double getAnswer();
};

#endif /* end of include guard: SOLVER_H */
