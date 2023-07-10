// counting the number of positive and negative numbers in array.

#include<iostream>
using namespace std;
int main()
{
 
 int a[7]={5,2,6,8,9,-4,-3};
 int pve=0;
 int nve=0;
 int i;
 for(i=0; i<=6; i++){

if(a[i]<0){
nve++;
}

else{
    pve++;
}
 }

cout<<"positive counts = "<<pve<<endl;
cout<<"negative counts = "<<nve;
    return 0;
}