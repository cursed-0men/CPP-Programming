// drawing upper tirangular matrix(because upper triangle is empty or zero.)
// *
// * *
// * * * 
// * * * * 
#include<iostream>
using namespace std;
int main()
{
 for(int i = 0; i<=3; i++){

 for(int j = 0; j<=3; j++){
   if(j<=i){
    cout<<"* ";
   }
 }cout<<endl;
    
 }
 
 
 
    return 0;
}