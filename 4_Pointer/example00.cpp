/* Create an array for which the length is given at runtime through an argument
 of the executable. The main function in C++ can also have two parameters:
 argc: integer containing the count of arguments in argv
 argv: array of strings holding command-line arguments.
 argv[0] is the command itself, argv[1] is first argument */
#include <iostream>
int main(int argc, char * argv[]) { // executable's arguments are passed
 // if an argument given, assume it is a number and convert from string:
 if (argc > 1) {
 auto size = std::stoi(argv[1]);
 // add code to create an array of length size, and fill it with increasing
 // numbers from 1 till size, display these, and then delete the array
    int * arr= new int[size];
    for(int i=0;i<size;i++){
        arr[i]=i+1;
    }
     for(int i=0;i<size;i++){
        std::cout<<arr[i]<<"\n";
    }
    delete []arr;
    arr =nullptr;


 }
 return 0;
}