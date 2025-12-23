#include <iostream>
using namespace std;

int main() {
    
    int n[5][4]={
        {1,2,3,4},
        {1,2,3,4},
        {1,2,3,4},
        {1,2,3,4},
        {1,2,3,4}
    };

    int rowlen = sizeof(n)/sizeof(n[0]); // finding row length
    int collen= sizeof(n[0])/sizeof(n[0][0]); // finding column length 

    cout<<rowlen<<endl;
    cout<<collen<<endl;

    for (int i=0;i<rowlen;i++)
    {
        for(int j=0;j<collen;j++)
        {
            cout<<n[i][j]<<" ";
        }
        cout<<endl;

    }

    return 0;
}