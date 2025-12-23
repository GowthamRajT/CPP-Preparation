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
        int age = 50;
        string name = "Dad";
        void displaymother(){
            cout<<name<<" "<<age<<endl;
        }
    };


class child : public father, mother{
    public:
    int age = 20;
    string name = "child";
    void displaychild(){
        cout<<name<<" "<<age<<endl;
    }
};

int main() {
    
    father.displayfather();

    return 0;
}
