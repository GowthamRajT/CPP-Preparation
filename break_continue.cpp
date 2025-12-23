#include <iostream>
using namespace std;

int main() {
    
    for (int i=0;i<=50;i++)
    {
        if (i==5)
            continue;
        else if (i==49)
            break;
        cout<<i<<endl;
    }
    return 0;
}