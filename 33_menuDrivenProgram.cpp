// Menu driven program
// arithmetic operations
#include <iostream>
using namespace std;
int main()
{

    cout << "-----MENU-----"<<endl;
    cout << "1. ADD"<<endl;
    cout << "2. SUBTRACT"<<endl;
    cout << "3. MULTIPLY"<<endl;
    cout << "4. DIVIDE"<<endl;
 
 int choice;
 cout<<"enter choice";
 cin>>choice;

 int a,b;
 cout<<"enter a,b:"<<endl;
 cin>>a>>b;

    switch (choice)
    {

    case 1:
        cout <<a+b;
        break;

    case 2:
        cout <<a-b;
        break;

    case 3:
        cout <<a*b;
        break;

    case 4:
        cout <<a/b;
        break;

    

    default:
        cout << "invalid choice";
    }

    return 0;
}