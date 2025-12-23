#include <iostream>
using namespace std;

void add(int &num) // call by ref
    {
        num = num+5; 
        cout<<num<<endl;
    }

void arr1(int arr[])
{
    arr[0] = 21;
    arr[1] = 7;
}

int main() {

    int num = 7; // call by value 
    add(num);
    cout<<num<<endl;
    
    int arr[] = {1, 2, 3, 4, 5};
    int length = sizeof(arr)/sizeof(arr[0]);
    cout<<"length of array "<<length<<endl;
    arr1(arr);
    for (int i=0;i<length;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}

// in void we have to mention &num to change the whole value of num to 10 else in main only 5 will be printed