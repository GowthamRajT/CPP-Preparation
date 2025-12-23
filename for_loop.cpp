#include <iostream>
using namespace std;

int main() {
    int n=5;
    int m=6;

    for(int i=0;i<=n;i++)
    {
        cout<<i<<endl;
    }

    for (int i=1;i<=n;i++) // outer for loop
    {
        for (int j=0;j<i;j++) // inner for loop
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}