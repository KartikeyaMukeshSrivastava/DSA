#include<iostream>
using namespace std;
void display(int n)
{
    if(n>0)
    {
        cout <<n<<" ";
        display(n-1);
    }
}
int main()
{
    int num = 20;
    display(num);
      return 0;
}