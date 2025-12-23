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

class mother{
        public:
        int age = 40;
        string name = "Mom";
        void displaymother(){
            cout<<name<<" "<<age<<endl;
        }
    };

class child : public father, public mother{
    public:
    int age = 20;
    string name = "child";
    void displaychild(){
        cout<<name<<" "<<age<<endl;
    }
};

class grandchild1 : child{
    public:
    int age = 10;
    string name = "grandchild1";
    void displaygrandchild(){
        cout<<name<<" "<<age<<endl;
        displayfather();
        displaymother();
        displaychild();
    }
};

class grandchild2 : child{
    public:
    int age = 10;
    string name = "grandchild2";
    void displaygrandchild(){
        cout<<name<<" "<<age<<endl;
        displayfather();
        displaymother();
        displaychild();
    }
};

int main() {
    
    grandchild1 gc1;
    grandchild2 gc2;
    gc1.displaygrandchild();
    gc2.displaygrandchild();


    return 0;
}
