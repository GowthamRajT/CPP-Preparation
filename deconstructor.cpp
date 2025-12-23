#include <iostream>
#include <string>
using namespace std;

class Car{
    public:
    string name;
    int price;

    Car(){
        cout<<"constructor"<<endl;
    }

    ~Car(){
        cout<<"deconstructor"<<endl;
    }
};

int main() {
    
    //default constructor
    Car bmw;
    bmw.name = "m3";
    bmw.price = 2;
    cout<<bmw.name<<endl;
    cout<<bmw.price<<endl;

    return 0;
}

//destructor deletes the object created after completing the program 