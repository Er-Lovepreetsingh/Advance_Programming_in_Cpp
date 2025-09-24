#include <iostream>


class Hello{
public:
    Hello(){
        std::cout<<"hello"<< std::endl;
    }

    ~Hello(){

        std::cout<<"bye";
    }
};

int main(){

Hello h;

    return 0;
}