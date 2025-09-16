/**
  Write a program that draws a histogram or bar chart through
  an array of 17 integers. To 'draw' the bars, use the string
  "\u2589" or an empty space.
  */
#include <iostream> // std::cout, std::cin, std::endl
#include <random>   // rand()

int main()
{
  int myArray[17];

  // fill array with random numbers 0–24
  for (int i = 0; i < 17; i++)
  {
    myArray[i] = rand() % 25;
  }

  // draw histogram
  for (int i = 0; i < 17; i++)
  {
    for (int j = 0; j < myArray[i]; j++)
    {
      std::cout << "\u2589"; // print block for each count
    }
    std::cout << std::endl; // new line for each bar
  }

  return 0;
}
