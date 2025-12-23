#include <iostream>
using namespace std;

class Remote {
    public:
    void show(){
        cout<<"remote"<<endl;
    }
};

class TV : public Remote {
    public:
    void show(){
        cout<<"TV remote"<<endl;
    }
};

class AC : public Remote {
    public:
        // void show(){
        //     cout<<"AC remote"<<endl;
        // }
};

int main() {
    
    TV tv;
    AC ac;
    Remote r;
    r.show();
    tv.show();
    ac.show();

    return 0;
}

/*
types of polymorphisms
compile time poly - overloading
runtime poly - overriding
*/