#ifndef SOLVER_H
#define SOLVER_H

#include <string>
using namespace std;

class Solver{
protected:
  string expression;
public:
  Solver();
  resolve(string);
};

#endif /* end of include guard: SOLVER_H */
