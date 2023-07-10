// checking nature of roots of quadratic equation.
// d=(b*b)-(4*a*c)
// d=0 real and equal
// d>0 real and unequal
// d<0 imaginary



#include<iostream>
#include<math.h>
using namespace std;
int main(){
float a,b,c,d,r1,r2;
cout<<"enter a,b,c,d,r1,r2";
cin>>a>>b>>c;

d=(b*b)-(4*a*c);

if(d==0){
cout<<"real and equal";
cout<<endl<<(-b)/(2*a);
}

else if(d>0){

cout<<"real and unequal";
cout<<endl<< (-b+sqrt(b*b-4*a*c))/(2*a);
cout<<endl<< (-b-sqrt(b*b-4*a*c))/(2*a);
}
else{
    cout<<"imaginary";
}
return 0;
}

