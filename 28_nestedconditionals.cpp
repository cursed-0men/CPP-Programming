// display grades for student's marks.
#include<iostream>
using namespace std;
int main(){
int m1,m2,m3,tot,avg;

cout<<"enter marks(out of 100):";
cin>>m1>>m2>>m3;

tot = m1+m2+m3;
cout<<"total = "<<tot<<endl;

avg = tot/3;
cout<<"average = "<<avg<<endl;

if(avg>=60){
    cout<<"grade:A";
}
else if(avg>=35 && avg<60){
    cout<<"grade:B";
}
else{
    cout<<"grade:C";
}

return 0;
}