#include <iostream>
using namespace std;

void gowtham(int a, int b)   // input from user is needed
{
    cout<< "your age after "<<b<< " years is "<<a+b<<endl;
}

int main() {
    
    int age, b;
    cout<<"Enter your age: ";
    cin>>age;
    cout<<"enter b: ";
    cin>>b;

    gowtham(age, b); // function calling

    return 0;
}

/*
function declaration - mention the datatype alone
function definition - arguements
function calling - parameters

function declaration is not needed if definition is above calling
*/