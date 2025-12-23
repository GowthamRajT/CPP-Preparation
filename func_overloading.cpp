#include <iostream>
using namespace std;

// multiple functions can handle the same name but should contain different parameters 

void add(int a, int b)
{
    cout<<a+b<<endl;
}

void add(int a, int b, int c)
{
    cout<<a+b+c<<endl;
}

int main() {

    int a = 5;
    int b = 10;
    int c = 15;

    add(a, c);
    add(a, b, c);

    return 0;
}