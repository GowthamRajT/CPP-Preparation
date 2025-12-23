#include <iostream>
using namespace std;

void add(int num1=3, int num2=6) // setting values by default if values not given in calling
{
    cout<<(num1+num2)<<endl;
}

int main() {
    
    add();
    add(5, 7);

    return 0;
}
