#include <iostream>
#include <cstring>  // for strcpy if needed

class Counter {
public:
    const char* type;       // public attribute
    static int count;       // static member to count objects

    // Default constructor
    Counter() {
        type = "void";
        count++;
    }

    // Constructor for int
    Counter(int) {
        type = "int";
        count++;
    }

    // Constructor for double
    Counter(double) {
        type = "double";
        count++;
    }
};

// Define static member outside the class
int Counter::count = 0;

int main() {
    Counter c1, c2(2), c3(3.4),c4(5);

    // Print types
    std::cout << c1.type << ',' << c2.type<< ',' << c3.type <<','<<c4.type << '\n';

    // Print total count of Counter objects
    std::cout << Counter::count << '\n';

    return 0;
}
