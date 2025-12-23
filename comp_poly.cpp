#include <iostream>
using namespace std;

class Remote {
    public:
    void show(){
        cout<<"remote"<<endl;
    }
    void show(int i){
        cout<<"remote "<<i<<endl;
    }
};

int main() {
    
    Remote r;
    r.show();
    r.show(2);

    return 0;
}

/*
types of polymorphisms
compile time poly - overloading
runtime poly - overriding
*/