/**
  Write a program that counts from 131 down till 23, one number per line in the
  the terminal, and prints out "hop", if the number is a multiple of 7.
  */
#include <iostream> // to allow use of std::cout and std::endl
int main()
{
  int number = 131;
  while (number >= 23)
  {
    if (number % 7 == 0)
    {
      std::cout << "hop" << std::endl;
    }
    else
    {
      std::cout << number << std::endl;
    }
    number--;
  }
  return 0;
}
