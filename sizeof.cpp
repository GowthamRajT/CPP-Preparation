#include <iostream>
using namespace std;

int main() {
    //Your Code goes here!
    // identify the size occupied by each datatype
    
    int age = 20;
    float cgpa=7.84;
    double pi = 3.1415161718;
    bool isboy=true;
    char gender='m';
    
    cout<<"size of int: "<< sizeof(age)<<endl;
    cout<<"size of float: "<< sizeof(cgpa)<<endl;
    cout<<"size of double: "<< sizeof(pi)<<endl;
    cout<<"size of bool: "<< sizeof(isboy)<<endl;
    cout<<"size of char: "<< sizeof(gender);
    
    return 0;
}