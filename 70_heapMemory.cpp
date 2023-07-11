    // HEAP memory allocation.

// Heap memory is allocated dynamically.
// size of the memory required in heap is decided at runtime not compile time.
// When we allocate memory in heap it is mostly in arrays.

// Eg.
#include<iostream>
using namespace std;
int main()
{
 
 // for creating array in STACK.
 int A[5]={1,2,3,4,5};

// for creating array in HEAP.
int *p;
p= new int[5]; // we can also write... int *p = new int[5]; 
// address for new int array is stored in p.


A[2]=15;
// this will update the value of A[2] in the satck as 15.

p[2]=15; 
// pointer can be treated as name of new array in the HEAP.
// also this will assign the value 15 to A[2].
 
    return 0;
}
