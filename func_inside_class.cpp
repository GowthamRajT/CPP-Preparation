#include <iostream>
#include <string>
using namespace std;

class students {
    public:
    string firstname;
    string lastname;
    int roll_no;
    //function inside the class
    void display()
    {
        cout<<firstname<<endl;
        cout<<lastname<<endl;
        cout<<roll_no<<endl;
    }
};

int main() {

    students gowtham;
    gowtham.firstname = "gowtham";
    gowtham.lastname = "raj";
    gowtham.roll_no = 10;

    students dinesh;
    dinesh.firstname = "dinesh";
    dinesh.lastname = "C";
    dinesh.roll_no = 9;

    gowtham.display();

    return 0;
}