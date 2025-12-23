#include <iostream>
using namespace std;

int main() {
    //Your Code goes here!
    string gender = "male";
    int age = 20;
    
    cout<<(gender == "male" && age == 20)<<endl;
    cout<<(gender == "female" || age == 20)<<endl;
    cout<<(!age == 20)<<endl;

    return 0;
}