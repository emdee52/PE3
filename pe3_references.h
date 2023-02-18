#include <iostream>

// Name: Md Mahmud
//

// Write any functions you need here!

void increment(int * x) {
    (*x)++;
}

void increment2(int & x){
    x++;
}

void increment3(const int &ref, int * ptr){
    (*ptr)++;
    std::cout << "ref: "<< ref << std::endl;
    std::cout << "ptr: "<< *ptr << std::endl;
}

class Foo{
    public:
        Foo(int c){
            num = c;
        }
        int get_num(){return num;} 

        friend Foo operator+ (Foo& one, Foo &two);

        friend bool operator==(Foo &one, Foo &two);

    private:
        int num;
};

bool operator==(Foo &one, Foo &two){
    if(one.get_num() == two.get_num()) 
        return true;
    return false;
}

Foo operator+ (Foo& one, Foo &two) {
    Foo temp(one.get_num() + two.get_num());
    return temp; 
}