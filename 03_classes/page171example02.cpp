/**
 Create a class with just a static member, and illustrate that it exists, even
 without any objects.
*/
#include <iostream> // terminal output

// write the class below:
class StaticDemo{
    public:
        static int a;
};

int StaticDemo::a=40;

int main() {
 // do not create an object here, but assign a value to static member here
 StaticDemo::a=45;
 std::cout << " The value of the static member is "<<StaticDemo::a;
 // print its value here:
 std::cout << '\n';
}