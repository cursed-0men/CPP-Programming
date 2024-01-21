/*   ADDING 2 MATRICES    */

// dimensions should be same of both matrices.

// corresponding elements are added.

// we have to use nested loops 2 times...
 
 // 1. addition operation.
 // 2. for dsiplaying resultant matrix.
// only if 3 variables are used.

//  #include<iostream>
//  using namespace std;
//  int main()
//  {
   
//    int a[2][3]={2,5,9,7,3,6};
//    int b[2][3]={6,3,4,9,5,2};

//  for(int i=0; i<2; i++){
// for(int j=0; j<3; j++){

// cout<<"\t"<<a[i][j]+b[i][j];
// }
// cout<<endl;
//  }
 
   
   
//      return 0;
//  }


// using functions for accepting, displaying and adding matrices.
// adding 2 matrices

#include<iostream>
using namespace std;

// accepting matrix function
void accept(int arr[3][3]){
      cout<<"enter elements for matrix: "<<endl;
      for (int i = 0; i < 3; i++)
      {
            for (int j = 0; j < 3; j++)
            {
                  cin>>arr[i][j];
            }
            
      }
      
}

// matrix display function
void display(int arr[3][3]){
      cout<<"matrix :"<<endl;
      for (int i = 0; i < 3; i++)
      {
            for (int j = 0; j < 3; j++)
            {
                  cout<<"\t"<<arr[i][j];
            }
            cout<<endl;
      }
}


// addition function

void add(int a[3][3], int b[3][3]){
      cout<<"addition : "<<endl;
      for (int i = 0; i < 3; i++)
      {
            for (int j = 0; j < 3; j++)
            {
                  cout<<"\t"<<a[i][j]+b[i][j];
            }
            cout<<endl;
      }
}


int main(){

int a[3][3];
accept(a);
display(a);

int b[3][3];
accept(b);
display(b);

add(a,b);
           
return 0;
}
