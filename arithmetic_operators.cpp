#include <iostream>
using namespace std;

int main() {
    //Your Code goes here!
    int a=10;
    int b=20;

    int sum = a+b;
    int diff = a-b;
    int mul = a*b;
    float div = float(a)/b; // always division should be in float for easy conversion
    int rem = a%b;

    cout<<"sum is: "<<sum<<endl;
    cout<<"diff is: "<<diff<<endl;
    cout<<"mul is: "<<mul<<endl;
    cout<<"div is: "<<div<<endl;
    cout<<"rem is: "<<rem<<endl;

    return 0;
}