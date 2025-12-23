#include <iostream>
#include <string>
using namespace std;

    struct details
    {
        string firstname;
        string lastname;
        int age;
        float cgpa;
    };

int main() {
    
    details gowtham;

    gowtham.firstname = "gowtham";
    gowtham.lastname = "raj";
    gowtham.age = 21;
    gowtham.cgpa = 8;

    cout<<"My first name is "<<gowtham.firstname<<endl;
    cout<<"my last name is "<<gowtham.lastname<<endl;
    cout<<"My age is "<<gowtham.age<<endl;
    cout<<"my cgpa is "<<gowtham.cgpa<<endl;

    return 0;
}