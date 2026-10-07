#include <iostream>
using namespace std;

class Array{
    private:
        int *A;
        int size;
        int length;
    public:
        Array(int size){
            this->size = size;
            A = new int[size];
        }
        
}