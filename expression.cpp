#include "expression.h"

Expression::Expression(){
  expString = "0";
  operation = 3;
  delimiter = '-';
}

Expression::Expression(string nString, int nOper){
  expString = nString;
  operation = nOper;

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
    tokens.insert(token);
  }
}

string Expression::getString(){
  return expString;
}

double Expression::operate(){
  if (!isValid()) {
    return -34404;
  }

  if (isSimple()) {
    return stod(expString);
  }

  double result = tokens.get(1).operate();

  switch (operation) {
    case 0:{
      for (int i = 2; i <= tokens.size; i++) {
        result *= tokens.get(i).operate();
      }
      break;
    }
    case 1:{
      for (int i = 2; i <= tokens.size; i++) {
        result /= tokens.get(i).operate();
      }
      break;
    }
    case 2:{
      for (int i = 2; i <= tokens.size; i++) {
        result += tokens.get(i).operate();
      }
      break;
    }
    case 3:{
      for (int i = 2; i <= tokens.size; i++) {
        result -= tokens.get(i).operate();
      }
      break;
    }
  }

  return result;
}

bool Expression::isSimple(){
  if (!isValid()) {
    return false;
  }

  if (expString.length() <= 0){
      return false;
  }

  for (int i = 0; i < expString.length(); i++) {
    char current = expString[i];
    if (!isdigit(current)) {
      return false;
    }
  }

  return true;
}

bool Expression::isValid(){
  if (expString == "") {
    return false;
  }
  
  for (int i = 0; i < tokens.size; i++) {
    if (!tokens.get(i).isValid()) {
      return false;
    }
  }

  for (int i = 0; i < expString.length(); i++) {
    char current = expString[i];
    if (current != '*' && current != '/' && current != '+' && current != '-' && !isdigit(current)) {
      return false;
    }
  }

  return true;
}
