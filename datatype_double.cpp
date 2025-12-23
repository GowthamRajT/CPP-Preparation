#include <iostream>
#include <iomanip> // input output manipulation often used when using datatype "double" 
using namespace std;

int main() {
    //Your Code goes here!
    //datatype double
    //double can also store scientific notations like float!
    
    double pi = 3.1415161718; // declaration + initialization
    cout<<fixed<<setprecision(10); // sets how many digit we want after decimal
    cout<<"my cgpa is "<<pi;
    return 0;
}