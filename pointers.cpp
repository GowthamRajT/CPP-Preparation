#include <iostream>
using namespace std;

int main() {
    
    int age = 21;
    int &refage = age;

    cout<<"age is "<<age<<endl;
    cout<<"address is "<<&refage<<endl;

    int* ptr = &refage;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    *ptr = 24;
    cout<<*ptr<<endl;
    cout<<age<<endl;

    return 0;
}