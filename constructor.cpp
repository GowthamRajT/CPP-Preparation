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

    Car(string name, int price){
        cout<<name<<endl;
        cout<<price<<endl;
    }
};

int main() {
    
    //default constructor
    Car bmw;
    bmw.name = "m3";
    bmw.price = 2;
    cout<<bmw.name<<endl;

    //parameter constructor
    Car("Gclass", 5);

    //copy constructor
    Car copy = bmw;
    cout<<copy.name<<endl;

    return 0;
}