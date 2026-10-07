#include <iostream>
using namespace std;
double calculate_e(int x,int n)
{
    static double s = 1; 
    if(n==0)
    {
        return s;
    }
    else
    {
        s = 1 + x*s/n;
        return calculate_e(x,n-1);
    }
}
int main()
{
    int x = 2;
    int n = 10;
    cout <<"The value of e power "<<x<<" till "<<n<<" number of terms is "<<calculate_e(x,n);
    return 0;
}