#include<iostream>
using namespace std;

//Function prototyping
void A(int n);
void B(int n);

//Recursive method A
void A(int n)
{
    if(n>0)
    {
        cout<<n<<" ";
        B(n-1);
    }
}

//Recursive method B
void B(int n)
{
    if(n>1)
    {
        cout<<n<<" ";
        A(n/2);
    }
}
//Main method
int main()
{
    int a = 20;
    A(a);
    return 0;

}