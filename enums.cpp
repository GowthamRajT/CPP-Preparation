#include <iostream>
using namespace std;

enum month {
    january, february, march, april, may, june, july, august, september, october, november, december
};

int main() {

    month latest = december;

    if (latest == month::july)
    cout<<"7th Month"<<endl;
    else
    cout<<"month "<<(latest+1)<<endl;

    return 0;
}