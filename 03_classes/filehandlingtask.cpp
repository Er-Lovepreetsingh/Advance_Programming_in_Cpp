#include<iostream>
#include<fstream>

int main(){
    std::ifstream myfile("input.txt");
        
    if(!myfile){
        std::cout<<"error could not open the file."<< std::endl;
        return 1;
    }

    std::string word;
    int count=0;

    while(myfile>> word){
        count++;
    }
    std::cout << "total words in file: "<< count<< std::endl;

    return 0;

}