#include "expression.h"

Expression::Expression(string nString, int nOper){
  expString = nString;
  operation = nOper;
  string temp = nString;

  switch (operation) {
    case MULTIPLICATION:{
      
    }
  }

  List<string> split;

  while ((pos = temp.find(delimiter)) != string::npos) {
    token = temp.substr(0, pos);
    split.insert(temp.substr(0, pos));
    s.erase(0, pos + delimiter.length());
  }
}

string Expression::getString(){
  return expString;
}

double Expression::operate(){
  double result = 0;
  result = tokens.get(i);

  switch (operation) {
    case MULTIPLICATION:{
      for (size_t i = 1; i < tokens.size(); i++) {
        result *= tokens.get(i);
      }
    }
    case DIVISION:{
      for (size_t i = 1; i < tokens.size(); i++) {
        result /= tokens.get(i);
      }
    }
    case ADDITION:{
      for (size_t i = 1; i < tokens.size(); i++) {
        result += tokens.get(i);
      }
    }
    case SUBTRACTION:{
      result = tokens.get(i);
      for (size_t i = 1; i < tokens.size(); i++) {
        result -= tokens.get(i);
      }
    }
  }

  return result;
}
