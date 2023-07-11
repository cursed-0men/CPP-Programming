// pointer arithmetic.
#include<iostream>
using namespace std;
int main()
{
 
        int a[5]={5,21,8,9,7};
        int *p = a; // base address of a is stored in p.
        // cout<<*p<<endl;
        // // *p contains bas address of a, which will print element at that address. i.e -> 5.
        // // de-reference.
        
        // p++;
        // cout<<*p<<endl;
        // // 21

        // p--;
        // cout<<*p<<endl;
        // // 5

        cout<<*p<<endl;   // 5
        cout<<*p+2<<endl; // 5+2=7.
        cout<<*(p+2)<<endl<<endl; // 8.
        // p+2 is element 8.

for(int i=0; i<5; i++){
    cout<<a[i]<<endl; // we can also write *(a+i) Or *(p+i) OR p[i].

}

cout<<endl;
for(int i=0; i<5; i++){
    cout<<a+i<<endl;  // it will show address of these elements.
    // we can also write (p+i) instead of (a+i).
}
    return 0;
}

// star will give data.