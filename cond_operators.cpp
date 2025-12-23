#include <iostream>
using namespace std;

int main() {
    //Your Code goes here!
    int age = 20;

    if (age<18)
    {
        cout<<"you are a kid"<<endl;
    }
    else if (18<age<40)
    {
        cout<<"you are an adult"<<endl;
    }
    else
    {
        cout<<"you are old"<<endl;
    }

    // using ternary operator

    (age<18) ? cout<<"child" : cout<<"adult";

    return 0;
}