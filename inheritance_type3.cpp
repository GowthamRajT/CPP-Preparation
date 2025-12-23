#include <iostream>
#include <string>
using namespace std;

class father{
        public:
        int age = 50;
        string name = "Dad";
        void displayfather(){
            cout<<name<<" "<<age<<endl;
        }
    };


class child : public father{
    public:
    int age = 20;
    string name = "child";
    void displaychild(){
        cout<<name<<" "<<age<<endl;
    }
};

class grandchild : child{
    public:
    int age = 10;
    string name = "grandchild";
    void displaygrandchild(){
        cout<<name<<" "<<age<<endl;
        displayfather();
        displaychild();
    }
};

int main() {
    
    grandchild gc;
    gc.displaygrandchild();

    return 0;
}
