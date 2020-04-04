#ifndef __POSTFIX_H__
#define __POSTFIX_H__

#include <string>
#include <iostream>
#include <vector>
#include "stack.h"
#include "ordered_line_table.h"
#include "Polynom.h"

using namespace std;

class TPostfix
{
  string infix;
  string postfix;
  string operands = "+-*/";
  //int arity[4] = { 2,2,2,2 };
  int priority[4] = { 1,1,2,2 };
  bool isCorrect(string str);
public:
  TPostfix(string inf = "a+b")
  {
    if (!isCorrect(inf))
      throw "Error";
    unsigned int l = inf.length();
    for (unsigned int i = 0; i < l; i++)
      if (inf[i] != ' ')
        infix += inf[i];
    if (infix.length() < 1)
      throw "Error";
  }
  string GetInfix() { return infix; }
  string GetPostfix() { return postfix; }
  string ToPostfix();
  double Calculate(BaseTable& tab);
  
};

#endif