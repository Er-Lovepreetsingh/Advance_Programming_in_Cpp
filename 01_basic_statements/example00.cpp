/**
 Try to figure out what is happening in the code below. Then try to compile the 
 code, and then change the commented part so that the code's output becomes 1:
*/

//to run type in terminal: g++ example00.cpp -std=c++20 -o example00


#include <iostream>  // to allow use of std::cout and std::endl
int main() {
  auto i = 7;    // what type is variable i?
  auto j = 9.0;  // what type is variable j?
 
  bool ret = ( ( i <=> j) < 0 );    
 
  std::cout << ret << std::endl;
  return 0;
}