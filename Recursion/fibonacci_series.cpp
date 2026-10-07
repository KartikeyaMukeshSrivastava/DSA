// 0 1 1 2 3 5
#include <iostream>
using namespace std;
int fib(int n)
{
    if(n<=1)
    {
        return n;
    }
    else{
        return fib(n-2)+fib(n-1);
    }
}
//using memoization
int F[100];
int mfib(int n)
{
    if(n<=1)
    {
        F[n]=n;
        return n;
    }
    else
    {
        if(F[n-2]==-1)
        {
            F[n-2]=mfib(n-2);
        }
        if(F[n-1]==-1)
        {
            F[n-1]=mfib(n-1);
        }
        return F[n-2]+F[n-1];
    }
}
int main()
{
    int n = 5;
    for(static int i = 0;i<n;i++)
    {
        F[i]=-1;
    }
    cout<<n<<"th term in the fibonacci series is "<<mfib(n-1)<<endl;
    return 0;
}