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


// using 3 variables.

 #include<iostream>
 using namespace std;
 int main()
 {
   
   int a[2][3]={2,5,9,7,3,6};
   int b[2][3]={6,3,4,9,5,2};
   int c[2][3];

 for(int i=0; i<2; i++){
for(int j=0; j<3; j++){

c[i][j]=a[i][j]+b[i][j];
}
 }
 
 for(int i=0; i<2; i++){
for(int j=0; j<3; j++){

cout<<"\t"<<c[i][j];

}
cout<<endl;
 }
   
     return 0;
 }
 // the same goes for remaining operation.