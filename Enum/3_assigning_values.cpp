// Assigning Values

#include<iostream>
using namespace std;

enum day{
      mon = 5,
      tue = 10,
      wed = 100
};

           
int main(){
      day first = mon;
      day second = tue;
      day third = wed;

      cout<<first<<endl;
      cout<<second<<endl;
      cout<<third<<endl;
                   
return 0;
}