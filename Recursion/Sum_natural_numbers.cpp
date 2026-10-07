#include <iostream>
using namespace std;

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return sum(n-1) + n;
    }
}

int main()
{
    int n = 5;
    cout << "The sum of natural numbers till "<<n<<" = "<<sum(n)<< endl;
    int sum1 = n*(n+1)/2;
    cout << "Sum using direct formula = "<<sum1;
    return 0;
}