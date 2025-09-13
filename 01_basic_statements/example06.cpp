/**
 Write a program that draws in the terminal a big X out of the character 'X',
 depending on the variable int size (with size = 3, 4, ..., 20):
 size = 3:     size = 4:      size = 5:      etc.
   X X          X  X           X   X
    X            XX             X X
   X X           XX              X
                X  X            X X
                               X   X      */
#include <iostream>

int main()
{
  int size;
  std::cin >> size;

  for (int row = 0; row < size; row++)
  {
    for (int col = 0; col < size; col++)
    {
      if (row == col || size - row - 1 == col)
      {
        std::cout << "X";
      }
      else
      {
        std::cout << " ";
      }
    }
    std::cout << std::endl;
  }
  return 0;
}
