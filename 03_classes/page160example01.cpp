#include<iostream>

class Flag{
    private:
        bool flag;
        int number;
    
    public:
        Flag(bool f,int n){
            flag =f;
            number = n;

        }

        int get(){
            if(flag==true){
                return number;
            }
            else    
                return 0;
        }


};

int main(){
    int returnValue;
    Flag f1(true,60);
    Flag f2(false,90);
    returnValue = f1.get();
    std::cout<<"Returned value is "<< returnValue<< std::endl;
    returnValue = f2.get();
    std::cout<<"Returned value is "<< returnValue<< std::endl;



    return returnValue;
}