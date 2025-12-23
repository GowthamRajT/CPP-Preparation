#include <iostream>
using namespace std;

int main() {
    
    int age;
    char gender;

    cout<<"enter your age: ";
    cin>>age;
    cout<<"enter your gender: ";
    cin>>gender;

    if (age<18)
    {
        if (gender=='m')
        {
            cout<<"boy"<<endl;
        }
        else if (gender=='f')
        {
            cout<<"girl"<<endl;
        }
        else
        {
            cout<<"invalid"<<endl;
        }
    }
    else
    {
        if (gender=='m')
        {
            cout<<"man"<<endl;
        }
        else if (gender=='f')
        {
            cout<<"woman"<<endl;
        }
        else
        {
            cout<<"invalid"<<endl;
        }
    }

    return 0;
}