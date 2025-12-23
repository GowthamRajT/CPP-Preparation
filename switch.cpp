#include <iostream>
using namespace std;

int main() {
    //Your Code goes here!
    int day = 4;

    switch (day)
    {
        case 1:
            cout<<"sunday";
            break;
        case 2:
            cout<<"monday";
            break;
        case 13:
            cout<<"tuesday";
            break;
        case 4:
            cout<<"wednesday";
            break;
        case 5:
            cout<<"thursday";
            break;
        case 6:
            cout<<"friday";
            break;
        case 7:
            cout<<"saturday";
            break;
        default :
            cout<<"Invalid";
            break;
    }
    return 0;
}