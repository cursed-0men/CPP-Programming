// we wish to print
// 1    2   3   4
// 5    6   7   8
// 9   10  11  12
// 13  14  15  16
#include <iostream>
using namespace std;
int main()
{
    int count=0;
    for (int i = 0; i <4; i++)
    {
    
        for (int j = 0;j<4; j++){
            count++;
            cout<<count<<"\t";
        }cout<<endl;
    }

    return 0;
}