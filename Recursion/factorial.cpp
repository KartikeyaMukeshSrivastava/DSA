#include <iostream>
using namespace std;
int fact(int n)
{
    if(n==0)
    {
        //0! = 1
        return 1;
    }
    else
    {
        return fact(n-1) * n;
    }
}
int main()
{
    int num = 5;
    cout << "The factorial of "<<num<<" is "<<fact(num);
    return 0;

}