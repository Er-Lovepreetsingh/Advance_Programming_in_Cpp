/**
  Write a program that initializes two integers 'number1' and 'number2',
  and tests whether number1 is a multiple of number2. Put this result in the
  boolean variable 'result' below.
  */

#include<iostream>
int main() {
  bool result = false;
  int number1 = 30, number2 = 15;
  result =( number2 !=0 && number1 % number2 ==0);
  std::cout << "Result is " <<(int)result;
  return (int) result;
}

