// The structure is a user-defined data type that is available in C++.
// Structures are used to combine different types of data types.


//Creating Structure : 
// struct structure_name{

// structure elements

// };


#include<iostream>
using namespace std;
           
struct student{  // structure name : student
      string name;
      int prn;
      int Percentage;
};         

int main(){
student s1; // student datatype and variable name s1
// just like int a;

s1.name = "Dhyey";
s1.prn = 1032220001;
s1.Percentage = 99;

cout<<s1.name<<endl;
cout<<s1.prn<<endl;
cout<<s1.Percentage<<endl;        
           
return 0;
}

