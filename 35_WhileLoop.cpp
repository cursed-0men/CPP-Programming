// WHILE LOOP

// Synatx:
//
// while(condition){
//    process;
//   }

// Eg. Displaying numbers from 1 to n(using while loop)
/**************************************
        
 C++ program to print all natual 
 numbers from 1 to n  using while loop
***************************************/


#include <iostream>
using namespace std;
int main() {
	int i = 1;
    int n;
    cout<<"enter n: ";
    cin>>n;
	while (i <= n) {
		cout << "\n" << i;
		i++;
	}
    return 0;
}
