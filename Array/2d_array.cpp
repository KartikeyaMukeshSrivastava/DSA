#include <iostream>
using namespace std;

int main()
{
    //Method 1
    int A[3][4]; // Array declaration
    int B[2][3] = {
        {10,20,30},
        {40,50,60}
    };

    //Method 2
    int *C[2];
    C[0] = new int [3];
    C[1] = new int [3];

    //Method 3
    int  **D;
    D = new int*[2];
    D[0] = new int [3];
    D[1] = new int [3];
    return 0;
}