// function template
// function that are generic in terms of datatype

// logic of function is same but datatype of parameters are different

// generalizing a function by class,

// Eg.: int max (int x, int y){
//          if(x>y){
//                return x;
//                      }
//          else{ 
//                return y;
//                }
//                }


// Eg.: float max (float x, float y){
//          if(x>y){
//                return x;
//                      }
//          else{ 
//                return y;
//                }
//                }


// now generalizing this function

#include<iostream>
using namespace std;

template<class T>  // class of type template
// we cna give any name of our choice instead of T.
T maximum(T x, T y){
      if(x>y){
            return x;
      }
      else{
            return y;
      }
}

int main(){
      cout<<maximum(10, 5)<<endl;
      cout<<maximum(12.5f, 12.0f)<<endl;        
return 0;
}