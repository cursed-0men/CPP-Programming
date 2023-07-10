/*---enum---*/
#include<iostream>
using namespace std;
enum day{mon,tues,wed,thu,fri,sat,sun};
int main(){

day d;
d=fri;
cout<<"value="<<d<<endl;
    return 0;
}
// mon-sun are like constants...we can't use statements like mon++