//  Linear search---> for finding location of element.
// eg. finding location of element in an array.
//
//  n=10
//  A---> 6 11 25 8 15 7 12 20 9 14 
//        0 1  2  3 4  5 6  7  8  9
// lets say we wish to find the location of key = 12--->successful(6) 
// lets say we wish to find the location of key = 35--->unsuccessful. KEY NOT FOUND.

// In this example we will be making an array by taking inputs from user for elements.

// linear search

#include<iostream>
using namespace std;

// linear search function.
int linear_search(int key, int n, int arr[]){
      
      for(int i = 0; i < n; i++){
            if(key==arr[i]){
                  cout<<"key is found at:"<<i<<endl;
                  return 0;
            }
      }
cout<<"key is not found"<<endl;
}



int main(){
           
// taking input from user.
int n;
cout<<"n = ";
cin>>n;

int arr[n];

      for (int i = 0; i < n; i++)
      {
            cin>>arr[i];
      }

// displaying array
for (int i = 0; i < n; i++)
{
      cout<<arr[i]<<" ";
}

//linear search 
cout<<endl;
int key;
cout<<"key = ";
cin>>key;

linear_search(key,n,arr);

return 0;
}
