#include "expression.h"

Expression::Expression(){
  expString = "0";
  operation = 3;
  delimiter = '-';
  log = "";
}

Expression::Expression(string nString, int nOper){
  expString = nString;
  operation = nOper;
  log = "";

  switch (operation) {
    case 0:{
      delimiter = '*';
      break;
    }
    case 1:{
      delimiter = '/';
      break;
    }
    case 2:{
      delimiter = '+';
      break;
    }
    case 3:{
      delimiter = '-';
      break;
    }
  }

  if (!isSimple() && isValid()) {
    tokenize();
  }
}

Expression::Expression(string nString){
  expString = nString;
  operation = -1;
  log = "";

  if (expString.find('*') != string::npos) {
    operation = 0;
    delimiter = '*';
  }

  if (expString.find('/') != string::npos) {
    operation = 1;
    delimiter = '/';
  }

  if (expString.find('+') != string::npos) {
    operation = 2;
    delimiter = '+';
  }

  if (expString.find('-') != string::npos) {
    operation = 3;
    delimiter = '-';
  }

  if (!isSimple() && isValid()) {
    tokenize();
  }
}

void Expression::tokenize(){
  stringstream ss(expString);
  string token;

  while (getline(ss, token, delimiter)) {
    tokens.queue(token);
  }
}

string Expression::getString(){
  return expString;
}

double Expression::operate(){
  if (!isValid()) {
    return 0;
  }

  if (isSimple()) {
    return stod(expString);
  }

  Expression exp = tokens.dequeue();

  double result = exp.operate();
  log += exp.retrieveLog();
  log += toStrForm(result);
  string oldLog = "";
  Expression ex;

  while (tokens.hasNext()) {
    ex = tokens.dequeue();

    double oper = ex.operate();
    log += " ";
    log += delimiter;
    log += " " + toStrForm(oper);

    appendLog(ex.retrieveLog());

    switch (operation) {
      case 0:{
        result *= oper;
        break;
      }
      case 1:{
        result /= oper;
        break;
      }
      case 2:{
        result += oper;
        break;
      }
      case 3:{
        result -= oper;
        break;
      }
    }
  }

  log += " = " +  toStrForm(result) + '\n';
  return result;
}

bool Expression::isSimple(){
  if (!isValid()) {
    return false;
  }

  if (expString.length() <= 0){
      return false;
  }

  for (int i = 0; i < int(expString.length()); i++) {
    char current = expString[i];
    if (!isdigit(current)) {
      return false;
    }
  }

  return true;
}

bool Expression::isValid(){
  if (expString == "" || expString.find('\0') != string::npos) {
    return false;
  }

  List<Expression> tokensList = tokens.toList();
  for (int i = 1; i <= tokensList.size; i++) {
    if (!tokensList.get(i).isValid()) {
      return false;
    }
  }

  for (int i = 0; i < int(expString.length()); i++) {
    char current = expString[i];
    if (current != '*' && current != '/' && current != '+' && current != '-' && !isdigit(current)) {
      return false;
    }
  }

  return true;
}

string Expression::retrieveLog(){
  return log;
}

string Expression::toStrForm(double resDouble){
  string res = to_string(resDouble);
  int i = res.length() - 1;

  while (res[i] == '0') {
    res = res.substr(0, i);
    i = res.length() - 1;
  }

  if (res[i] == '.') {
    res = res.substr(0, i);
  }

  return res;
}

void Expression::appendLog(string nLog){
  string logRet = nLog + log;
  log = logRet;
}
