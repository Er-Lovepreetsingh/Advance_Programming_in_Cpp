#include <iostream>

class Add{
    private:
        int a;
    public:
        Add(int a=0){
        this->a=a;
        }
       


        Add operator + (Add const & obj){

            Add b;
            b.a= a+ obj.a;
            return b;
        }
        void print(){
            std::cout<<a;
        }
      
};

int main(){

  
    Add a1(5);
    Add a2(50);
    Add a3 = a1+ a2;
    a3.print();

    return 0;
}