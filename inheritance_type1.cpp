#include <iostream>
#include <string>
using namespace std;

class parent{
        public:
        int age = 50;
        string name = "Dad";
        void displayparent(){
            cout<<name<<" "<<age<<endl;
        }
    };

    class child : public parent{
        public:
        int age = 20;
        string name = "child";
        void displaychild(){
            cout<<name<<" "<<age<<endl;
        }
    };

int main() {
    
    parent p;
    child c;
    p.displayparent();
    c.displayparent(); // if displayparent given it brings the value of inherited class "Parent"

    return 0;
}