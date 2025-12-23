#include <iostream>
#include <string>
using namespace std;

int main() {
    //Your Code goes here!

    string firstname = "gowtham";
    string lastname = "raj";
    string fullname;

    cout<<firstname.length()<<endl; // length of a string

    cout<<firstname+" "+lastname<<endl; // concatenation
    cout<<firstname.append(lastname)<<endl; // append


    cout<<firstname[3]<<endl; // find the letter 
    cout<<firstname.at(5)<<endl; // find the letter
    firstname[2] = 'u'; // change a letter
    cout<<firstname<<endl;

    cout<<"Enter your fullname: ";
    getline(cin, fullname); // getline function works even if there is space in b/w words
    cout<<fullname;

    return 0;
}