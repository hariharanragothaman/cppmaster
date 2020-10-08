#include <iostream>
using namespace std;

void f(int* p)
{
    /*
     * Pointers associate 2 pieces of information
     * memory address - which is the value of the pointer itself
     * data-type of the variable pointed to - which is the kind of the variable located at the addres
     */

    int n = *p;   // Here a pointer is dereferenced - we access the value of the variable at the pointers address
}

// Declaring pointers
int *ptr;                       // pointer to an integer
struct coord *pcrd;             // pointer to a structure
void *vp;                       // void pointer

// Note - pointers are not guaranteed to be initialzed

int main()
{
    cout << "Pointers" << endl;
}