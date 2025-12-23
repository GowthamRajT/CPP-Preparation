#include <iostream>
#include <string>
using namespace std;

class students {
    private:
    string firstname;
    string lastname;
    int roll_no;
    
    public:
        students(string firstname, string lastname, int roll_no){
        this->firstname = firstname;
        this->lastname = lastname;
        this->roll_no = roll_no;
    }

    void display()
    {
        cout<<firstname<<endl;
        cout<<lastname<<endl;
        cout<<roll_no<<endl;
    }
};

int main() {

    students gowtham("gowtham","raj",10);
    gowtham.display();

    return 0;
}

/*
public - anyone can access the class
private - only their objects can access
protected - only their inherited classes can access
*/