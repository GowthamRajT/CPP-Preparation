#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string fruits[5] = {"apple","orange","banana","pineapple","grapes"};
    string cost[5] = {"80","100","120","140","160"};

    cout<<fruits[2]<<endl;
    cout<<cost[2]<<endl;

    int length = sizeof(fruits)/sizeof(fruits[2]);
    cout<<"length of the string: ";
    cout<<length<<endl;

    for (int i=0;i<length;i++)
    {
        cout<<fruits[i]<<endl;
    }

    // for each loop only used in arrays

    for (string i :cost)
    {
        cout<<i<<endl;
    }

    return 0;
}