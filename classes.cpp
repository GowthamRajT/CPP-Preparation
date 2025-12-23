#include <iostream>
#include <string>
using namespace std;

class students {
    public:
    string firstname;
    string lastname;
    int roll_no;
};

int main() {

    students gowtham;
    gowtham.firstname = "gowtham";
    gowtham.lastname = "raj";
    gowtham.roll_no = 10;

    cout<<gowtham.firstname<<endl;
    cout<<gowtham.lastname<<endl; 
    cout<<gowtham.roll_no<<endl; 

    return 0;
}