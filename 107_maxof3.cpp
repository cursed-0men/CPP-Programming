// printing max of 3 numbers

#include<iostream>
using namespace std;

int max(int a,int b,int c){
      if(a>b && a>c){
            return a;
      }
      else if(b>c)
      {
            return b;
      }
      else{
            return c;
      }
}



int main(){
      int x,y,z;

      cout<<"x,y,z = ";
      cin>>x>>y>>z;


      int res = max(x,y,z);
      cout<<res<<" is maximum"<<endl;
                     
return 0;
}