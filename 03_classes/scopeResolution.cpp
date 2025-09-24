#include<iostream> // std scope

auto a= 'a'; //global scope

namespace myscope{

    auto a = "a string!";   //my scope

}

int main(){

    auto a = 7;
    std::cout<< // std scope

    "a = " << a << '\n'<< //local scope
    "::a = " << ::a << '\n' << //global scope
    "myscope::a = " <<myscope::a <<'\n'; //"myscope" scope

}