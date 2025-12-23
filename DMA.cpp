#include <iostream>
using namespace std;

int main() {
    
    int num;
    cout<<"Enter the number of teams: ";
    cin>>num;

    int* ptr = new int[num]; // allocating memory for a pointer 
    for (int i=0;i<num;i++)
    {
    cout<<"Enter "<<num<<" teams: ";
    cin>>ptr[i];
    }
    cout<<endl;

    for (int i=0;i<num;i++)
    {
    cout<<ptr[i]<<" ";
    }
    cout<<endl;

    return 0;
}